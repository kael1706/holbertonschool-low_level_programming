#!/bin/bash
gcc -g -fPIC -shared *.c
gcc -shared -o liball.so *.o
