#!/bin/bash
combinations=(
"1 2 3 4 5" "1 2 3 5 4" "1 2 4 3 5" "1 2 4 5 3"
"1 2 5 3 4" "1 2 5 4 3" "1 3 2 4 5" "1 3 2 5 4" "1 3 4 2 5"
"1 3 4 5 2" "1 3 5 2 4" "1 3 5 4 2" "1 4 2 3 5" "1 4 2 5 3"
"1 4 3 2 5" "1 4 3 5 2" "1 4 5 2 3" "1 4 5 3 2" "1 5 2 3 4"
"1 5 2 4 3" "1 5 3 2 4" "1 5 3 4 2" "1 5 4 2 3" "1 5 4 3 2"
"2 1 3 4 5" "2 1 3 5 4" "2 1 4 3 5" "2 1 4 5 3" "2 1 5 3 4"
"2 1 5 4 3" "2 3 1 4 5" "2 3 1 5 4" "2 3 4 1 5" "2 3 4 5 1"
"2 3 5 1 4" "2 3 5 4 1" "2 4 1 3 5" "2 4 1 5 3" "2 4 3 1 5"
"2 4 3 5 1" "2 4 5 1 3" "2 4 5 3 1" "2 5 1 3 4" "2 5 1 4 3"
"2 5 3 1 4" "2 5 3 4 1" "2 5 4 1 3" "2 5 4 3 1" "3 1 2 4 5"
"3 1 2 5 4" "3 1 4 2 5" "3 1 4 5 2" "3 1 5 2 4" "3 1 5 4 2"
"3 2 1 4 5" "3 2 1 5 4" "3 2 4 1 5" "3 2 4 5 1" "3 2 5 1 4"
"3 2 5 4 1" "3 4 1 2 5" "3 4 1 5 2" "3 4 2 1 5" "3 4 2 5 1"
"3 4 5 1 2" "3 4 5 2 1" "3 5 1 2 4" "3 5 1 4 2" "3 5 2 1 4"
"3 5 2 4 1" "3 5 4 1 2" "3 5 4 2 1" "4 1 2 3 5" "4 1 2 5 3"
"4 1 3 2 5" "4 1 3 5 2" "4 1 5 2 3" "4 1 5 3 2" "4 2 1 3 5"
"4 2 1 5 3" "4 2 3 1 5" "4 2 3 5 1" "4 2 5 1 3" "4 2 5 3 1"
"4 3 1 2 5" "4 3 1 5 2" "4 3 2 1 5" "4 3 2 5 1" "4 3 5 1 2"
"4 3 5 2 1" "4 5 1 2 3" "4 5 1 3 2" "4 5 2 1 3" "4 5 2 3 1"
"4 5 3 1 2" "4 5 3 2 1" "5 1 2 3 4" "5 1 2 4 3" "5 1 3 2 4"
"5 1 3 4 2" "5 1 4 2 3" "5 1 4 3 2" "5 2 1 3 4" "5 2 1 4 3"
"5 2 3 1 4" "5 2 3 4 1" "5 2 4 1 3" "5 2 4 3 1" "5 3 1 2 4"
"5 3 1 4 2" "5 3 2 1 4" "5 3 2 4 1" "5 3 4 1 2" "5 3 4 2 1"
"5 4 1 2 3" "5 4 1 3 2" "5 4 2 1 3" "5 4 2 3 1" "5 4 3 1 2" "5 4 3 2 1"
)
for combination in "${combinations[@]}"
do
  ./push_swap $combination
done
