#!/bin/bash
gcc -c -fpic -Wall -Werror -Wextra -pedantic *.c
gcc -shared *.o -o liball.so
export LD_LIBBRARY_PATH=$PWD:$LD_LIBRARY_PATH
