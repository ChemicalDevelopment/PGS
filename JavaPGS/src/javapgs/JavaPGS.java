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

import java.io.IOException;
import javapgs.Math.Prime;
import javapgs.OpenCL.Functions;
import javapgs.OpenCL.Lib;

/**
 * Prime Generator Search!
 * Our github repo: https://github.com/ChemicalDevelopment/PGS
 * Wiki: https://github.com/ChemicalDevelopment/PGS/wiki
 *
 * @author cade
 */
public class JavaPGS {

    /*

    Args format: java -jar -Xmx5G $jar $notable $notable_dist $p0d $p1d $p2d $p0m $p0n $p1m $p1n $p2m $p2n
    And it searches 
    ax^2 + bx + c for primality with
    p0m <= c < p0n
    p1m <= b < p1n
    p2m <= a < p2n
    
    With workgroup sizes $p0d $p1d $p2d (refer to our wiki for help on workgroups
    
    */

    public static void main(String args[]) throws IOException {
        int[] min_max = new int[]{-1000, 1000, -1000, 1000, -1000, 1000};
        int notable = 26;
        int notable_dist = 12;
        int p0d = 1;
        int p1d = 1;
        int p2d = 1;
        if (args.length >= 11) {
            notable = Integer.parseInt(args[0]);
            notable_dist = Integer.parseInt(args[1]);
            p0d = Integer.parseInt(args[2]);
            p1d = Integer.parseInt(args[3]);
            p2d = Integer.parseInt(args[4]);
            min_max[0] = Integer.parseInt(args[5]);
            min_max[1] = Integer.parseInt(args[6]);
            min_max[2] = Integer.parseInt(args[7]);
            min_max[3] = Integer.parseInt(args[8]);
            min_max[4] = Integer.parseInt(args[9]);
            min_max[5] = Integer.parseInt(args[10]);
            Prime.MAX = 100 * 100 * Math.max(Math.abs(min_max[4]), Math.abs(min_max[5])) + 100 * Math.max(Math.abs(min_max[2]), Math.abs(min_max[3])) + Math.max(Math.abs(min_max[0]), Math.abs(min_max[1]));
        }
        Lib.init();

        Prime.init();
        Functions.test_quad(notable, notable_dist, min_max[0], min_max[1], min_max[2], min_max[3], min_max[4], min_max[5], p0d, p1d, p2d);
    }
}
