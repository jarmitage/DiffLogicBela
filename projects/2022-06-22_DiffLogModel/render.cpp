#include <Bela.h>
#include <libraries/Scope/Scope.h>
#include <cmath>
#include "DiffLogicModel.h"

Scope scope;

int numMFCCs = 13;
std::vector<double> mfccs;

bool setup(BelaContext *context, void *userData)
{
	mfccs.resize(numMFCCs, 0);
	scope.setup(3, context->audioSampleRate);

	// for (int i = 0; i < numMFCCs; i++)
	// {
	// 	input[i] = 0.0;
	// 	output[i] = 0.0;
	// }

	return true;
}

void render(BelaContext *context, void *userData)
{
	int model_out = DiffLogicModelNext(mfccs, numMFCCs);
	printf("model_out: %i\n", model_out);

	// for (unsigned int n = 0; n < context->audioFrames; ++n)
	// {
	// 	float in_l = audioRead(context,n,0);
	// 	float in_r = audioRead(context,n,1);
	// 	float out = 0.0;
		
	// 	scope.log(in_l, in_r, out);

	// 	audioWrite(context, n, 0, out);
	// 	audioWrite(context, n, 1, out);
	// }
}

void cleanup(BelaContext *context, void *userData)
{

}
