#!/usr/bin/python3
from ctypes import *
so_file = '100-operations.so'
operations = CDLL(so_file)
print(type(operations))

