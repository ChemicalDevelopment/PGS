

#include "pgs.h"

#include "primelib.h"



int main(int argc, char ** argv) {
    printf("PGS\n");
    primesieve_t ps;
    primesieve_init(&ps);
    primesieve_set_eratosthenes(&ps, 1000);

    printf("%d\n", (int)primelib_isprime_MR(7));
    int i;
    /*
    for (i = 0; i < 100; ++i) {
        if (primelib_isprime_bruteforce(i) != ps.is_prime[i]) {
        //if (primelib_isprime_bruteforce(i) != ps.is_prime[i]) {
        //    printf("ERROR on %d:%d\n", i, primelib_isprime_bruteforce(i));
        //}
        //printf("%d: %d\n", i, (int)ps.is_prime[i]);
    }
    */
}
