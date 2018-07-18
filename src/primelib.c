

#include "primelib.h"

#include <stdlib.h>


// modular power algorithm using binary decomposition
uint64_t _MR_modpow(uint64_t a, uint64_t b, uint64_t m) {
    // holds a^(2^n)
    uint64_t p = a;
    uint64_t r = 1;
    while (b) {
        if (b & 1) r = (r * p) % m;
        p = (p * p) % m;
        b /= 2;
    }
    return r;
}

bool _MR_witness(uint64_t x, uint64_t w, uint64_t d) {
    uint64_t mod;
}

// miller rabin
bool primelib_isprime_MR(uint64_t x) {
    // special case
    if (x <= 3) {
        return x == 2 || x == 3;
    }

    // now we need to find (x-1) = (2^r)*d, d being odd
    uint64_t _compose = x - 1;
    uint64_t r = 0, d = _compose;

    while (_compose % 2 == 0) {
        _compose /= 2;

        d = _compose;
        r++;
    }

    printf("%d-1=%d*2^%d\n", x, d, r);


    uint64_t witnesses[] = { 2, 3, 5, 7 };

    uint64_t w_i;
    for (w_i = 0; w_i < sizeof(witnesses) / sizeof(uint64_t); ++w_i) {
        uint64_t w = witnesses[w_i];
    }


    return true;
}


bool primelib_isprime_bruteforce(uint64_t x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    uint64_t i;
    for (i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false; 
    }
    return true;
}


void primesieve_init(primesieve_t * ps) {
    ps->N = 0;
    ps->is_prime = NULL;
}

void primesieve_set_eratosthenes(primesieve_t * ps, uint64_t N) {
    ps->N = N;
    ps->is_prime = (bool *)realloc((void *)ps->is_prime, sizeof(bool) * N);
    uint64_t i;
    for (i = 0; i < N; ++i) {
        // set to whether it is odd
        ps->is_prime[i] = i % 2 == 1;
    }

    ps->is_prime[0] = 0;
    ps->is_prime[1] = 0;
    ps->is_prime[2] = 1;

    for (i = 3; i < N; i += 2) {
        if (ps->is_prime[i]) {
            uint64_t j;
            for (j = 3 * i; j < N; j += 2 * i) {
                ps->is_prime[j] = false;
            }
        }
    }
}


