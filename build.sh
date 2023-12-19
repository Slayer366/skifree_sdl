#!/bin/bash

SAUCEDIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

mkdir $SAUCEDIR/build

cd $SAUCEDIR/build

cmake .. -DCMAKE_BUILD_TYPE=Release

num_cpus=$(nproc)

make -j$num_cpus
