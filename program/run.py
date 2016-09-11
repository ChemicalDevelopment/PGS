import pyopencl as cl
import numpy
import itertools as it
import json
import sys

class CL:
    def __init__(self):
        #self.ctx = cl.create_some_context()
        platforms = cl.get_platforms()
        self.ctx = cl.Context(dev_type=cl.device_type.DEFAULT, properties=[(cl.context_properties.PLATFORM, platforms[0])])
        self.queue = cl.CommandQueue(self.ctx)

    def loadProgram(self, filename):
        f = open(filename, 'r')
        fstr = "".join(f.readlines())
        print fstr
        self.program = cl.Program(self.ctx, fstr).build()

    def setup(self, offsets=(0, 0, 0)):
        mf = cl.mem_flags
        self.pref = numpy.array([60, 40], dtype=numpy.int32)
        self.prime = numpy.array(self.sieve(), dtype=numpy.int32)
        self.coef = numpy.array(offsets, dtype=numpy.int32)
        
        self.prefbuf = cl.Buffer(self.ctx, mf.READ_ONLY | mf.COPY_HOST_PTR, hostbuf=self.pref)
        self.primebuf = cl.Buffer(self.ctx, mf.WRITE_ONLY | mf.COPY_HOST_PTR, hostbuf=self.prime)
        self.coefbuf = cl.Buffer(self.ctx, mf.READ_ONLY | mf.COPY_HOST_PTR, hostbuf=self.coef)

    def sieve(self):
        f = open('primes.dat')
        return numpy.fromstring(f.read(), dtype=numpy.int32)

    def execute(self, ranges=(100, 100, 100)):
        self.program.test_quadratics_abs_consecutive_distinct_32(self.queue, ranges, None, self.prefbuf, self.primebuf, self.coefbuf)


PGS = CL()
PGS.loadProgram("kernel.c")

if (len(sys.argv) > 2):
    with open(sys.argv[2]) as data_file:    
        data = json.load(data_file)
    PGS.setup(data["offsets"])
    PGS.execute(data["ranges"])
else:
    PGS.setup()
    PGS.execute()
