#!/bin/bash
#Detect OS, and set the build os, unless they enter in the first argument
if [[ "$1" == "" ]]; then
    if [[ "$OSTYPE" == "linux-gnu" ]]; then
        BUILD_OS="linux"
    elif [[ "$OSTYPE" == "darwin"* ]]; then
        BUILD_OS="mac"
    elif [[ "$OSTYPE" == "cygwin" ]]; then
        BUILD_OS="cygwin"
    elif [[ "$OSTYPE" == "msys" ]]; then
        BUILD_OS="win-lite"
    elif [[ "$OSTYPE" == "freebsd"* ]]; then
        BUILD_OS="freebsd"
    else
        BUILD_OS="default"
    fi
else
    BUILD_OS=$1
fi

#EncloseJS
if [[ `npm list enclose | grep -c enclose` == "0" ]]; then
    npm install --save enclose
fi

#update
./update.sh

#Declare base dir and install dir
BASE_DIR=$PWD
INSTALL_DIR=$BASE_DIR/build/$BUILD_OS

#Delete old build
rm -rf $INSTALL_DIR

#Make directory recursively
mkdir -p $INSTALL_DIR

#Copy files
cp $BASE_DIR/CPGS/CPGS.o $INSTALL_DIR/CPGS.o
cp $BASE_DIR/lib/lib.o $INSTALL_DIR/lib.o
cp $BASE_DIR/final_run_c.sh $INSTALL_DIR/run_c.sh
cp $BASE_DIR/example.prefs $INSTALL_DIR/my.prefs
chmod +x $INSTALL_DIR/run_c.sh

#Make directory for output and worklodas
mkdir $INSTALL_DIR/output/
mkdir $INSTALL_DIR/workloads/

#Make sure these files exist
touch $INSTALL_DIR/output/output.txt
touch $INSTALL_DIR/output/finds.txt
touch $INSTALL_DIR/output/error.txt

#Give them a default workloads
cp $BASE_DIR/workloads/example.workload $INSTALL_DIR/workloads/example.workload

#Copy the readme
cp $BASE_DIR/RELEASE_README.txt $INSTALL_DIR/README.txt

#Enclose (needs to do npm install -g enclose)
enclose PGS.js
#Copy it
cp $BASE_DIR/PGS $INSTALL_DIR/PGS
#Remove compiled file
rm ./PGS
#Go to head folder
cd $INSTALL_DIR/../
