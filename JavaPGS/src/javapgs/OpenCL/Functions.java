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

        final Pointer<Short> prime_ptr = Pointer.allocateShorts(Prime.MAX);

        final Pointer<Integer> coef_offset = Pointer.allocateInts(3).order(Lib.context.getByteOrder());

        final Pointer<Integer> prefs = Pointer.allocateInts(3).order(Lib.context.getByteOrder());

        for (int i = 0; i < Prime.MAX; ++i) {
            prime_ptr.set(i, Prime.primes[i]);
        }

        prefs.set(0, notable);
        prefs.set(1, notable_dist);

        coef_offset.set(0, p0m);
        coef_offset.set(1, p1m);
        coef_offset.set(2, p2m);

        CLBuffer<Short> prime_buff = Lib.context.createBuffer(CLMem.Usage.Input, prime_ptr);
        CLBuffer<Integer> prefs_buff = Lib.context.createBuffer(CLMem.Usage.Input, prefs);
        CLBuffer<Integer> coef_buff = Lib.context.createBuffer(CLMem.Usage.Input, coef_offset);

        prime_buff.write(Lib.queue, prime_ptr, true);
        prefs_buff.write(Lib.queue, prefs, true);
        coef_buff.write(Lib.queue, coef_offset, true);

        CLProgram program = Lib.test;
        long start = System.nanoTime();
        {
            CLKernel kernel = program.createKernel("test", prefs_buff, prime_buff, coef_buff); //, inp_p0, inp_p1, inp_p2);
            CLEvent kernelCompletion = kernel.enqueueNDRange(Lib.queue, new int[]{p0r, p1r, p2r}, new int[]{p0d, p1d, p2d});
            kernelCompletion.waitFor();
        }
        long end = System.nanoTime();

        System.out.println("Done (" + (end - start) / Math.pow(10, 9) + ")\n");
    }
}
