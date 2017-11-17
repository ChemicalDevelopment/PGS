

#include "primesieve.hpp"

#include <stdlib.h>

#include <iostream>
using namespace std;

#define _ERROR(er) cout << __FILENAME__ << ":" << __LINE__  << ", error: " << er << endl


void Compute::sieve_eratosthenes_w2(SIEVE_DTYPE * data_arr, long long max) {
    for (int i = 0; i < SIEVE_LEN(max); ++i) {
        data_arr[i] = SIEVE_MAX_WORD;
    }
    SIEVE_CLRPRIME(data_arr, 1);

    for (int i = 3; i <= max; i += 2) {
        if (SIEVE_GETPRIME(data_arr, i)) {
            for (int j = 3 * i; j <= max; j += 2 * i) {
                SIEVE_CLRPRIME(data_arr, j);
            }
        }
    }

}

Compute::PrimeSieve::PrimeSieve(long long max) {
    this->ensure_holds(max);
}

bool Compute::PrimeSieve::is_prime(long long val) {
    if (val == 2) {
        return true;
    } else if (val % 2 == 0 || val < 2) {
        return false;
    } else {
        this->ensure_holds(val);
        return SIEVE_GETPRIME(this->data, val);
    }
}

void Compute::PrimeSieve::ensure_holds(long long max) {
    if (max > this->max) {
        this->max = max;
        int wanted_bytes = SIEVE_LEN(max);
        // possible future feature, only realloc and recompute the additional needed.
        if (this->data != NULL) free(this->data);
        this->data = (SIEVE_DTYPE *)malloc(wanted_bytes);
        if (this->data == NULL) {
            _ERROR("malloc result was NULL");
            exit(1);
        }
        Compute::sieve_eratosthenes_w2(this->data, this->max);
    }
}


