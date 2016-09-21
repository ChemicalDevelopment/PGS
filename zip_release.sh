#call ./zip.sh language OS version
cd ./build/$1/$2/ && zip -r ../$2-$3.zip ./
