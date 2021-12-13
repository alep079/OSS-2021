#!/bin/bash

gcc 2_4.c -o 2_4.out
./2_4.out &
pstree -p| grep 2_4.out

