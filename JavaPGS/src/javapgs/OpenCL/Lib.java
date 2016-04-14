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

    //Our verification program for polynomials
    public static CLProgram test;

    //Our device/compute unit
    public static CLContext context;

    //queues operations with a device
    public static CLQueue queue;

    //Creates kernel refernces and compiles, saves time later
    public static void init() throws IOException {
        context = JavaCL.createBestContext(DeviceFeature.CPU);
        queue = context.createDefaultQueue();
        test = context.createProgram(IOUtils.readText(Lib.class.getResource("Kernels/test.cl")));
    }

}
