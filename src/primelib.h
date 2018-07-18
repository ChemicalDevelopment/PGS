/*

primesieve library for caching prime data

*/


#ifndef __PRIMELIB_H__
#define __PRIMELIB_H__

#include <stdbool.h>

#include <stdint.h>


// sieve of eratosthenes, stores whether each is prime in the is_prime array.
// is_prime array is sizeof(bool) * N size,  is_prime[0] stores whether 0 is prime, etc
typedef struct _primesieve_s {

    uint64_t N;

    bool * is_prime;

} primesieve_t;

bool primelib_isprime_MR(uint64_t x);

bool primelib_isprime_bruteforce(uint64_t x);

void primesieve_init(primesieve_t * ps);

void primesieve_set_eratosthenes(primesieve_t * ps, uint64_t N);


#endif


