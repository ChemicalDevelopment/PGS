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
import com.nativelibs4java.opencl.CLContext;
import com.nativelibs4java.opencl.CLDevice;
import com.nativelibs4java.opencl.CLEvent;
import com.nativelibs4java.opencl.CLKernel;
import com.nativelibs4java.opencl.CLMem;
import com.nativelibs4java.opencl.CLPlatform.DeviceFeature;
import com.nativelibs4java.opencl.CLProgram;
import com.nativelibs4java.opencl.CLQueue;
import com.nativelibs4java.opencl.JavaCL;
import com.nativelibs4java.util.IOUtils;
import java.io.IOException;
import org.bridj.Pointer;

/**
 * Manages OpenCL stuffs!
 *
 * @author cade
 */
public class Lib {

    //Our verification program
    public static CLProgram test;

    //context for using OpenCl, normally a GPU
    public static CLContext context;

    //queues operations with a device
    public static CLQueue queue;

    //Creates kernel refernces and compiles, saves time later
    public static void init() throws IOException {
        context = JavaCL.createBestContext(DeviceFeature.CPU);
        CLDevice[] dv = context.getDevices();
        for (CLDevice v : dv) {
            System.out.println(v.getName());
        }
        
        queue = context.createDefaultQueue();
        test = context.createProgram(IOUtils.readText(Lib.class.getResource("Kernels/test.cl")));
    }

    /*
    
    Simple test code I found online. Just test whether OpenCL runs.
    
     */
    public static void test_cl() {
        CLContext context = JavaCL.createBestContext();
        final CLQueue queue = context.createDefaultQueue();

        int dataSize = 128;

        Pointer<Float> results = Pointer.allocateFloats(dataSize).order(context.getByteOrder());
        final Pointer<Float> inputData = Pointer.allocateFloats(dataSize).order(context.getByteOrder());
        inputData.set(0, 1.0f);
        inputData.set(1, 1.1f);
        inputData.set(2, 1.2f);

        CLBuffer<Float> input = context.createFloatBuffer(CLMem.Usage.Input, inputData, true);
        input.write(queue, inputData, true);

        final CLBuffer<Float> output = context.createFloatBuffer(CLMem.Usage.Output, results, true);
        float multFactor = 2f;

        String sources = ""
                + "__kernel void myKernel(__global const float* input, __global float* output, float multFactor) {\n"
                + "   int i = get_global_id(0);\n"
                + "   output[i] = input[i] * multFactor;\n"
                + "}";

        CLProgram program = context.createProgram(sources).build();

// Create kernel and set arguments
        CLKernel kernel = program.createKernel("myKernel", input, output, multFactor);

        CLEvent kernelCompletion = kernel.enqueueNDRange(queue, new int[]{dataSize});

        kernelCompletion.setCompletionCallback(new CLEvent.EventCallback() {

            public void callback(int executionStatus) {
                // Read the whole buffer
                Pointer<Float> newResults = output.read(queue);

                System.out.println("Data " + newResults.get(1));
            }
        });

        kernelCompletion.waitFor();
    }

}
