#include "mrand.h"

uint8_t mrand_generate() {
    mrand_state = mrand_state * 0x19660D + 0x3C6EF35F;

    return mrand_state >> 24;
}
