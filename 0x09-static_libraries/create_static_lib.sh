#!/bin/bash
gcc -fno-pie -fno-stack-protector -c *.c
ar -rc liball.a *.o
