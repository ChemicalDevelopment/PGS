/*

General purpose functions

*/


/*

Checks bit

*/

int check_bit_32(int op, int nth_place) {
    return (op >> (nth_place) & 1);
}

/*

Divides by 2^nth_place

*/
int div_p2_32(int op, int nth_place) {
    return (op >> nth_place);
}

/*

Checks bit in a long

*/

int check_bit_64(long op, int nth_place) {
    return (op >> (nth_place) & 1);
}

/*

Divides by 2^nth_place in a long

*/
long div_p2_64(long op, int nth_place) {
    return (op >> nth_place);
}


/*

Prints out quadratic

*/
void print_quad(int i, int j, int k) {
    if (k != 0) {
        if (k < 0) {
            printf("-");
        }
        if (abs(k) != 1) {
            printf("%d", abs(k));
        }
        printf("x^2");
    }
    if (j != 0) {
        if (j < 0) {
            printf(" - ");
        } else {
            printf(" + ");
        }
        if (abs(j) != 1) {
            printf("%d", abs(j));
        }
        printf("x");

    }
     if (i != 0) {
        if (i < 0) {
            printf(" - ");
        } else {
            printf(" + ");
        }
        if (abs(i) != 1) {
            printf("%d", abs(i));
        }
    }
    printf("\n");
}

/*

Prints out quadratic with long coefficients

*/
void print_quad_64(long i, long j, long k) {
    if (k != 0) {
        if (k < 0) {
            printf("-");
        }
        if (abs(k) != 1) {
            printf("%l", abs(k));
        }
        printf("x^2");
    }
    if (j != 0) {
        if (j < 0) {
            printf(" - ");
        } else {
            printf(" + ");
        }
        if (abs(j) != 1) {
            printf("%l", abs(j));
        }
        printf("x");

    }
     if (i != 0) {
        if (i < 0) {
            printf(" - ");
        } else {
            printf(" + ");
        }
        if (abs(i) != 1) {
            printf("%l", abs(i));
        }
    }
    printf("\n");
}

/*

OpenCL kernel for testing polynomials primality, given a sieve
Default one used is "test_quadratics_abs_consecutive_distinct_32"
Which spits out info about consecutive and distinct polynomials, up to 32 bit, and only using the abs() of the function
Other kernels in this file are optimized for specific traits of these

args: global prefs, in the form:
[notable, notable_dist]
We print it out to screen if there are at least $notable primes for the first few values of x, or the first $notable_dist are distinct and prime (not the same abs() value)

prime_arr stores the info we need to check if a number is prime or not

coef_offset is where we start testing the polynomial coefficients

*/

__kernel void test_quadratics_abs_consecutive_distinct_32(__constant int *prefs, __constant int *prime_arr, __constant int *coef_offset) {
    /*

    The following lines have to do with parallelism.
    Each work group is assigned a range (specified from input) of polynomial coefficients to try.
    One instance of this kernel runs a different a, b, c coefficients in the quadratic
    The coef_offset array stores where to start the trials

    */
    int i = get_global_id(0) + coef_offset[0];
    int j = get_global_id(1) + coef_offset[1];
    int k = get_global_id(2) + coef_offset[2];
    /*

    x and y are looping variables used in the for loops in the kernel. Declaration here for: possible speedup in inner for-loop, and support for C (not c++) compiling

    */
    int x, y;
    int evals[101];
    //How many primes have we had?
    int inarow = 0;
    /*
    
    The following lines are to optimize early release cases

    */
    evals[0] = abs(i); //i + 0 * j + 0 * 0 * k
    if (check_bit_32(prime_arr[div_p2_32(evals[0], 5)], evals[0] % 32) != 1) return;
    evals[1] = abs(i + j + k); //i + j * 1 + k * 1 * 1
    if (check_bit_32(prime_arr[div_p2_32(evals[1], 5)], evals[0] % 32) != 1) return;
    if (evals[0] == evals[1]) return;
    inarow = 2;
    /*

    Our for loop!
    Tests x values, and reports their primality

    */
    for (x = 2; x < 101; ++x) {
        //We store the primes in evals_x
        //evals[x] = abs(i + j * x + k * x * x); More efficient way below
        evals[x] = abs(i + x * (j + k * x));
        //Currently, it is a short array, working on moving to bytes and bit masking
        if (check_bit_32(prime_arr[div_p2_32(evals[x], 5)], evals[x] % 32)) {
            //We add to how many are prime
            ++inarow;
        //Now we stop if it isn't prime
        } else break;
    }
    /*

    We determine how many are unique
    
    */
    int distinct;
    int is_distinct = 1;
    int e_x;
    for (x = 0; x < 101; ++x) {
        if (x > inarow - 1) { //If we are out of primes
            distinct = x;
            break;
        }
        if (is_distinct != 1) {
            distinct = x;
            break;
        }
        e_x = evals[x];
        for (y = 0; y < x; ++y) {
            if (evals[y] == e_x) { //If they aren't distinct
                is_distinct = 0;
                break;
            }
        }
    }

    /*

    If it qualifies for printing, and it isn't a constant function, we print out!

    */
    if ((inarow >= prefs[0]  || distinct >= prefs[1]) && distinct != 1) {
        printf("PGSO: %d, %d; ", inarow - 1, distinct - 1);
        print_quad(i, j, k);
    }
}

/*

Kernel for testing 32 bit maxes of just primality -- no distinct count is included.

*/

__kernel void test_quadratics_abs_consecutive_32(__constant int *prefs, __constant int *prime_arr, __constant int *coef_offset) {
    /*

    The following lines have to do with parallelism.
    Each work group is assigned a range (specified from input) of polynomial coefficients to try.
    One instance of this kernel runs a different a, b, c coefficients in the quadratic
    The coef_offset array stores where to start the trials

    */
    int i = get_global_id(0) + coef_offset[0];
    int j = get_global_id(1) + coef_offset[1];
    int k = get_global_id(2) + coef_offset[2];
    /*

    x and y are looping variables used in the for loops in the kernel. Declaration here for: possible speedup in inner for-loop, and support for C (not c++) compiling

    */
    int x, y;
    int evals[101];
    //How many primes have we had?
    int inarow = 0;
    /*

    The following lines are to optimize early release cases

    */
    evals[0] = abs(i); //i + 0 * j + 0 * 0 * k
    if (check_bit_32(prime_arr[div_p2_32(evals[0], 5)], evals[0] % 32) != 1) return;
    evals[1] = abs(i + j + k); //i + j * 1 + k * 1 * 1
    if (check_bit_32(prime_arr[div_p2_32(evals[1], 5)], evals[0] % 32) != 1) return;
    if (evals[0] == evals[1]) return;
    inarow = 2;
    /*

    Our for loop!
    Tests x values, and reports their primality

    */
    for (x = 2; x < 101; ++x) {
        //We store the primes in evals_x
        evals[x] = abs(i + j * x + k * x * x);
        //Currently, it is a short array, working on moving to bytes and bit masking
        if (check_bit_32(prime_arr[div_p2_32(evals[x], 5)], evals[x] % 32)) {
            //We add to how many are prime
            ++inarow;
        //Now we stop if it isn't prime
        } else break;
    }
    if ((inarow >= prefs[0])) {
        printf("PGSO: consequtive=%d; ", inarow - 1);
        print_quad(i, j, k);
    }
}

/*

Kernel for testing 64 bit maxes of just primality -- no distinct count is included.
Quite fast -- using 64 bit long bit masking

*/

__kernel void test_quadratics_abs_consecutive_64(__constant long *prefs, __constant int *prime_arr, __constant long *coef_offset) {
    /*

    The following lines have to do with parallelism.
    Each work group is assigned a range (specified from input) of polynomial coefficients to try.
    One instance of this kernel runs a different a, b, c coefficients in the quadratic
    The coef_offset array stores where to start the trials

    */
    long i = get_global_id(0) + coef_offset[0];
    long j = get_global_id(1) + coef_offset[1];
    long k = get_global_id(2) + coef_offset[2];
    /*

    x and y are looping variables used in the for loops in the kernel. Declaration here for: possible speedup in inner for-loop, and support for C (not c++) compiling

    */
    long x, y;
    long evals[256];
    //How many primes have we had?
    int inarow = 0;
    /*

    The following lines are to optimize early release cases

    */
    evals[0] = abs(i); //i + 0 * j + 0 * 0 * k
    if (check_bit_64(prime_arr[div_p2_64(evals[0], 5)], evals[0] % 32) != 1) return;
    evals[1] = abs(i + j + k); //i + j * 1 + k * 1 * 1
    if (check_bit_64(prime_arr[div_p2_64(evals[1], 5)], evals[0] % 32) != 1) return;
    if (evals[0] == evals[1]) return;
    inarow = 2;
    /*

    Our for loop!
    Tests x values, and reports their primality

    */
    for (x = 2; x < 256; ++x) {
        //We store the primes in evals_x
        evals[x] = abs(i + j * x + k * x * x);
        if (check_bit_64(prime_arr[div_p2_64(evals[x], 5)], evals[x] % 32)) {
            //We add to how many are prime
            ++inarow;
        //Now we stop if it isn't prime
        } else break;
    }
    if ((inarow >= prefs[0])) {
        printf("PGSO: consequtive=%d; ", inarow - 1);
        print_quad_64(i, j, k);
    }
}

