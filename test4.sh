#!/bin/bash
combinations=(
"1 2 3 4" "1 2 4 3" "1 3 2 4" "1 3 4 2" "1 4 2 3" "1 4 3 2"
"2 1 3 4" "2 1 4 3" "2 3 1 4" "2 3 4 1" "2 4 1 3" "2 4 3 1"
"3 1 2 4" "3 1 4 2" "3 2 1 4" "3 2 4 1" "3 4 1 2" "3 4 2 1"
"4 1 2 3" "4 1 3 2" "4 2 1 3" "4 2 3 1" "4 3 1 2" "4 3 2 1"
)
for combination in "${combinations[@]}"
do
  ./push_swap $combination | wc -l
done
