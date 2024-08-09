#!/bin/bash

rm ./ok

gcc main.c -o ok -L. -lprim -Wl,-rpath,.
