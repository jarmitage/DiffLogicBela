/*

TODO: modelOutputs[0] and modelOutputs[1] are exactly the same, so the model is not working properly.

*/




/*
This code sucks because:
- The end of the sample is not accessible for automatically stopping Bela audio
- As a result I'm using the unrelated timer to stop Bela audio and the sample sometimes loops
- The zero padding in the sampler gets written to the MFCC log file
- It would be great to streamline this further...
*/

#include <Bela.h>
#include <libraries/Scope/Scope.h>
#include <libraries/WriteFile/WriteFile.h>
#include <libraries/AudioFile/AudioFile.h>
#include <vector>
#include <cmath>
#include "maximilian.h"
#include "libs/maxiFFT.h"
#include "libs/maxiMFCC.h"

#define MODEL_0_1

#ifdef MODEL_1_2_3
#include "models/model_1-2-3.h"
#define MODEL_CLASSES 3
#define MODEL_MIN -3.196285
#define MODEL_RANGE 10.296314
#endif

#ifdef MODEL_0_1
#include "models/model_0-1.h"
#define MODEL_CLASSES 2
#define MODEL_MIN -2.226402
#define MODEL_RANGE 7.88012
#endif

#ifdef MODEL_1_2
#include "models/model_1-2.h"
#define MODEL_CLASSES 2
#define MODEL_MIN -3.196285
#define MODEL_RANGE 10.296314
#endif

#ifdef MODEL_2_3
#include "models/model_2-3.h"
#DEFINE MODEL_CLASSES 2
#DEFINE MODEL_MIN -3.196285
#DEFINE MODEL_RANGE 10.296314
#endif

#ifdef MODEL_3_4
#include "models/model_3-4.h"
#define MODEL_CLASSES 2
#define MODEL_MIN -2.904844
#define MODEL_RANGE 9.462881
#endif

#include "model.h"

// Flags
bool shouldRecord = false;
bool shouldInference = true;
bool recordSensor = false;
bool startRecording = false;
bool stopRecording = false;
bool newMFCCs = false;

// SampleLoader
#define BUFFER_LEN 22050   // BUFFER LENGTH
std::string gFilename = "samples/2.wav";
int gNumFramesInFile;
// Two buffers for each channel:
// one of them loads the next chunk of audio while the other one is used for playback
std::vector<std::vector<float> > gSampleBuf[2];
// read pointer relative current buffer (range 0-BUFFER_LEN)
// initialise at BUFFER_LEN to pre-load second buffer (see render())
int gReadPtr = BUFFER_LEN;
// read pointer relative to file, increments by BUFFER_LEN (see fillBuffer())
int gBufferReadPtr = 0;
// keeps track of which buffer is currently active (switches between 0 and 1)
int gActiveBuffer = 0;
// this variable will let us know if the buffer doesn't manage to load in time
int gDoneLoadingBuffer = 1;
AuxiliaryTask gFillBufferTask;
void fillBuffer(void*) {
  // increment buffer read pointer by buffer length
  gBufferReadPtr+=BUFFER_LEN;
  // reset buffer pointer if it exceeds the number of frames in the file
  if(gBufferReadPtr>=gNumFramesInFile)
      gBufferReadPtr=0;
  int endFrame = gBufferReadPtr + BUFFER_LEN;
  int zeroPad = 0;
  // if reaching the end of the file take note of the last frame index
  // so we can zero-pad the rest later
  if((gBufferReadPtr+BUFFER_LEN)>=gNumFramesInFile-1) {
    endFrame = gNumFramesInFile-1;
    zeroPad = 1;
  }
  for(unsigned int ch = 0; ch < gSampleBuf[0].size(); ++ch) {
    // fill (nonactive) buffer
    AudioFileUtilities::getSamples(gFilename,gSampleBuf[!gActiveBuffer][ch].data(),ch
      ,gBufferReadPtr,endFrame);

    // zero-pad if necessary
    if(zeroPad) {
      int numFramesToPad = BUFFER_LEN - (endFrame-gBufferReadPtr);
      for(int n=0;n<numFramesToPad;n++)
        gSampleBuf[!gActiveBuffer][ch][n+(BUFFER_LEN-numFramesToPad)] = 0;
    }
  }
  gDoneLoadingBuffer = 1;
  // printf("done loading buffer!\n");
}

// Log and oscilloscope
WriteFile logger;
Scope scope;

// Maximilian MFCCs
AuxiliaryTask mfcc_task;
void mfcc_analysis (void*);
maxiOsc osc1, osc2, osc3, osc4, osc5;
maxiFFT fft;
maxiMFCC mfcc;
std::vector<float> mags, phases;
std::vector<double> mfccs;
std::vector<double> mfccs_to_log;
std::vector<double> outputs;
int numMFCCs = 13;
int model_out = 0;

// Recording audio -> MFCCs
int audioSampleRate = 44100;
int audioSamplesElapsed = 0;
int recordingCountdown = 3;
int recordingDuration = 5;

int mfccsCount = 0;

bool setup(BelaContext *context, void *userData)
{
  // Setup MFCC analysis
  fft.setup(1024, 256, 1024); // fftSize, hopSize, windowSize
  mags.resize(512, 0);
  phases.resize(512, 0);
  mfccs.resize(numMFCCs,0);
  mfccs_to_log.resize(numMFCCs-1,0);
  outputs.resize(numMFCCs,0);
  mfcc.setup(fft.getNumBins(), fft.getNumBins()/2, mfccs.size(), 20, 20000);
  mfcc_task = Bela_createAuxiliaryTask(mfcc_analysis, 50, "mfcc-task");

  // Setup logger
  logger.setup("mfccs.json");
  logger.setHeader("{\"data\":[\n");
  logger.setFooter("]}\n");
  logger.setFormat("[ %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f ], \n");
  logger.setFileType(kText);
  logger.setEchoInterval(10000);

  // Setup scope
  scope.setup(3, context->audioSampleRate);

  // Setup SampleLoader
  // Initialise auxiliary tasks
	if((gFillBufferTask = Bela_createAuxiliaryTask(&fillBuffer, 90, "fill-buffer")) == 0)
		return false;

  gNumFramesInFile = AudioFileUtilities::getNumFrames(gFilename);

  if(gNumFramesInFile <= 0)
      return false;

  if(gNumFramesInFile <= BUFFER_LEN) {
      printf("Sample needs to be longer than buffer size. This example is intended to work with long samples.");
      return false;
  }

	gSampleBuf[0] = AudioFileUtilities::load(gFilename, BUFFER_LEN, 0);
	gSampleBuf[1] = gSampleBuf[0]; // initialise the inactive buffer with the same channels and frames as the first one

  return true;
}

void mfcc_analysis (void*) 
{
  mags = fft.getMagnitudes();
  phases = fft.getPhases();
  mfccs = mfcc.mfcc(mags);
  newMFCCs = true;
  std::copy(mfccs.end() - 12, mfccs.end(), mfccs_to_log.begin());
  if (shouldRecord == true)
  {
    for (size_t i = 0; i < numMFCCs-1; i++)
    {
      logger.log(mfccs_to_log[i]);
    }
    // logger.log(mfccsCount);
    // printf("Logged MFCCs %i times!\n", ++mfccsCount);
  }
}

void record_audio_inputs(){
  if (shouldRecord == true) {
    if (startRecording == false) {
      if (++audioSamplesElapsed == audioSampleRate) {
        audioSamplesElapsed = 0;
        rt_printf("Recording starting in %i seconds...\n", recordingCountdown);
        if (--recordingCountdown == 0) {
          rt_printf("Recording started!\n");
          startRecording = true;
        }
      }
    }
    if (startRecording == true) {
      if (++audioSamplesElapsed == audioSampleRate) {
        audioSamplesElapsed = 0;
        rt_printf("Recording ending in %i seconds...\n", recordingDuration);
        if (--recordingDuration == 0) {
          rt_printf("Stopping recording!\n");
          stopRecording = true;
        }
      }
    }
    if (stopRecording == true) {
      Bela_requestStop();
    }
  }
}

void record_sample_inputs(){

}

void inference(){
  if (shouldInference) {
    if (newMFCCs) {
      model_out = model_next(mfccs, numMFCCs, MODEL_CLASSES, MODEL_MIN, MODEL_RANGE);
      // rt_printf("model_out: %i\n", model_out);
      newMFCCs = false;
    }
  }
}

void render(BelaContext *context, void *userData)
{

  for (unsigned int n = 0; n < context->audioFrames; ++n)
  {

    // // Audio input -> MFCCs
    // float l = audioRead(context,n,0);
    // // float r = audioRead(context,n,1);
    // // float in = (l+r)*0.5;
    // // float out = 0.0;
    // if (fft.process(l, maxiFFT::WITH_POLAR_CONVERSION)) {
    //   Bela_scheduleAuxiliaryTask (mfcc_task);
    // }
    // record_audio_inputs();

    // Sample -> MFCCs 
    // Increment read pointer and reset to 0 when end of file is reached
    if(++gReadPtr >= BUFFER_LEN) {
      if(!gDoneLoadingBuffer)
        rt_printf("Couldn't load buffer in time :( -- try increasing buffer size!");
      gDoneLoadingBuffer = 0;
      gReadPtr = 0;
      gActiveBuffer = !gActiveBuffer;
      Bela_scheduleAuxiliaryTask(gFillBufferTask);
    }
    // Bela_requestStop(); // Stop audio rendering when end of file is reached
    float out = 0.0f; // Write sample to all audio output channels
    for(unsigned int channel = 0; channel < context->audioOutChannels; channel++) {
      // Wrap channel index in case there are more audio output channels than the file contains
      out = gSampleBuf[gActiveBuffer][channel%gSampleBuf[0].size()][gReadPtr];
      audioWrite(context, n, channel, out);
    }
    if (fft.process(out, maxiFFT::WITH_POLAR_CONVERSION)) {
      Bela_scheduleAuxiliaryTask (mfcc_task);
    }

  }

  // scope.log((float)model_out);
  inference();

}

void cleanup(BelaContext *context, void *userData){}
