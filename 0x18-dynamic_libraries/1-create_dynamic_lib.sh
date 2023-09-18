#!/bin/bash
gcc -fpic *.c
gcc -shared *.o -o liball.so *.o
export LD_LIBRARY_PATH=/.:$LD_LIBRARY_PATH
