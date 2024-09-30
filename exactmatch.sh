#!/bin/bash

input_dir="/Users/shubhanghasabnis/Masters/Classes/Fourth_Quarter/Project/NatGen/C_Programs/"
result_dir="/Users/shubhanghasabnis/Masters/Classes/Fourth_Quarter/Project/NatGen/C_Programs/Results"

for file in $(ls $input_dir); do
    echo "Comparing $file ..."
    if cmp -s "${input_dir}${file}" "${result_dir}${file}"; then
        echo "Exact match for $file"
    else
        echo "Difference found in $file"
    fi
done
