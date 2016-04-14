/*

OpenCL kernel for sieving primes. Uses 1D parallelism, limited to 32 bit

*/

__kernel void sieve_32(__global short *primes, __global int *lim) {
    int i = get_global_id(0);
    if (i < 2) {
        primes[i] = 0;   
        return;
    }
    int cI;
    for (cI = 2 * i; cI < lim[0]; cI += i) {
        primes[cI] = 0;
    }
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

__kernel void test_quadratics_abs_consecutive_distinct_32(__constant int *prefs, __constant short *prime_arr, __constant int *coef_offset) {
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
    /*

    These three variables have to do with counting:
    how many primes in a row?
    how many are distinct?
    a (poorly constructed) bool value 1 or 0

    */
    int inarow = 0;
    int distinct = 0;
    short hbdist = 1;

    /*

    Our for loop!
    Tests x values, and reports their primality

    */
    for (x = 0; x < 101; ++x) {
        //We store the primes in evals_x
        evals[x] = abs(i + j * x + k * x * x);
        //Currently, it is a short array, working on moving to bytes and bit masking
        if (prime_arr[evals[x]] == 1) {
            //We add to how many are prime
            ++inarow;
        //Now we stop if it isn't prime
        } else break;
        //Our distinct variable
        if (hbdist == 1) {
            //we check if it is distinct
            for (y = 0; y < x; ++y) {
                //If it isn't
                if (evals[x] == evals[y]) {
                    hbdist = 0;
                    break;
                } 
                //we update how many are distinct
                distinct = y;
            }
        }
    }
    //we add two, working on refactoring some of this
    distinct += 2;
    /*

    If it qualifies for printing, and it isn't a constant function, we print out!

    */
    if ((inarow >= prefs[0]  || distinct >= prefs[1]) && inarow != 101) {
        printf("%d + %dx + %dx^2 is prime for %d (x = [0, %d]) (distinct for %d)\n", i, j, k, inarow, inarow - 1, distinct);
    }
}
