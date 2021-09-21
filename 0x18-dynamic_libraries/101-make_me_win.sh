#!/bin/bash
wget -q --output-document=$HOME/lib-gm_overhaul.so https://github.com/Toby-Codes/alx-low_level_programming/blob/main/0x18-dynamic_libraries/lib_gm_overhaul.so
export LD_PRELOAD=$HOME/lib-gm_overhaul.so
