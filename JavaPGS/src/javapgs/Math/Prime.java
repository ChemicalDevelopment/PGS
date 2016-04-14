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

import com.nativelibs4java.opencl.CLBuffer;
import com.nativelibs4java.opencl.CLEvent;
import com.nativelibs4java.opencl.CLKernel;
import com.nativelibs4java.opencl.CLMem;
import com.nativelibs4java.opencl.CLProgram;
import javapgs.DataTypes.QuadraticWorkload;
import javapgs.OpenCL.Lib;
import org.bridj.Pointer;

/**
 *
 * @author cade
 */
public class Prime {

    public static int MAX;

    //Special bit-masking
    public static Pointer<Short> primes;
    
    /*
    
    Method for efficiently sieving a workload
    
    */
    public static void sieve_for_quad(QuadraticWorkload q) {
        //the max needed.
        int max_needed = 101 * 101 * Math.max(Math.abs(q.a_offset), Math.abs(q.a_offset + q.a_range))
        + 101 * Math.max(Math.abs(q.b_offset), Math.abs(q.b_offset + q.b_range))
        + Math.max(Math.abs(q.c_offset), Math.abs(q.c_offset + q.c_range));
        
        sieve(Util.forceToNearest(max_needed, 1000), 100);
    }
    

    /*
    
    Sieves the primes
    
     */
    public static void sieve(int max, int workgroup) {
        MAX = max;

        System.out.format("We will need to sieve up to %d\n", MAX);
        
        Pointer<Short> prime_ptr = Pointer.allocateShorts(MAX);
        Pointer<Integer> lim = Pointer.allocateInts(1);
        lim.set(0, MAX);
        for (int i = 0; i < MAX; ++i) {
            prime_ptr.set(i, (short)1);
        }

        CLBuffer<Short> prime_buff = Lib.context.createBuffer(CLMem.Usage.Input, prime_ptr);
        CLBuffer<Integer> lim_buff = Lib.context.createBuffer(CLMem.Usage.Input, lim);
        
        prime_buff.write(Lib.queue, prime_ptr, true);
        lim_buff.write(Lib.queue, lim, true);

        CLProgram program = Lib.test;
        long start = System.nanoTime();
        {
            CLKernel kernel = program.createKernel("sieve_32", prime_buff, lim_buff); //, inp_p0, inp_p1, inp_p2);
            CLEvent kernelCompletion = kernel.enqueueNDRange(Lib.queue, new int[] {MAX / 2}, new int[] {workgroup});
            kernelCompletion.waitFor();
        }
        long end = System.nanoTime();
        primes = prime_buff.read(Lib.queue);

        System.out.format("Done sieving up to %d (%f%s)\n", MAX, (end - start) / Math.pow(10, 9), "s");
    }
}
