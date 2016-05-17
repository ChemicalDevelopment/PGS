#PGS Install Script

#we need to install thi, for support of dos
sudo apt-get install tofrodos


#Directory variable
DIR=/usr/local/PGS/
REPO_URL=https://raw.githubusercontent.com/ChemicalDevelopment/chemicaldevelopment.github.io/master/PGS/downloads/

#remove old installation
sudo rm -rf $DIR

#Making our directories for binaries, workloads, etc
sudo mkdir $DIR
sudo mkdir $DIR"temp/"
sudo mkdir $DIR"log/"
sudo touch $DIR"log/output.log"
sudo touch $DIR"log/error.log"
#Spooky! We are adding flags for reading output and error
sudo chmod 666 $DIR"log/output.log"
sudo chmod 666 $DIR"log/error.log"

#We download the latest
#Curl and unzipping seperatly due to zip instead of tar
sudo curl -o $DIR"temp/PGSGUI.zip"  $REPO_URL"PGSGUI-latest.zip"
sudo curl -o $DIR"temp/PGS.zip"  $REPO_URL"PGS-latest.zip"
sudo curl -o $DIR"temp/workloads.zip"  $REPO_URL"workloads.zip"
sudo curl -o $DIR"temp/clspecs.zip"  $REPO_URL"clspecs.zip"


#Uinzip it
sudo unzip $DIR"temp/PGSGUI.zip" -d $DIR
sudo unzip $DIR"temp/PGS.zip" -d $DIR
sudo unzip $DIR"temp/workloads.zip" -d $DIR"workloads/"
sudo unzip $DIR"temp/clspecs.zip" -d $DIR"clspecs/"


#Now we delete temp dir
sudo rm -rf $DIR"temp/"
sudo rm -rf $DIR"home/"
sudo rm -rf $DIR"dist/"

#We are creating a cmd
PGS_SCR=/usr/local/bin/pgs
sudo curl -o $PGS_SCR $REPO_URL"pgs.sh"
sudo chmod +x $PGS_SCR
sudo fromdos $PGS_SCR

cd $DIR

#Convert to unix
sudo find . -type f -name '*.workload' -exec fromdos '{}' +
sudo find . -type f -name '*.specs' -exec fromdos '{}' +


#We're done
