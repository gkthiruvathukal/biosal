#!/bin/bash

#
CFLAGS="-O3 -march=native -std=c99 -Wall -Wextra -pedantic -I. -Wno-unused-parameter -D_POSIX_C_SOURCE=200112L -Werror"
clear
echo "CFLAGS: $CFLAGS"

make clean
make CFLAGS="$CFLAGS" all -j 8
