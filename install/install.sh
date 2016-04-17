#PGS Install Script

#Directory variable
DIR=/usr/local/PGS/
REPO_URL=http://chemicaldevelopment.azurewebsites.net/PGS/downloads/

#remove old installation
sudo rm -rf $DIR

#Making our directories for binaries, workloads, etc
sudo mkdir $DIR

#We download the latest
sudo wget -r -nH --cut-dirs=2 --reject="index.html*" $REPO_URL -P $DIR

#We're done
