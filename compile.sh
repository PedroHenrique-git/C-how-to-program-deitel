#!/bin/bash

g++ "./$2/$1" -o "./$2/executavel.exe"
cd $2
./executavel.exe
