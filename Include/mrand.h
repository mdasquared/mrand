#ifndef MRAND_H
#define MRAND_H

#include <stdint.h>

extern uint32_t mrand_state = 777;

uint8_t mrand_generate();

#endif
