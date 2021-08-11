#include "mrand.h"

MRand *init_mrand(size_t seed) {
    MRand *this = (MRand*)calloc(1, sizeof(MRand));

    this->seed = seed;

    return this;
}

void *free_mrand(MRand *this) {
    size_t *oseed = (size_t*)malloc(sizeof(size_t));

    *oseed = this->seed;

    free(this);

    return (void*)oseed;
}

void mrand_seed(MRand *this, size_t seed) {
    this->seed = seed;
}

size_t mrand_generate(MRand *this) {
    this->seed = this->seed * (this->seed + this->seed);

    if (this->seed != 0 && this->seed % 2 == 0) {
        this->seed = this->seed - (this->seed / 2);
    }

    return this->seed;
}
