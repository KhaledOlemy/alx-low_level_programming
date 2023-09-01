#!/bin/bash
gcc -c *.c
ar rc libdall.a *.o
ranlib libdall.a
