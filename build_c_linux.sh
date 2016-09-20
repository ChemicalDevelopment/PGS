cd CPGS
./compile.sh
cd ..
cd lib
./compile.sh
cd ..
mkdir -p build/c/linux
cp ./CPGS/CPGS.o ./build/c/linux/CPGS.o
cp ./lib/lib.o ./build/c/linux/lib.o
cp ./run_c.sh ./build/c/linux/run_c.sh
#cp ./example.prefs ./build/c/linux/my.prefs
enclose PGS.js
cp ./PGS ./build/c/linux/PGS
rm ./PGS
cd build/c
zip -r "./linux-C-"$1".zip" ./linux
