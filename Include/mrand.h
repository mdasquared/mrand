#ifndef MRAND_H
#define MRAND_H

#ifdef __cplusplus
extern "C" {
#endif

#include <time.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t mrand_state;

void init_mrand(uint32_t);
void mrand_seed(uint32_t);
uint8_t mrand_generate();

#ifdef __cplusplus
}
#endif

#endif
