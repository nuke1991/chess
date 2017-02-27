#!/bin/bash
#Run All UTs in folder current folder all files with test in name

for f in *test*;
do
   ./$f
done

