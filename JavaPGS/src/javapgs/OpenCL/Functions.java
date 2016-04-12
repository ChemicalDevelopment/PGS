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
package javapgs.OpenCL;

import com.nativelibs4java.opencl.CLBuffer;
import com.nativelibs4java.opencl.CLEvent;
import com.nativelibs4java.opencl.CLKernel;
import com.nativelibs4java.opencl.CLMem;
import com.nativelibs4java.opencl.CLProgram;
import javapgs.Math.Prime;
import org.bridj.Pointer;

/**
 *
 * @author cade
 */
public class Functions {

    //The three on the end on dimension group size
    public static void test_quad(int notable, int notable_dist, int p0m, int p0n, int p1m, int p1n, int p2m, int p2n, int p0d, int p1d, int p2d) {
        int p0r = p0n - p0m;
        int p1r = p1n - p1m;
        int p2r = p2n - p2m;

        int rSize = p0r * p1r * p2r;

        final Pointer<Short> prime_ptr = Pointer.allocateShorts(Prime.MAX);

        /*final Pointer<Integer> p0_val = Pointer.allocateInts(p0r).order(Lib.context.getByteOrder());
        final Pointer<Integer> p1_val = Pointer.allocateInts(p1r).order(Lib.context.getByteOrder());
        final Pointer<Integer> p2_val = Pointer.allocateInts(p2r).order(Lib.context.getByteOrder());*/
        final Pointer<Integer> coef_offset = Pointer.allocateInts(3).order(Lib.context.getByteOrder()); //[notable, notable_dist]

        final Pointer<Integer> prefs = Pointer.allocateInts(3).order(Lib.context.getByteOrder()); //[notable, notable_dist]

        for (int i = 0; i < Prime.MAX; ++i) {
            prime_ptr.set(i, Prime.primes[i]);
        }

        /*int l = 0;
        for (int i = p0m; i < p0n; ++i) {
            p0_val.set(l, i);
            ++l;
        }

        l = 0;
        for (int i = p1m; i < p1n; ++i) {
            p1_val.set(l, i);
            ++l;
        }

        l = 0;
        for (int i = p2m; i < p2n; ++i) {
            p2_val.set(l, i);
            ++l;
        }*/
        prefs.set(0, notable);
        prefs.set(1, notable_dist);
        prefs.set(2, 101);

        coef_offset.set(0, p0m);
        coef_offset.set(1, p1m);
        coef_offset.set(2, p2m);


        /*CLBuffer<Integer> inp_p0 = Lib.context.createIntBuffer(CLMem.Usage.Input, p0_val, true);
        CLBuffer<Integer> inp_p1 = Lib.context.createIntBuffer(CLMem.Usage.Input, p1_val, true);
        CLBuffer<Integer> inp_p2 = Lib.context.createIntBuffer(CLMem.Usage.Input, p2_val, true);*/
        CLBuffer<Short> prime_buff = Lib.context.createBuffer(CLMem.Usage.Input, prime_ptr);
        CLBuffer<Integer> prefs_buff = Lib.context.createBuffer(CLMem.Usage.Input, prefs);
        CLBuffer<Integer> coef_buff = Lib.context.createBuffer(CLMem.Usage.Input, coef_offset);

        /*inp_p0.write(Lib.queue, p0_val, true);
        inp_p1.write(Lib.queue, p1_val, true);
        inp_p2.write(Lib.queue, p2_val, true);*/
        prime_buff.write(Lib.queue, prime_ptr, true);
        prefs_buff.write(Lib.queue, prefs, true);
        coef_buff.write(Lib.queue, coef_offset, true);

        CLProgram program = Lib.test;

        long start = System.nanoTime();
        CLKernel kernel = program.createKernel("test", prefs_buff, prime_buff, coef_buff); //, inp_p0, inp_p1, inp_p2);

        //CLEvent kernelCompletion = kernel.enqueueNDRange(Lib.queue, new int[]{p0r, p1r, p2r}); //This worked
        CLEvent kernelCompletion = kernel.enqueueNDRange(Lib.queue, new int[]{p0r, p1r, p2r}, new int[]{p0d , p1d, p2d});
        //CLEvent kernelCompletion = kernel.enqueueNDRange(Lib.queue, new long[]{p0r, p1r, p2r}, new long[]{1, 1, 1}, new long[]{p0m, p1m, p2m}); //This worked

        kernelCompletion.setCompletionCallback(new CLEvent.EventCallback() { //To read in a specific polynomial i + jx + kx^2, call results[i + j * p0r + k * p0r * p1r]

            public void callback(int executionStatus) {

            }
        }
        );

        kernelCompletion.waitFor();
        long end = System.nanoTime();

        System.out.println("Done (" + (end - start) / Math.pow(10, 9) + ")\n");
    }
}
