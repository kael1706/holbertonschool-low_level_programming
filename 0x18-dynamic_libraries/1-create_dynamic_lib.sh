#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic -shared *.c -o liball.so
