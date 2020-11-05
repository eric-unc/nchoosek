#ifndef N_CHOOSE_K_H
#define N_CHOOSE_K_H

#include <stdint.h>

/*
 * Returns n choose k, that is, the value of the binomial coefficient nCk.
 *
 * This should be calculated cursively. 
 */
uint32_t nchoosek(uint32_t n, uint32_t k);

#endif
