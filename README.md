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
We have a website (https://chemicaldevelopment.us/pgs/client) where you can create an account, view records, and manage your account.

To download the project, please check out (https://chemicaldevelopment.us/pgs).

If you would like to help develop the project, you can reach me at info@chemicaldevelopment.us


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

Website: (https://chemicaldevelopment.us/pgs)
Online Client: (https://chemicaldevelopment.us/pgs/client/)
Account Manager: (https://chemicaldevelopment.us/pgs/client/account/)


## Features

### Planned
  * GUI Application (Was removed)


### Implemented
  * OpenCL support
  * Link with DB for users to help search


### Removed
  * JavaPGS
  * GUI Application (Also going to be implemented)


## Installing
Coming in the next few days