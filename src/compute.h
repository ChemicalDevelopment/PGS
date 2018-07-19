
/*

compute.h - defines routines and workloads

*/

#ifndef __COMPUTE_H__
#define __COMPUTE_H__

#include "poly.h"

#include "primelib.h"

#include <math.h>


typedef struct _workload_s {

    // includes start, but not end
    poly_t start, end;

} workload_t;

typedef struct _result_s {

    poly_t p;
    // first 'x' value that p(x) is not prime
    int prime_until;

} result_t;

//utilities
int test_poly(poly_t * p, primesieve_t * primecache);

// implementations

// primecache can be NULL
void compute_workload_c(workload_t * workload, primesieve_t * primecache, int threshold,result_t ** results, int * N);




#endif
