#!/bin/bash
gcc -c *.c
ar rcs libdall.a *.o
ranlib libdall.a
