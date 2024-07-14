#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo "Usage: <filename>"
    exit 1
fi

./$(basename "$1") < cp.in > cp.out

