#!/bin/bash
gcc -fPIC -c *.c
gcc -sjared *.o -o liball.so
