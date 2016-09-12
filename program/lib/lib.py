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
    while i < sqrtn + 2:
        if (get_bit(s[i / 32], i % 32) == 1):
            print(i)
            j = 2 * i
            while j < n:
                s[j / 32] = set_bit(s[j / 32], j % 32, 0)
                j += i
        i += 1
    return s

def savetofile(s):
    fn = "primes_test.dat"
    st = ""
    ch = 0xff
    lgch = 8
    for i in s:
        st += chr(i & ch)
        st += chr((i & (ch << lgch)) >> lgch)
        st += chr((i & (ch << 2 * lgch)) >> 2 * lgch)
        st += chr((i & (ch << 3 * lgch)) >> 3 * lgch)
    fil = open(fn, "w")
    fil.write(st)
    fil.close


sieve_array = numpy.array(sieve(2 ** 20), dtype=numpy.int32)
savetofile(sieve_array)
#sieve_array.tofile("primes.dat")
f = open('primes_test.dat').read()
print("\n")
for i in range(0, 20):
    #print(str(i) + " isprime " + str(get_bit(ord(f[i / 8]), i % 8)))
    print(ord(f[i]))