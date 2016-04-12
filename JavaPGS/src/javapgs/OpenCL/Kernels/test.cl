
//Our kernel for testing polynomials!
/*

Structure of inputs:
l is the length of each polynomials
output is where we store how many primes in a row we found
pol is our array of l - 1 degree polynomials
start is the first polynomials we try
end is the last

*/
__kernel void test(__global const bool *prime_arr, __global const int l, __global int *output, __global const int *pol, __global const int max_x) {
    int i = get_global_id(0);
    int sum = 0;
    int inarow = 0;
    int x, n, x_n;
    for (x = 0; x < max_x; ++x) {
        x_n = 1;
        for (n = 0; n < l; ++n) {
            sum += x_n * pol[3 * i + n];
            x_n *= x;
        }
        if (prime_arr[sum]) { //If it is prime
            ++inarow;
        } else { //If it isn't
            break;
        }
    }
    output[i] = inarow;
}
