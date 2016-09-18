    ██████╗  ██████╗ ███████╗
    ██╔══██╗██╔════╝ ██╔════╝
    ██████╔╝██║  ███╗███████╗
    ██╔═══╝ ██║   ██║╚════██║
    ██║     ╚██████╔╝███████║
    ╚═╝      ╚═════╝ ╚══════╝
    
## What is this?
This is a project that searches for functions that are prime for the first few values of input. It is a **P**rime **G**enerator **S**earch. It looks through polynomials, and reports it's findings to the server.

## Why do this?
Primes have both practical and novel purposes. Primes are in all forms of cryptography, and are the building blocks of arithmetic. Finding the density, probability, and other properties of prime generating polynomials can help us now, and in the future.

There has been a small amount of modernized research on prime generating polynomials, and I believe there is a gap of where we are and where we should be. PrimeGrid (http://www.primegrid.com/) is one example, and they have found a linear function that is prime for x = [0, 25]. We are looking for polynomials (especially quadratics) that have the same property

## Want to help out?
We have a website (http://chemicaldevelopment.us/pgs/client) where you can create an account, view records, and manage your account.

To download the project, please check out (http://chemicaldevelopment.us/pgs).

If you would like to help develop the project, you can reach me at info@chemicaldevelopment.us


## Running
### Releases (Default)
[Sign Up](http://chemicaldevelopment.us/pgs/account) for an account

To download an executable, check out the [Releases](https://github.com/ChemicalDevelopment/PGS/releases)

Unzip the folder, and edit `my.prefs` and enter in your email and password.

You can also change `threads` to whatever value you'd like.

The next part may change based on what platform you use.

#### Windows

Double click `PGS.exe`

#### Mac & Linux

Double click `PGS`



Run a shell in any OS, and run `./PGS` or `./PGS.exe` with some flags found on the (wiki)[https://github.com/ChemicalDevelopment/PGS/wiki].



### Development Build
To use development build, you will need `gcc` and `node`

For the default install script, run
```
./install.sh
```

Here is a full instuction set:
```
git clone https://github.com/ChemicalDevelopment/PGS.git
cd PGS
cp ./example.prefs ./my.prefs
npm install
cd lib
chmod +x ./update.sh
./update.sh
#The last one should take a while
```


Then, to run the program:
```
node PGS.js --offline
```

Or, if you would like to run a version that reports the the server,

You need to create an account at (http://chemicaldevelopment.us/pgs/client), and then fill in your email and password (without "{{" or "}}") (git ignores any .prefs files except for example.pref)

Then, use your text editor to open `./my.prefs`, and change the email and password
```
{
    "RUN_FILE": "./run_c.sh",
    "PRIME_FILE": "./primes.dat",
    "email": "{{email}}",
    "password": "{{password}}",
    "workload_preference": "random",
    "threads": 2
}

```
Then,
```
node PGS.js
```
You can specify a different prefs file with `-p`

For example, say you have a file named `company.prefs`, run
```
node PGS.js -p ./company.prefs
```

To create your own executable, just make sure to make a `run_$name.sh` that acccepts primeFile range0, range1, range2, offset0, offset1, offset2 as its arguments, and prints out:
```
PGSO: $consecutive, $distinct; [$array]
```
and optionally:
```
PGSP: $percentDone
```
to stdout


## Explanation
For a more in-detail explanation, see our wiki (https://github.com/ChemicalDevelopment/PGS/wiki), but here's a short explanation:


Primes are numbers that can't be made from multiplying two other integers together. The first few primes are 2, 3, 5, 7, 11, 13. A few example functions that return primes for the first few values are:


`2x + 3`
from x = [0 to 2]


`x^2 + x + 41`
from x = [0 to 39]

That last one is prime for 40 consecutive values


This program looks for larger and longer examples of this, and does it over the internet over multiple computers.

## More Info
More info can be found on our wiki (https://github.com/ChemicalDevelopment/PGS/wiki)

The thread on mersenneforums (http://mersenneforum.org/showthread.php?t=21200)

Website: (http://chemicaldevelopment.us/pgs)

Online Client: (http://chemicaldevelopment.us/pgs/client/)

Account Manager: (http://chemicaldevelopment.us/pgs/client/account/)



## Features

### Planned
  * GUI Application (Was removed)

### Implemented
  * Multithreaded - Specify `in my.prefs`
  * Link with DB for users to help search
  * OpenCL - Look in folder `JPGS`.

### Removed
  * JavaPGS
  * GUI Application (Also going to be implemented)
  * OpenCL - Too buggy, and multithreaded is better performance