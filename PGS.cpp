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
#include "compute.hpp"

#include "firebase/app.h"

int main(int argc, char ** argv) {

    firebase::App* app = firebase::App::Create(firebase::AppOptions());

    cout << app->name() << endl;

    return 0;
}



