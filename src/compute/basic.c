
/*

this is the example implementation, standard C code to compute a workload

*/

#include "compute.h"
#include <stdlib.h>
#include <stdio.h>



void compute_workload_c(workload_t * workload, primesieve_t * primecache, int threshold, result_t ** results, int * N) {
    *N = 0;
    poly_t p;
    // initialze it to the start
    poly_init(&p, workload->start.N, workload->start.data);

    int i;
    // calloc will have set all positions to 0, so we don't need to initialise 
    while (true) {
        // call the function that does the actual work

        int consecutive_primes = test_poly(&p, primecache);

        if (consecutive_primes >= threshold) {
            int cur_idx = (*N);
            (*N) = cur_idx + 1;
            *results = (result_t *)realloc(*results, (*N) * sizeof(result_t));
            (*results)[cur_idx].p = poly_copy(&p);
            (*results)[cur_idx].prime_until = consecutive_primes;
        }

        for (i = p.N - 1; i >= 0; i--) {
            // move to the next position
            p.data[i]++;
            if (p.data[i] >= workload->end.data[i]) {
                // if we reached the max for this dimension, go back to 0, and implicitly move to the next dimension
                p.data[i] = workload->start.data[i];
            } else {
                // otherwise don't touch the other dimensions
                break;
            }
        }
        // we got to the end of all dimensions, we're done
        if (i < 0) break;
    }
}
