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
package javapgs.DataTypes;

import javapgs.Flags.Kernel;

/**
 * My data type for workload (optimized for quadratic searches) Stores what
 * range of coefficients to do, etc.
 *
 * @author cade
 */
public class QuadraticWorkload {

    /*
    
    For this file, a quadratic is a polynomial written as
    ax^2 + bx + c
    where a, b, and c are integers, and in our case, start at a_offset, b_offset, and c_offset, and run for
    a_range, b_range, and c_range
    
     */
    public int a_offset, b_offset, c_offset;
    public int a_range, b_range, c_range;
    public int notable, notable_dist;
    
    public int work_a, work_b, work_c = 1;
    
    public Kernel[] specs;
    public CLSpecs clspecs;

    /*
    
    Default constructor, give us all the values.
    
    */
    public QuadraticWorkload(int _a_offset, int _b_offset, int _c_offset,int _a_range, int _b_range, int _c_range, int _notable, int _distinct, int _work_a, int _work_b, int _work_c, Kernel[] _specs, CLSpecs _clspecs) {
        a_offset = _a_offset;
        b_offset = _b_offset;
        c_offset = _c_offset;
        a_range = _a_range;
        b_range = _a_range;
        c_range = _a_range;
        notable = _notable;
        notable_dist = _distinct;
        work_a = _work_a;
        work_b = _work_b;
        work_c = _work_c;
        specs = _specs;
        clspecs = _clspecs;
    }

    public QuadraticWorkload() {

    }
}
