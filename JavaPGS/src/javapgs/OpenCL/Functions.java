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
import javapgs.DataTypes.QuadraticWorkload;
import javapgs.Flags.Kernel;
import javapgs.Math.Prime;
import org.bridj.Pointer;

/**
 * Functions to test, and such
 *
 * @author cade
 */
public class Functions {

    public static boolean contains(Kernel s, Kernel[] arr) {
        for (Kernel a : arr) {
            if (a == s) {
                return true;
            }
        }
        return false;
    }


    /*
    
    Basic test for quadratics!
    
     */
    public static void test_quad(QuadraticWorkload q) {

        String kernel_str = "test_quadratics_";
        Kernel[] k_sp = q.specs;
        if (contains(Kernel.ABS, k_sp)) {
            kernel_str += "abs_";
        }
        if (contains(Kernel.CONSECUTIVE, k_sp)) {
            kernel_str += "consecutive_";
        }
        if (contains(Kernel.DISTINCT, k_sp)) {
            kernel_str += "distinct_";
        }
        if (contains(Kernel.INT32, k_sp)) {
            kernel_str += "32";
        }
        if (contains(Kernel.LONG64, k_sp)) {
            kernel_str += "64";
        }

        final Pointer<Integer> coef_offset = Pointer.allocateInts(3).order(Lib.context.getByteOrder());

        final Pointer<Integer> prefs = Pointer.allocateInts(2).order(Lib.context.getByteOrder());

        prefs.set(0, q.notable);
        prefs.set(1, q.notable_dist);

        coef_offset.set(0, (int) q.c_offset);
        coef_offset.set(1, (int) q.b_offset);
        coef_offset.set(2, (int) q.a_offset);

        CLBuffer<Integer> prime_buff = Lib.context.createBuffer(CLMem.Usage.Input, Prime.primes);
        CLBuffer<Integer> prefs_buff = Lib.context.createBuffer(CLMem.Usage.Input, prefs);
        CLBuffer<Integer> coef_buff = Lib.context.createBuffer(CLMem.Usage.Input, coef_offset);

        prime_buff.write(Lib.queue, Prime.primes, true);
        prefs_buff.write(Lib.queue, prefs, true);
        coef_buff.write(Lib.queue, coef_offset, true);

        CLProgram program = Lib.test;
        long start = System.nanoTime();
        {
            CLKernel kernel = program.createKernel(kernel_str, prefs_buff, prime_buff, coef_buff); //, inp_p0, inp_p1, inp_p2);
            CLEvent kernelCompletion = kernel.enqueueNDRange(Lib.queue, new int[]{q.c_range, q.b_range, q.a_range});
            kernelCompletion.waitFor();
        }
        long end = System.nanoTime();

        System.out.format("Done! (%f%s)\n", (end - start) / Math.pow(10, 9), "s");
    }

    /*
    
    Basic test for quadratics!
    
     */
 /*public static void test_quad_64(QuadraticWorkload q) {

        final Pointer<Long> coef_offset = Pointer.allocateLongs(3).order(Lib.context.getByteOrder());

        final Pointer<Integer> prefs = Pointer.allocateInts(2).order(Lib.context.getByteOrder());

        prefs.set(0, q.notable);
        prefs.set(1, q.notable_dist);

        coef_offset.set(0, q.c_offset);
        coef_offset.set(1, q.b_offset);
        coef_offset.set(2, q.a_offset);

        CLBuffer<Long> prime_buff = Lib.context.createBuffer(CLMem.Usage.Input, Prime.primes_64);
        CLBuffer<Integer> prefs_buff = Lib.context.createBuffer(CLMem.Usage.Input, prefs);
        CLBuffer<Long> coef_buff = Lib.context.createBuffer(CLMem.Usage.Input, coef_offset);

        prime_buff.write(Lib.queue, Prime.primes_64, true);
        prefs_buff.write(Lib.queue, prefs, true);
        coef_buff.write(Lib.queue, coef_offset, true);

        CLProgram program = Lib.test;
        long start = System.nanoTime();
        {
            CLKernel kernel = program.createKernel("test_quadratics_abs_consecutive_64", prefs_buff, prime_buff, coef_buff); //, inp_p0, inp_p1, inp_p2);
            CLEvent kernelCompletion = kernel.enqueueNDRange(Lib.queue, new int[]{q.c_range, q.b_range, q.a_range});
            kernelCompletion.waitFor();
        }
        long end = System.nanoTime();

        System.out.format("Done! (%f%s)\n", (end - start) / Math.pow(10, 9), "s");
    }*/
}
