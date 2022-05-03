#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic *.c
ar -rc libmy.a *.o
ranlib libmy.a
