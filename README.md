    ██████╗  ██████╗ ███████╗
    ██╔══██╗██╔════╝ ██╔════╝
    ██████╔╝██║  ███╗███████╗
    ██╔═══╝ ██║   ██║╚════██║
    ██║     ╚██████╔╝███████║
    ╚═╝      ╚═════╝ ╚══════╝
    
## What is this?
This is a project that searches for functions that are prime for the first few values of input. It is a **P**rime **G**enerator **S**earch. It looks through polynomials, and tests some of the input, and then spits out some info.

## Why do this?
Primes have both practical and novel purposes. Primes are in all forms of cryptography, and are the building blocks of arithmetic. Finding the density, probability, and other properties of prime generating polynomials can help us now, and in the future.

There has been a small amount of modernized research on prime generating polynomials, and I believe there is a gap of where we are and where we should be. PrimeGrid (http://www.primegrid.com/) is one example, and they have found a linear function that is prime for x = [0, 25]. We are looking for polynomials (especially quadratics) that have the same property


## Explanation
For a more in-detail explanation, see our wiki (https://github.com/ChemicalDevelopment/PGS/wiki), but here's a short explanation:


Primes are numbers that can't be made from multiplying two other integers together. The first few primes are 2, 3, 5, 7, 11, 13. A few example functions that return primes for the first few values are:


`2x + 3`
from x = 0 to 2


`x^2 + x + 41`
from x = 0 to 39


This program looks for larger and longer examples of this, and does it over the internet over multiple computers.

## More Info
More info can be found on our wiki (https://github.com/ChemicalDevelopment/PGS/wiki)


The thread on mersenneforums (http://mersenneforum.org/showthread.php?t=21200)


Website: https://pgs.chemicaldevelopment.us


## Features

### Planned
  * Optimized kernel selection
  * GPU Hashing for workloads
  * Link with DB for users to help search
  * Distributed BOINC projects (a way aways from this one)


### Implemented
  * OpenCL support
  * JavaPGS
  * GUI Application

## Installing
Want to help out, or just stress test your computer? You can install PGS in these ways:
### Linux/Unix/Mac
#### Script (recommended)
A simple way to install this program is using the script ( https://github.com/ChemicalDevelopment/PGS/blob/master/install/install.sh ), copy and paste, or download onto your computer, then `sudo ./install.sh` for PGS! This, by default, installs to /usr/local/ , which you can easily change through the install script.


From here, you can run the PGSGUI by going into the install, and to PGSGUI-latest directory, and opening the jar file. Just click start and enjoy (note you may have to enable administrator privileges).


If you ever need to get a newer version, simply run the install.sh again, and it will automaticall update everything!
### Windows
#### Script (recommended)
TODO: Make batch script
### Building (harder)
For users that want more control, and customization, you can clone this repo, and download the neccessary dependency (JavaCL), and compile using your IDE, or commandline tool.

