#!/bin/bash
gcc -fPIC -shared *.c
gcc -shared -o liball.so *.o
