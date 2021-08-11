#ifndef MRAND_H
#define MRAND_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

typedef struct
{
    size_t seed;
} MRand;

MRand *init_mrand(size_t);
void *free_mrand(MRand*);

void mrand_seed(MRand*, size_t);
size_t mrand_generate(MRand*);

#ifdef __cplusplus
}
#endif

#endif
