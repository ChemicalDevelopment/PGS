

#include "pgs.h"

#include "primelib.h"
#include "utils.h"



int main(int argc, char ** argv) {
    printf("PGS\n");
    primesieve_t ps;
    primesieve_init(&ps);
    int N = 1000000000;

    double sieve_time = get_time();

    primesieve_set_eratosthenes(&ps, N);

    sieve_time = get_time() - sieve_time;
    
    printf("sieve took %lf ms\n", 1000.0 * sieve_time);

}
