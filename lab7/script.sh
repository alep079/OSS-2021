#!/bin/bash

gcc 2_2.c -o 2_2.out
./2_2.out &  
pstree -p| grep 2_2.out
