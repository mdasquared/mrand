#include "mrand.h"

void init_mrand(uint32_t seed) {
#ifdef _USE_CRAND
    srand(seed);
    mrand_state = rand();
#else
    mrand_state = seed;
#endif
}

void mrand_seed(uint32_t seed) {
    mrand_state = mrand_state + seed;
}

uint8_t mrand_generate() {
    mrand_state = mrand_state * 0x19660D + 0x3C6EF35F;

    return mrand_state >> 24;
}
