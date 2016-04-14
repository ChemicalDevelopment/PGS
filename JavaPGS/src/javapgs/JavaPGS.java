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

import java.io.File;
import java.io.IOException;
import javapgs.DataTypes.QuadraticWorkload;
import javapgs.Math.Prime;
import javapgs.OpenCL.Functions;
import javapgs.OpenCL.Lib;

/**
 * Prime Generator Search! Our github repo:
 * https://github.com/ChemicalDevelopment/PGS Wiki:
 * https://github.com/ChemicalDevelopment/PGS/wiki
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
        if (args.length >= 2) {
            QuadraticWorkload r = IO.getQuadraticWorkloadFromFile(new File(args[0]));
            r.clspecs = IO.getCLSpecsFromFile(new File(args[1]));
            Lib.init(r);
            Prime.init();
            Functions.test_quad(r);
        }

    }
}
