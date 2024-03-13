#include <Bela.h>
#include <libraries/Scope/Scope.h>
#include <cmath>
// #include "DiffLogicModel.h"
#include "model2-mfcc-l4-tiny.h"

Scope scope;

int numMFCCs = 13;
std::vector<double> mfccs;

bool setup(BelaContext *context, void *userData)
{
	mfccs.resize(numMFCCs, 0);
	scope.setup(3, context->audioSampleRate);

	return true;
}

void render(BelaContext *context, void *userData)
{
	// int model_out = DiffLogicModelNext(mfccs, numMFCCs);
	int model_out = process(mfccs, numMFCCs);
	printf("model_out: %i\n", model_out);
}

void cleanup(BelaContext *context, void *userData)
{

}
