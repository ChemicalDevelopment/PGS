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
package jpgs;

/**
 *
 * @author cade
 */

import com.nativelibs4java.opencl.CLBuffer;
import com.nativelibs4java.opencl.CLContext;
import com.nativelibs4java.opencl.CLEvent;
import com.nativelibs4java.opencl.CLKernel;
import com.nativelibs4java.opencl.CLMem;
import com.nativelibs4java.opencl.CLPlatform;
import com.nativelibs4java.opencl.CLPlatform.DeviceFeature;
import com.nativelibs4java.opencl.CLProgram;
import com.nativelibs4java.opencl.CLQueue;
import com.nativelibs4java.opencl.JavaCL;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.bridj.Pointer;
import sun.misc.IOUtils;

public class JPGS {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        String fileName = "./primes.dat";
        int[] ranges = new int[] { 1000, 1000, 1000 };
        int[] offsets = new int[] {0, 0, 0};
        String deviceFeature = "GPU";
        if (args.length > 0) fileName = args[0];
        if (args.length > 1) ranges[0] = Integer.parseInt(args[1]);
        if (args.length > 2) ranges[1] = Integer.parseInt(args[2]);
        if (args.length > 3) ranges[2] = Integer.parseInt(args[3]);
        if (args.length > 4) offsets[0] = Integer.parseInt(args[4]);
        if (args.length > 5) offsets[1] = Integer.parseInt(args[5]);
        if (args.length > 6) offsets[2] = Integer.parseInt(args[6]);
        if (args.length > 7) deviceFeature = args[7];
        test_quad(ranges, offsets, getPrimeArray(fileName), DeviceFeature.valueOf(deviceFeature.toUpperCase()));
    }

    
    public static Pointer<Integer> getPrimeArray(String fileName) throws FileNotFoundException, IOException {
        File fi = new File(fileName);
        int len = (int)fi.length();
        InputStream f = new FileInputStream(fileName);
        Path path = Paths.get(fileName);
        byte[] bitset = Files.readAllBytes(path);
        Pointer<Integer> prime_ptr = Pointer.allocateInts(len / 4 + 1);
        return prime_ptr.setBytes(bitset);
    }

    
    public static void test_quad(int[] ranges, int offsets[], Pointer<Integer> prime_array, DeviceFeature d) {
        CLContext context = JavaCL.createBestContext(d);
        CLQueue queue = context.createDefaultQueue();
        
        Pointer<Integer> offset_ptr = Pointer.allocateInts(3);
        offset_ptr.setInts(offsets);

        CLBuffer<Integer> prime_buff = context.createBuffer(CLMem.Usage.Input, prime_array);
        CLBuffer<Integer> offset_buff = context.createBuffer(CLMem.Usage.Input, offset_ptr);

        prime_buff.write(queue, prime_array, true);
        offset_buff.write(queue, offset_ptr, true);

        CLProgram program = context.createProgram(kernelCode);
        long start = System.nanoTime();
        {
            CLKernel kernel = program.createKernel("test_quadratics", prime_buff, offset_buff); //, inp_p0, inp_p1, inp_p2);
            CLEvent kernelCompletion = kernel.enqueueNDRange(queue, ranges);
            kernelCompletion.waitFor();
        }
        long end = System.nanoTime();

        System.out.format("Done! (%f%s)\n", (end - start) / Math.pow(10, 9), "s");
    }
    
    public static String kernelCode = "/*\n" +
"\n" +
"General purpose functions\n" +
"\n" +
"*/\n" +
"\n" +
"//Returns bit\n" +
"int chbit(int x, int b) {\n" +
"    return (x >> b) & 1;\n" +
"}\n" +
"\n" +
"/*\n" +
"\n" +
"Kernel for testing quadratics against a prime array.\n" +
"\n" +
"*/\n" +
"__kernel void test_quadratics(__constant int *pr, __constant int *offsets) {\n" +
"    int i = get_global_id(0) + offsets[0];\n" +
"    int j = get_global_id(1) + offsets[1];\n" +
"    int k = get_global_id(2) + offsets[2];\n" +
"\n" +
"    int x, y;\n" +
"    int evals[101];\n" +
"    int inarow = 0;\n" +
"\n" +
"    evals[0] = abs(i); //i + 0 * j + 0 * 0 * k\n" +
"    if (chbit(pr[evals[0] >> 5], evals[0] % 32) == 0) return;\n" +
"    evals[1] = abs(i + j + k); //i + j * 1 + k * 1 * 1\n" +
"    if (chbit(pr[evals[1] >> 5], evals[1] % 32) == 0) return;\n" +
"    inarow = 2;\n" +
"\n" +
"    for (x = 2; x < 101; ++x) {\n" +
"        evals[x] = abs(i + x * (j + k * x));\n" +
"        if (chbit(pr[evals[x] >> 5], evals[x] % 32) == 1) {\n" +
"            inarow = x + 1;\n" +
"        } else {\n" +
"            break;\n" +
"        }\n" +
"    }\n" +
"    \n" +
"    if (inarow < 40) {\n" +
"        return;\n" +
"    }\n" +
"\n" +
"    int distinct;\n" +
"    int hbd = 1;\n" +
"    for (x = 0; x <= inarow; ++x) {\n" +
"        if (hbd == 0 || x == inarow) {\n" +
"            if (x == inarow) {\n" +
"                distinct = x;\n" +
"            }\n" +
"            break;\n" +
"        }\n" +
"        for (y = 0; y < x; ++y) {\n" +
"            if (evals[y] == evals[x]) {\n" +
"                hbd = 0;\n" +
"                distinct = x;\n" +
"                break;\n" +
"            }\n" +
"        }\n" +
"    }\n" +
"    if ((inarow >= 60 || distinct >= 40) && distinct > 1) {\n" +
"        printf(\"PGSO: %d, %d; [%d, %d, %d]\\n\", inarow, distinct, i, j, k);\n" +
"    }\n" +
"}\n" +
"\n" +
"__kernel void foo(__constant int * pr) {\n" +
"    //int i = get_global_id(0);\n" +
"    //printf(\"%d isp %d\\n\", i, chbit(pr[i / 8], i % 8));\n" +
"}";
}
