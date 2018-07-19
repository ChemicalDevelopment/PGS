

#include "pgs.h"

#include "primelib.h"
#include "utils.h"
#include "poly.h"

#include "compute.h"


int main(int argc, char ** argv) {
    printf("PGS\n");
    primesieve_t ps;
    primesieve_init(&ps, PRIMESIEVE_BITPACKED);
    int N = 1000000;

    double sieve_time = get_time();

    primesieve_set_eratosthenes(&ps, N);

    sieve_time = get_time() - sieve_time;
   // printf("sieve took %lf ms\n", 1000.0 * sieve_time);


    poly_t p_s;
    poly_init(&p_s, 4, (int64_t[]){ 0LL, 0LL, 0LL, 0LL });

    poly_t p_e;
    poly_init(&p_e, 4, (int64_t[]){ 100LL, 100LL, 100LL, 100LL });

    workload_t w;
    w.start = p_s;
    w.end = p_e;

    result_t * res = NULL;
    int res_num = 0;

    int total_tested = 100 * 100 * 100 * 100;

    double workload_time = get_time();

    compute_workload_c(&w, &ps, 30, &res, &res_num);

    workload_time = get_time() - workload_time;

    char * expr = NULL;

    int i;
    for (i = 0; i < res_num; ++i) {
        poly_t p = res[i].p;
        expr = poly_expr(&p);
        printf("%s is prime for %d values\n", expr, res[i].prime_until);
        free(expr);
    }

    printf("%lf polynomials/millisecond\n", total_tested / (1000.0 * workload_time));

/*
    printf("%s is prime for first %d vals\n", poly_expr(&p), test_poly(&p, &ps));

    int64_t x;
    for (x = 0; x < 10; ++x) {
        printf("p(%lld) = %lld\n", x, poly_eval(&p, x));
    }
    */

}
