#!/bin/bash
cmake -S . -B build
cmake --build build
cd build
./circular-buffer-test
