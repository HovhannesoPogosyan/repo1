#! /bin/bash

grep -v '^[[:space:]]*$' $1 > file2.txt
cat file2.txt > file1.txt
rm file2.txt

