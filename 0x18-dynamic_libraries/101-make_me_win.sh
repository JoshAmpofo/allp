#!/bin/bash
wget -P /tmp/ https://github.com/JoshAmpofo/alx-low_level_programming/raw/main/0x18-dynamic_libraries/randnum.so
export LD_PRELOAD=/tmp/randnum.so
