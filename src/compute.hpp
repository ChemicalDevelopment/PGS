

#include <cstddef>

// how we store our data
#define SIEVE_DTYPE char
// bytes
#define SIEVE_WORDLEN sizeof(SIEVE_DTYPE)
#define SIEVE_WORDBITS (8 * SIEVE_WORDLEN)

#define SIEVE_BYTEPAD 1
#define SIEVE_WHEEL 2
#define SIEVE_LEN(max) (SIEVE_BYTEPAD + (max) / (SIEVE_WHEEL * SIEVE_WORDBITS))

#define SIEVE_MAX_WORD (~((SIEVE_DTYPE)0))

#define SIEVE_GETBIT(data, i) (((data[(i) / SIEVE_WORDBITS]) >> ((i) % SIEVE_WORDBITS)) & 1)
#define SIEVE_SETBIT(data, i) data[(i) / SIEVE_WORDBITS] |= (1 << ((i) % SIEVE_WORDBITS))
#define SIEVE_CLRBIT(data, i) data[(i) / SIEVE_WORDBITS] &= ~(1 << ((i) % SIEVE_WORDBITS))

// represents the index of that a value is stored at. Note that val must be == 1 (modulo 2)
#define SIEVE_IDX(val) (((val) - 1) / 2)
// inverse of the above macro, returning the value stored at a certain index.
#define SIEVE_VAL(idx) (2 * (idx) + 1)
// SIEVE_IDX(SIEVE_VAL(y)) == y for any y % 2 == 1 and y > 0

#define SIEVE_GETPRIME(data, v) SIEVE_GETBIT(data, SIEVE_IDX(v))
#define SIEVE_SETPRIME(data, v) SIEVE_SETBIT(data, SIEVE_IDX(v))
#define SIEVE_CLRPRIME(data, v) SIEVE_CLRBIT(data, SIEVE_IDX(v))

namespace Compute {

    void sieve_eratosthenes_w2(SIEVE_DTYPE * data_arr, long long max);

    class PrimeSieve {

        public:
            PrimeSieve(long long max);
        
            bool is_prime(long long val);

            void ensure_holds(long long max);

        private:

            long long max = -1;
            // bitset is allocated
            SIEVE_DTYPE * data = NULL;

    };
    
}



