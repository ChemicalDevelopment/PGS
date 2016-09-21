#!/bin/bash
#Push and pop directories to compile these files
cd CPGS
./compile.sh
cd ..
#Do the same with lib
cd lib
./compile.sh
cd ..

#Declare base dir and install dir
BASE_DIR=$PWD
INSTALL_DIR=$BASE_DIR/build/c/linux

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

#Make sure they have a file to append to
touch $INSTALL_DIR/output/output.txt

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
