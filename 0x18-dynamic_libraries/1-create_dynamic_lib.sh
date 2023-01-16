#!/bin/bash
gcc -c -fPIC -c *.c
gcc *.o -shared -o liball.so 
