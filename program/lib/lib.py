import numpy

def set_bit(v, index, x):
  mask = 1 << index
  v &= ~mask
  if x:
    v |= mask
  return v

def get_bit(v, index):
    return (v >> index) & 1

def sieve(n):
    if (n % 32 != 0):
        n += 32 - (n % 32)
    ln = n / 32
    s = [~0] * ln
    s[0] = set_bit(s[0], 0, 0)
    s[0] = set_bit(s[0], 1, 0)
    sqrtn = int(round(n**0.5))
    i = 2
    while i < sqrtn + 1:
        if (get_bit(s[i / 32], i % 32) == 1):
            print(i)
            j = 2 * i
            while j < n:
                s[j / 32] = set_bit(s[j / 32], j % 32, 0)
                j += i
        i += 1
    return s


sieve_array = numpy.array(sieve(2 ** 30), dtype=numpy.int32)
sieve_array.tofile("primes.dat")
f = open('primes.dat')
print(len(f.read()))