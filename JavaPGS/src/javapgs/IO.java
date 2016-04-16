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
package javapgs;

import com.nativelibs4java.opencl.CLPlatform.DeviceFeature;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Scanner;
import javapgs.DataTypes.CLSpecs;
import javapgs.DataTypes.QuadraticWorkload;
import javapgs.Flags.Kernel;

/**
 * IO Class - input/output How do I get workloads, and how do I share my
 * results?
 *
 * @author cade
 */
public class IO {

    /*
    
    Gets your CLSpecs from a file!
    
     */
    public static CLSpecs getCLSpecsFromFile(File f) throws FileNotFoundException {
        DeviceFeature[] readIn = new DeviceFeature[10];
        Scanner s = new Scanner(new FileInputStream(f));
        int i = 0;
        try {
            for (i = 0; i < 10; ++i) {
                DeviceFeature c = DeviceFeature.valueOf(s.nextLine());
                if (c != null) {
                    readIn[i] = c;
                } else {
                    break;
                }
            }
        } catch (Exception e) {

        }
        DeviceFeature[] trunc = new DeviceFeature[i];
        for (i = 0; i < trunc.length; ++i) {
            trunc[i] = readIn[i];
        }
        return new CLSpecs(trunc);

    }

    /*
    
    Gets a workload specification from a file
    
     */
    public static QuadraticWorkload getQuadraticWorkloadFromFile(File f) throws FileNotFoundException {
        QuadraticWorkload r = new QuadraticWorkload();
        Scanner s = new Scanner(new FileInputStream(f));
        String[] lines = new String[50];
        int i = 0;
        while (s.hasNextLine()) {
            lines[i] = s.nextLine().split(" ")[0];
            ++i;
        }
        r.a_offset = Integer.parseInt(lines[0]);
        r.b_offset = Integer.parseInt(lines[2]);
        r.c_offset = Integer.parseInt(lines[4]);
        r.a_range = Integer.parseInt(lines[1]);
        r.b_range = Integer.parseInt(lines[3]);
        r.c_range = Integer.parseInt(lines[5]);
        r.notable = Integer.parseInt(lines[6]);
        r.notable_dist = Integer.parseInt(lines[7]);

        Kernel[] otherSpecs = new Kernel[20];
        i = 8;
        int in = 0;
        try {
            Kernel c = Kernel.valueOf(lines[i]);
            ++i;
            while (c != null) {
                otherSpecs[in] = c;
                c = Kernel.valueOf(lines[i]);
                ++i;
                ++in;
            }
        } catch (Exception e) {

        }
        Kernel[] trunc = new Kernel[i];
        for (i = 0; i < trunc.length; ++i) {
            trunc[i] = otherSpecs[i];
        }
        r.specs = trunc;
        return r;
    }
}
