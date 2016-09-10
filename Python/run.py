import pyopencl as cl
import numpy
import itertools as it
from firebase import firebase

def set_bit(v, index, x):
  mask = 1 << index
  v &= ~mask
  if x:
    v |= mask
  return v

def sieve(n):
    np1 = n + 1
    s = list(range(np1))
    s[1] = 0
    sqrtn = int(round(n**0.5))
    for i in range(2, sqrtn + 1):
        if s[i]:
            s[i*i: np1: i] = [0] * len(range(i*i, np1, i))
    v = filter(None, s)
    bitset = [ 0 ] * (n / 32 + 1)
    for i in v:
        bitset[i / 32] = set_bit(bitset[i / 32], i % 32, 1)
    return bitset

class CL:
    def __init__(self):
        self.ctx = cl.create_some_context()
        self.queue = cl.CommandQueue(self.ctx)

    def loadProgram(self, filename):
        f = open(filename, 'r')
        fstr = "".join(f.readlines())
        print fstr
        self.program = cl.Program(self.ctx, fstr).build()

    def setup(self):
        mf = cl.mem_flags
        #notable, notable_distinct
        self.pref = numpy.array([40, 30], dtype=numpy.int32)
        self.prime = numpy.array(sieve(10000), dtype=numpy.int32)
        self.coef = numpy.array([0, 0, 0], dtype=numpy.int32)
        
        self.prefbuf = cl.Buffer(self.ctx, mf.READ_ONLY | mf.COPY_HOST_PTR, hostbuf=self.pref)
        self.primebuf = cl.Buffer(self.ctx, mf.WRITE_ONLY | mf.COPY_HOST_PTR, hostbuf=self.prime)
        self.coefbuf = cl.Buffer(self.ctx, mf.READ_ONLY | mf.COPY_HOST_PTR, hostbuf=self.coef)

    def execute(self, a, b, c):
        self.program.test_quadratics_abs_consecutive_distinct_32(self.queue, (a, b, c), None, self.prefbuf, self.primebuf, self.coefbuf)

example = CL()
example.loadProgram("kernel.c")
example.setup()
example.execute(100, 100, 100)
