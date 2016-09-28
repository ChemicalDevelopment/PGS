#!/bin/bash
gcc -L/opt/AMDAPPSDK-3.0/lib/x86_64/sdk/ -I/opt/AMDAPPSDK-3.0/include CLPGS.c -o CLPGS.o -lOpenCL
