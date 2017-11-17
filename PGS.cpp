/*
 * PGS.cpp -- the controlling interface for PGS
 *
 * C ChemicalDevelopment 2017
 *   Part of the PGS project.
 *   <http://pgs.chemicaldevelopment.us/>
 *
 * Authors:
 *   Cade Brown <cade@cade.site>
 *
 * PGS is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU GPL v3 or later, at your choice. 
 * See details in LICENSE.txt
 *
 */


#include <iostream>
using namespace std;

#include "PGSConfig.hpp"
#include "primesieve.hpp"

#include <iostream>
#include <fstream>

#include <unistd.h>


int main(int argc, char ** argv) {


    char c;

    opterr = 0;

    while ((c = getopt (argc, argv, "a:b:c:")) != (char)-1)
    switch (c) {
        case 'a':
            
            break;
        case '?':
            cout << "Unknown option `" << optopt << "'.\n" << endl;
            return 1;
        default:
            cout << "Error while parsing arguments" << endl;
            exit (1);
    }



    return 0;
}



