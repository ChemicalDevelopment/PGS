#PGS Install Script

#we need to install thi, for support of dos
apt-get install tofrodos


#Directory variable
DIR=/usr/local/PGS/
REPO_URL=https://raw.githubusercontent.com/ChemicalDevelopment/chemicaldevelopment.github.io/master/PGS/downloads/

#remove old installation
rm -rf $DIR

#Making our directories for binaries, workloads, etc
mkdir $DIR
mkdir $DIR"temp/"
mkdir $DIR"log/"
touch $DIR"log/output.log"
touch $DIR"log/error.log"
#Spooky! We are adding flags for reading output and error
chmod 666 $DIR"log/output.log"
chmod 666 $DIR"log/error.log"

#We download the latest
#Curl and unzipping seperatly due to zip instead of tar
curl -o $DIR"temp/PGSGUI.zip"  $REPO_URL"PGSGUI-latest.zip"
curl -o $DIR"temp/PGS.zip"  $REPO_URL"PGS-latest.zip"
curl -o $DIR"temp/workloads.zip"  $REPO_URL"workloads.zip"
curl -o $DIR"temp/clspecs.zip"  $REPO_URL"clspecs.zip"


#Uinzip it
unzip $DIR"temp/PGSGUI.zip" -d $DIR
unzip $DIR"temp/PGS.zip" -d $DIR
unzip $DIR"temp/workloads.zip" -d $DIR"workloads/"
unzip $DIR"temp/clspecs.zip" -d $DIR"clspecs/"


#Now we delete temp dir
rm -rf $DIR"temp/"
rm -rf $DIR"home/"
rm -rf $DIR"dist/"

#We are creating a cmd
PGS_SCR=/usr/local/bin/pgs
curl -o $PGS_SCR $REPO_URL"pgs.sh"
chmod+x $PGS_SCR
fromdos $PGS_SCR

cd $DIR

#Convert to unix
find . -type f -name '*.workload' -exec fromdos '{}' +
find . -type f -name '*.specs' -exec fromdos '{}' +


#We're done
