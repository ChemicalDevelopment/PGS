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
#if [[ `npm list enclose | grep -c enclose` == "0" ]]; then
#    npm install --save enclose
#fi

#update
./compile.sh

#Declare base dir and install dir
BASE_DIR=$PWD
INSTALL_DIR=$BASE_DIR/build/$BUILD_OS

#Delete old build
rm -rf $INSTALL_DIR

#Make directory recursively
mkdir -p $INSTALL_DIR

#Copy files
cp $BASE_DIR/CPGS.o $INSTALL_DIR/CPGS.o
cp $BASE_DIR/lib.o $INSTALL_DIR/lib.o
cp $BASE_DIR/example.prefs $INSTALL_DIR/my.prefs
cp $BASE_DIR/CPGS.sh $INSTALL_DIR/CPGS.sh
chmod +x $INSTALL_DIR/CPGS.sh
cp $BASE_DIR/run.sh $INSTALL_DIR/run.sh
chmod +x $INSTALL_DIR/run.sh

#Make directory for output and worklodas
mkdir $INSTALL_DIR/output/
mkdir $INSTALL_DIR/workloads/

#Make sure these files exist
touch $INSTALL_DIR/output/output.txt
touch $INSTALL_DIR/output/finds.txt
touch $INSTALL_DIR/output/error.txt

#Copy the readme
cp $BASE_DIR/RELEASE_README.txt $INSTALL_DIR/README.txt

#Copy node binary in
if [[ "$(/usr/local/bin/node -v | grep -c v)" == "1" ]]; then
    cp /usr/local/bin/node $INSTALL_DIR/node
else
    cp /usr/bin/node $INSTALL_DIR/node
fi

cp $BASE_DIR/node_modules/ $INSTALL_DIR/node_modules/ -rf

# Enclose (needs to do npm install -g enclose)
#enclose PGS.js
#jx package PGS.js PGS -native
#rm $BASE_DIR/PGS.jxp

#Copy it
cp $BASE_DIR/PGS.js $INSTALL_DIR/PGS.js
#cp $BASE_DIR/PGS $INSTALL_DIR/PGS
#Remove compiled file
#rm ./PGS
#Go to head folder
#cd $INSTALL_DIR/../
