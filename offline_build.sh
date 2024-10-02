#!/usr/bin/bash

#export CC=/usr/bin/gcc-9
#export CXX=/usr/bin/g++-9

./scripts/feeds update -a
./scripts/feeds install -a

# Run the following line manually if you are building
# the firmware on your build system for the first time.
# Check the target module, selected elements, etc. to make
# sure the current config is what you want.
# After that, save and review the .config file and make sure
# the selected elements are `=y`.

#make menuconfig

make defconfig
make download -j$(nproc)
make -j$(nproc) || make -j1 V=s
