#installs from package.json
npm install

#copies example prefs
cp ./example.prefs ./my.prefs

#Make sure you have a copy
touch workloads/pending.txt
touch output/output.txt
touch output/error.txt
touch output/finds.txt

#Set exec flag
chmod +x ./update.sh

#Generates sieve of primes
echo "This part may take up to 2 minutes"
./update.sh 4000000000

#Give people a reminder
echo "! Remember to edit ./my.prefs !"