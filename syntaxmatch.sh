#!/bin/bash

result_dir="/Users/shubhanghasabnis/Masters/Classes/Fourth_Quarter/Project/NatGen/C++_Programs/Results/"

for file in "$result_dir"/*; do
    if [[ $file == *.py ]]; then
        echo "Checking syntax for $file ..."
        pylint "$file"
 
    elif [[ $file == *.c ]]; then
        echo "Checking syntax for $file ..."
        gcc -fsyntax-only "$file"
    elif [[ $file == *.cpp ]]; then
        echo "Checking syntax for $file ..."
        g++ -fsyntax-only "$file"

    fi
done
