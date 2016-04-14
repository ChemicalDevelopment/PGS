#!/bin/bash

#This should be the JPGS jar file
JAR_FILE="/home/cade/projects/PGS/JavaPGS/dist/JavaPGS.jar"
#Change this to whatever workload you want
WORK_LOAD="/home/cade/projects/PGS/scripts/workloads/brute2500"
#These are the specifications of the CL device you'd like
CL_SPECS="/home/cade/projects/PGS/scripts/clspecs/CPU"

java -jar $JAR_FILE $WORK_LOAD $CL_SPECS
