

#include "primelib.h"

#include <stdlib.h>

// upper limits on checking methods
#define PRIMECHECK_BRUTEFORCE_CUTOFF 3000


// 'ps' can be NULL
// guaranteed to work for x < 341,550,071,728,321 (341 trillion)
bool primelib_isprime(uint64_t x, primesieve_t * ps) {
    if (ps != NULL && x < ps->N) {
        return primelib_isprime_primesieve(ps, x);
    } else if (x < PRIMECHECK_BRUTEFORCE_CUTOFF) {
        return primelib_isprime_bruteforce(x);
    } else {
        return primelib_isprime_MR(x);
    }
}

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

// return 'true' if possibly prime, 'false' if composite
bool _MR_witness(uint64_t x, uint64_t w, uint64_t r, uint64_t d) {
    uint64_t mod = _MR_modpow(w, d, x);
    if (mod == 1 || mod == x - 1) return true;
    if (r == 0) return false;

    uint64_t i;
    for (i = 0; i < r - 1; ++i) {
        mod = (mod * mod) % x;
        if (mod == 1) return false;
        if (mod == x - 1) return true;
    }

    return false;
}

// miller rabin
bool primelib_isprime_MR(uint64_t x) {
    // special case
    if (x <= 3) {
        return x == 2 || x == 3;
    }
    if (x % 2 == 0) return false;

    // now we need to find (x-1) = (2^r)*d, d being odd
    uint64_t _compose = x - 1;
    uint64_t r = 1, d = _compose / 2;

    while (_compose % 2 == 0) {
        _compose /= 2;

        d = _compose;
        r++;
    }

 //   printf("%d-1=%d*2^%d\n", x, d, r);
/*
 * if n < 1,373,653, it is enough to test a = 2 and 3;
 * if n < 9,080,191, it is enough to test a = 31 and 73;
 * if n < 4,759,123,141, it is enough to test a = 2, 7, and 61;
 * if n < 1,122,004,669,633, it is enough to test a = 2, 13, 23, and 1662803;
 * if n < 2,152,302,898,747, it is enough to test a = 2, 3, 5, 7, and 11;
 * if n < 3,474,749,660,383, it is enough to test a = 2, 3, 5, 7, 11, and 13;
 * if n < 341,550,071,728,321, it is enough to test a = 2, 3, 5, 7, 11, 13, and 17.
 */
 
    if (x < 2047) return _MR_witness(x, 2, r, d);
    if (x < 1373653) return _MR_witness(x, 2, r, d) && _MR_witness(x, 3, r, d);
    if (x < 9080191) return _MR_witness(x, 31, r, d) && _MR_witness(x, 73, r, d);
    if (x < 4759123141) return _MR_witness(x, 2, r, d) && _MR_witness(x, 7, r, d) && _MR_witness(x, 61, r, d);
    if (x < 1112004669633) return _MR_witness(x, 2, r, d) && _MR_witness(x, 13, r, d) && _MR_witness(x, 23, r, d) && _MR_witness(x, 1662803, r, d);
    if (x < 2152302898747) return _MR_witness(x, 2, r, d) && _MR_witness(x, 3, r, d) && _MR_witness(x, 5, r, d) && _MR_witness(x, 7, r, d) && _MR_witness(x, 11, r, d);
    if (x < 3474749660383) return _MR_witness(x, 2, r, d) && _MR_witness(x, 3, r, d) && _MR_witness(x, 5, r, d) && _MR_witness(x, 7, r, d) && _MR_witness(x, 11, r, d) && _MR_witness(x, 13, r, d);
    if (x < 341550071728321) return _MR_witness(x, 2, r, d) && _MR_witness(x, 3, r, d) && _MR_witness(x, 5, r, d) && _MR_witness(x, 7, r, d) && _MR_witness(x, 11, r, d) && _MR_witness(x, 13, r, d) && _MR_witness(x, 17, r, d);

    return false;
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


bool _PS_get(primesieve_t * ps, uint64_t x) {
    if (ps->type == PRIMESIEVE_BYTEPACKED) {
        return ps->is_prime[x];
    } else {
        return 1 & (ps->is_prime[x >> 3] >> (x & 7));
    }
}

void _PS_set(primesieve_t * ps, uint64_t x) {
    if (ps->type == PRIMESIEVE_BYTEPACKED) {
        ps->is_prime[x] = true;
    } else {
        ps->is_prime[x >> 3] |= 1ULL << (x & 7);
    }
}

void _PS_clear(primesieve_t * ps, uint64_t x) {
    if (ps->type == PRIMESIEVE_BYTEPACKED) {
        ps->is_prime[x] = false;
    } else {
        ps->is_prime[x >> 3] &= ~(1ULL << (x & 7));
    }
}


void primesieve_init(primesieve_t * ps, int type) {
    ps->N = 0;
    ps->is_prime = NULL;
    if (type == PRIMESIEVE_BITPACKED || type == PRIMESIEVE_BYTEPACKED) {
        ps->type = type;
    } else {
        ps->type = PRIMESIEVE_BYTEPACKED;
    }
}

bool primelib_isprime_primesieve(primesieve_t * ps, uint64_t x) {
    if (x < ps->N) {
        return _PS_get(ps, x);
    }
    return false;
}

void primesieve_set_eratosthenes(primesieve_t * ps, uint64_t N) {
    ps->N = N;
    uint64_t i;

    if (ps->type == PRIMESIEVE_BITPACKED) {
        ps->is_prime = (char *)realloc((void *)ps->is_prime, N / 8 + 1);
        for (i = 0; i < N / 8 + 1; ++i) {
            // constant to set alternating bits, 0b10101010
            ps->is_prime[i] = (char)170;
        }
    } else {
        ps->is_prime = (char *)realloc((void *)ps->is_prime, N);
        for (i = 0; i < N; ++i) {
            // set to whether it is odd
            ps->is_prime[i] = i % 2 == 1;
        }
    }

    _PS_clear(ps, 0);
    _PS_clear(ps, 1);
    _PS_set(ps, 2);

    for (i = 3; i < N; i += 2) {
        if (_PS_get(ps, i)) {
            uint64_t j;
            for (j = 3 * i; j < N; j += 2 * i) {
                _PS_clear(ps, j);
            }
        }
    }
}



