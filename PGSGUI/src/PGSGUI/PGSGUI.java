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
package PGSGUI;

import PGSGUI.GUIs.GUI;
import PGSGUI.Lib.IO;

/**
 * GUI Program for PGS.
 *
 * @author cade
 */
public class PGSGUI {

    public static Process process;
    public static OS opSys;
    public static String base_dir;

    public PGSGUI() {
    }

    public static void main(String args[]) {
        //Detecting which one
        if (System.getProperty("os.name").startsWith("Windows")) {
            opSys = OS.WINDOWS;
        } else {
            opSys = OS.UNIX;
        }
        base_dir = IO.getInstallDirectory(opSys);
        GUI.run();
    }
}
