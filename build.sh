#!/bin/sh

set -xe

# CC="${CXX:-cc}"
CC="gcc"
PKGS=""
CFLAGS="-Wall -Wextra -std=c11 -pedantic -ggdb"
LIBS=-lm
SRC="src/main.c src/lib.c"

$CC $CFLAGS `pkg-config --cflags $PKGS` -o bin/main $SRC $LIBS `pkg-config --libs $PKGS`
