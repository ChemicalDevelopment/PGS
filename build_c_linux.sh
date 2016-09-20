cd CPGS
./compile.sh
cd ..
cd lib
./compile.sh
cd ..
cp ./CPGS/CPGS.o ./build/c/linux/CPGS.o
cp ./lib/lib.o ./build/c/linux/lib.o
enclose PGS.js
cp ./PGS ./build/c/linux/PGS
rm ./PGS
mkdir -p build/c
cd build/c
zip -r "./linux-C-"$1".zip" ./linux
