#!/bin/bash

FN="libprim";

gcc -shared -o "${FN}.so" -fPIC "${FN}.c"

cp "${FN}.so" ./..
cp "${FN}.h" ./..

