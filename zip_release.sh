#!/bin/bash
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

#Set version to dev unless
if [ "$2" == "" ] || [ "$2" == "auto" ]; then
    BUILD_VERSION=`date +%Y-%m-%d`
else
    BUILD_VERSION=$2
fi

#call ./zip.sh language OS version
cd ./build/$BUILD_OS/C/ && zip -r ../../$BUILD_OS-$BUILD_VERSION.zip ./
cd ../../../
cd ./build/$BUILD_OS/OpenCL/ && zip -r ../../$BUILD_OS-OpenCL-$BUILD_VERSION.zip ./
