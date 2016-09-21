#installs from package.json
npm install

#copies example prefs
cp ./example.prefs ./my.prefs

# Goes to lib, and creates sieve
cd lib

#Set exec flag
chmod +x ./update.sh

#Generates sieve of primes
echo "This part may take up to 2 minutes"
./update.sh

#Give people a reminder
echo "! Remember to edit ./my.prefs !"