#!/bin/sh

set -xe

CFLAGS="-Wall -Wextra -Wshadow -Werror -pedantic -std=c99 -ggdb"
SRC="src/$1.c"
O="bin/$1"
LIBS="-lm"

cc $CFLAGS -o $O $SRC $LIBS
