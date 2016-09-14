cd CPGS
./compile.sh
cd ..
cd lib
./compile.sh
cd ..
cp ./CPGS/CPGS.o ./build/linux/CPGS.o
cp ./lib/lib.o ./build/linux/lib.o
enclose PGS.js
cp ./PGS ./build/linux/PGS
rm ./PGS