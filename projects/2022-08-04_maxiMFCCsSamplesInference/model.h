extern "C"{
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

void apply_logic_gate_net_singleval (char const* inp, int* out, size_t len, int classes) {
    char* out_temp = (char*)malloc(168*sizeof(char));

    for(size_t i = 0; i < len; ++i) {
        // Applying the logic gate net
        logic_gate_net(inp, out_temp);
        const int classSize = 168/2;

        for(size_t c = 0; c < classes; ++c) {  // for each class
            int classSum = 0;
            for(size_t node=classSize; node < (classSize) + classSize; node++) {
                classSum += out_temp[node] & 1; //take the lowest bit, ignore the rest
            }
            out[c] = classSum;
        }

    }
    free(out_temp);
}

int model_next(std::vector<double> mfccs, int numMFCCs, int classes, float min, float range) {
    char modelInputs[84];
    size_t bitCounter=0;
    for(size_t i=0; i < numMFCCs; i++) {
        // rescale 0-127
        // pre-scaling to 7-bit range
        double inVal = (mfccs[i] + min) / range * 127.0;
        size_t inInt = static_cast<size_t>(inVal);

        for(size_t bit = 0; bit < 7; bit++) {
            modelInputs[bitCounter] = inInt & 1;
            bitCounter++;
            inInt = inInt >> 1;
        }
    }

    int modelOutputs[classes];

    apply_logic_gate_net_singleval(&modelInputs[0], &modelOutputs[0], 1, classes);

    printf("model_outputs: %i %i\n", modelOutputs[0], modelOutputs[1]);

    // TODO: Handle N classes
    int out = modelOutputs[0] > modelOutputs[1] ? 0 : 1;
    return out;
}

}