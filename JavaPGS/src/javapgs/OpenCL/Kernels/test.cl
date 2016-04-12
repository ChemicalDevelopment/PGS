
//Our kernel for testing polynomials!
/*

Structure of inputs:
l is the length of each polynomials
output is where we store how many primes in a row we found
pol is our array of l - 1 degree polynomials
start is the first polynomials we try
end is the last

*/


__kernel void test(__global const int *prefs, __global const short *prime_arr, __global const int *coef_offset) { //Ranges on the end
    int i = get_global_id(0) + coef_offset[0]; //f(x) = i + jx + kx^2
    int j = get_global_id(1) + coef_offset[1];
    int k = get_global_id(2) + coef_offset[2];
    int sum;
    int x;
    int y;
    int evals[101];
    int inarow = 0;
    int distinct = 0;
    short hbdist = 1; //Has it been distinct
    for (x = 0; x < 101; ++x) {
        sum = i + j * x + k * x * x;
        evals[x] = sum;
        if (hbdist == 1) {
        for (y = 0; y < x; ++y) {
            if (sum == evals[y]) {
                hbdist = 0;
                break;
            } else if (hbdist == 1) {
                distinct = y;
            }
        }
        }
        if (prime_arr[abs(sum)] == 1) { //If it is prime
            ++inarow;
        } else { //If it isn't
            break;
        }
    }
    ++distinct;
    if ((inarow >= prefs[0]  || distinct >= prefs[1]) && inarow != 101) {
        printf("%d + %dx + %dx^2 is prime for %d (x = [0, %d]) (distinct for %d)\n", i, j, k, inarow, inarow - 1, distinct);
    }
}
