# PGS

## What is this?
This is a project that searches for functions that are prime for certain values of the input. It is a **P**rime **G**enerator **S**earch. It looks through polynomials, and tests some of the input, and then spits out some info.

## Why do this?
I believe that this question is not always relevant to research. Researching in maths, or any subject may lend itself to other problems in the future. Understanding the world around us and how it works is often priceless.

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


## Findings

Polynomials found by PGS:

`113 + 17x^1 + 1x^2  is prime for x = 0, 1, ... 30, 31`


`131 + 19x^1 + 1x^2  is prime for x = 0, 1, ... 29, 30`


`151 + 21x^1 + 1x^2  is prime for x = 0, 1, ... 28, 29`


`359 + 558x^1 + 36x^2  is prime for x = 0, 1, ... 28, 29`


`953 + 630x^1 + 36x^2  is prime for x = 0, 1, ... 27, 28`


`1619 + 702x^1 + 36x^2  is prime for x = 0, 1, ... 26, 27`


`223 + -27x + 1x^2  is prime for x = 0, 1, ... 52, 53`


## Implementations

### In C (WIP)
Basic program is written in C, and uses GMP for larger numbers. Written for performance over all platforms


This is located in the /C/ folder.

### In Java (Not started)
Less core performance, but will include an OpenCL (through JavaCL) program to run on GPUs
