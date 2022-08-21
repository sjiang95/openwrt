#!/usr/bin/bash

#export CC=/usr/bin/gcc-9
#export CXX=/usr/bin/g++-9

./scripts/feeds update -a
./scripts/feeds install -a

make defconfig
make download -j8
make -j$(nproc) || make -j1 V=s
