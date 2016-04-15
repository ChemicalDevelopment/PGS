    ██████╗  ██████╗ ███████╗
    ██╔══██╗██╔════╝ ██╔════╝
    ██████╔╝██║  ███╗███████╗
    ██╔═══╝ ██║   ██║╚════██║
    ██║     ╚██████╔╝███████║
    ╚═╝      ╚═════╝ ╚══════╝
    
## What is this?
This is a project that searches for functions that are prime for certain values of the input. It is a **P**rime **G**enerator **S**earch. It looks through polynomials, and tests some of the input, and then spits out some info.

## Why do this?
Primes have both practical and novel purposes. Primes are in all forms of cryptography, and are the building blocks of arithmetic. Finding the density, probability, and other properties of prime generating polynomials can help us now, and in the future.

There has been a small amount of modernized research on prime generating polynomials, and I believe there is a gap of where we are and where we should be. PrimeGrid is one example, and in



## Explanation
For a more in-detail explanation, see our wiki (https://github.com/ChemicalDevelopment/PGS/wiki), but here's a short explanation:


Primes are numbers that can't be made from multiplying two other integers together. The first few primes are 2, 3, 5, 7, 11, 13. A few example functions that return primes for the first few values are:


`2x + 3`
from x = 0 to 2


`x^2 + x + 41`
from x = 0 to 39


This program looks for larger and longer examples of this!

## More Info
More info can be found on our wiki (https://github.com/ChemicalDevelopment/PGS/wiki)


The thread on mersenneforums (http://mersenneforum.org/showthread.php?t=21200)


Website: https://pgs.chemicaldevelopment.us


## Implementations

### In C (WIP)
Basic program is written in C, and uses GMP for larger numbers. Written for performance over all platforms


This is located in the /C/ folder.

### In Java (WIP)
Now written! Using OpenCL to quickly make work! Does a 1000 brute search (-1000 to 1000) in under 10 seconds on a laptop!
