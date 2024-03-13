#include <Bela.h>
#include <libraries/Scope/Scope.h>
#include <libraries/WriteFile/WriteFile.h>
#include <libraries/AudioFile/AudioFile.h>
#include <vector>
#include <cmath>
#include "maximilian.h"
#include "libs/maxiFFT.h"
#include "libs/maxiMFCC.h"
// #include "DiffLogicModel.h"
// #include "model2-mfcc-l4-tiny.h"
#include "model3-mfcc.h"

// Flags
bool shouldRecord = true;
bool shouldInference = false;
bool recordSensor = false;
bool startRecording = false;
bool stopRecording = false;
bool newMFCCs = false;

// SampleLoader
std::string gFilename = "samples/5.wav";
int gStartFrame = 44100;
int gEndFrame = 88200;
std::vector<std::vector<float> > gSampleData;
unsigned int gReadPtr; // Position of last read sample from file
unsigned int gSampleLength; // Length of sample
unsigned int gSampleCount = 0; // Count of samples

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
int recordingDuration = 10;

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
  gSampleData = AudioFileUtilities::load(gFilename, gEndFrame - gStartFrame, gStartFrame);
  gSampleLength = gSampleData[0].size();

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
      model_out = process(mfccs, numMFCCs);
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
    if(++gReadPtr > gSampleData[0].size()) {
      gReadPtr = 0; // Increment read pointer & reset to 0 when end of file is reached
      Bela_requestStop(); // Stop audio rendering when end of file is reached
    }
    float out = 0.0f; // Write sample to all audio output channels
    for(unsigned int channel = 0; channel < context->audioOutChannels; channel++) {
      // Wrap channel index in case there are more audio output channels than the file contains
      out = gSampleData[channel % gSampleData.size()][gReadPtr];
      audioWrite(context, n, channel, out);
    }
    if (fft.process(out, maxiFFT::WITH_POLAR_CONVERSION)) {
      Bela_scheduleAuxiliaryTask (mfcc_task);
    }

  }

  // scope.log((float)model_out);
  // inference();

}

void cleanup(BelaContext *context, void *userData){}
