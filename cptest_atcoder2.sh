#!/bin/bash
problemname=$1
cnt=${#problemname}-2
oj dl "https://atcoder.jp/contests/ ${problemname:0:cnt}/tasks/${problemname//-/_}"
g++ -Wall -std=c++14 ./$1.cpp
oj test
rm -f a.out
rm -rf test