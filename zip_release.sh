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

#Set version to dev unless
if [[ "$2" == "" ]]; then
    BUILD_VERSION=`date +%Y-%m-%d`
else
    BUILD_VERSION=$2
fi

#call ./zip.sh language OS version
cd ./build/$BUILD_OS/ && zip -r ../$BUILD_OS-$BUILD_VERSION.zip ./
