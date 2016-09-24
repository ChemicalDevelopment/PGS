#!/bin/bash

#Node's base download
NODE_BASE="https://nodejs.org/download/release/v5.10.1/"

#Detect OS, and set the build os, unless they enter in the first argument. Use `auto` to autodetect
if [ "$1" == "" ] || [ "$1" == "auto" ]; then
    if [[ "$OSTYPE" == "linux-gnu" ]]; then
        BUILD_OS="linux"
        NODE_TAR="node-v5.10.1-linux-x64"
    elif [[ "$OSTYPE" == "darwin"* ]]; then
        BUILD_OS="mac"
        NODE_TAR="node-v5.10.1-darwin-x64"
    elif [[ "$OSTYPE" == "freebsd"* ]]; then
        echo "Error! freebsd not supported yet"
        exit 1
    elif [ "$OSTYPE" == "cygwin" ] || [ "$OSTYPE" == "msys" ]; then
        echo "Error! Cygwin not supported"
        exit 1
    else
        BUILD_OS="default"
        echo "Warning: OS not found. Storing in ./build/default"
    fi
else
    BUILD_OS=$1
    NODE_TAR="node-v5.10.1-$1"
fi

echo "Building for $BUILD_OS using tar: $NODE_TAR"

#Declare base dir and install dir
BASE_DIR=$PWD
INSTALL_DIR=$BASE_DIR/build/$BUILD_OS

#Update binaries
./compile.sh

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

#Include node modules
cp $BASE_DIR/node_modules/ $INSTALL_DIR/node_modules/ -rf

#Copy the readme
cp $BASE_DIR/RELEASE_README.txt $INSTALL_DIR/README.txt

#Check cache
NODE_CACHE=$BASE_DIR/build/cache/$BUILD_OS
if [ ! -d "$NODE_CACHE" ]; then
    echo "Downloading and caching node"
    mkdir -p $NODE_CACHE/tmp/
    #Curl in and copy it to our main cache
    curl $NODE_BASE$NODE_TAR.tar.xz > $NODE_CACHE/tmp/node.tar.xz
    #Untar it
    tar xf $NODE_CACHE/tmp/node.tar.xz -C $NODE_CACHE/tmp/
    #Copy the binary to cache
    cp $NODE_CACHE/tmp/$NODE_TAR/bin/node $NODE_CACHE/node
    #Remove tmp dir
    rm $NODE_CACHE/tmp/ -rf
fi
#Copy it to install
cp $NODE_CACHE/node $INSTALL_DIR/node

#Copy it
cp $BASE_DIR/PGS.js $INSTALL_DIR/PGS.js
