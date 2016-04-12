/* 
 * Copyright (C) 2016 ChemicalDevelopment
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
package javapgs.Math;

/**
 *
 * @author cade
 */
public class Prime {

    public static int MAX = 20000000;

    public static short[] primes;

    public static void init() {
        int[] firstArr = new int[MAX];
        primes = new short[MAX];
        int cpi = 0;
        for (int i = 0; i < MAX; ++i) {
            firstArr[i] = i;
        }
        for (int i = 2; i < MAX; ++i) {
            if (firstArr[i] != -1) {
                primes[i] = 1;
                for (int j = 2 * firstArr[i]; j < MAX; j += firstArr[i]) {
                    firstArr[j] = -1;
                    primes[j] = 0;
                }
                ++cpi;
            }
        }
        primes[0] = 0;
        primes[1] = 0;
        System.out.println("There are " + cpi + " primes under " + MAX);
    }

    public static boolean is_prime(int x) {
        if (primes[x] == 1) return true;
        return false;
    }
}
