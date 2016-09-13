#installs from package.json
npm install
#copies example 
cp ./example.prefs ./my.prefs
cd lib
chmod +x ./update.sh
#Generates sieve of primes
echo "This part may take up to 2 minutes"
./update.sh 1000000000
echo "! Remember to edit ./my.prefs !"