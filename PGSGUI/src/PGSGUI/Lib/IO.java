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
package PGSGUI.Lib;

import PGSGUI.OS;

/**
 * IO for files and such
 *
 * @author cade
 */
public class IO {

    public static final String windows_default_install_directory = "C:\\ProgramFiles\\PGS\\";
    public static final String unix_default_install_directory = "/usr/local/PGS/";
    public static final String windows_path_to_jar = "PGS.jar";
    public static final String unix_path_to_jar = "PGS.jar";
    public static final String windows_workload_dir = "workloads\\";
    public static final String unix_workload_dir = "workloads/";
    public static final String windows_clspecs_dir = "clspecs\\";
    public static final String unix_clspecs_dir = "clspecs/";
    public static final String windows_log_dir = "log\\";
    public static final String unix_log_dir = "log/";

    public static String getInstallDirectory(OS opSys) {
        if (null != opSys) {
            switch (opSys) {
                case WINDOWS:
                    return windows_default_install_directory;
                case UNIX:
                    return unix_default_install_directory;
            }
        }
        return null;
    }
}
