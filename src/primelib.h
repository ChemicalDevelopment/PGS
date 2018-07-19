/*

primesieve library for caching prime data

*/


#ifndef __PRIMELIB_H__
#define __PRIMELIB_H__

#include <stdbool.h>

#include <stdint.h>

#define PRIMESIEVE_BITPACKED 0
#define PRIMESIEVE_BYTEPACKED 1

// sieve of eratosthenes, stores whether each is prime in the is_prime array.
// is_prime array is sizeof(bool) * N size,  is_prime[0] stores whether 0 is prime, etc
typedef struct _primesieve_s {

    // see PRIMESIEVE_*PACKED macros
    int type;

    uint64_t N;

    char * is_prime;

} primesieve_t;

// ps can be NULL
bool primelib_isprime(uint64_t x, primesieve_t * ps);

bool primelib_isprime_MR(uint64_t x);

bool primelib_isprime_bruteforce(uint64_t x);

void primesieve_init(primesieve_t * ps, int type);

bool primelib_isprime_primesieve(primesieve_t * ps, uint64_t x);

void primesieve_set_eratosthenes(primesieve_t * ps, uint64_t N);


#endif


