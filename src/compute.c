
#include "compute.h"


int test_poly(poly_t * p, primesieve_t * primecache) {
    int i;
    for (i = 1; i < p->N; ++i) {
        if (p->data[i] != 0) {
            break;
        }
    }
    
    // skip constants
    if (p->N > 1 && i == p->N) return 0;

    int64_t cur_eval = p->data[0];

    poly_ensurecache(p);

    for (i = 0; primelib_isprime(cur_eval, primecache) && i < 101; ++i) {
        cur_eval = poly_eval(p, (uint64_t)i);
    }
    if (i == 0) return i;
    else return i - 1;
}

