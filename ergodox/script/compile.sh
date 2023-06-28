#!/bin/bash

cd ~/src/qmk_firmware
git fetch && git pull
make git-submodule
make clean
make ergodox_ez:asellitt

mv ~/src/qmk_firmware/ergodox_ez_asellitt.hex ~/src/keymap/ergodox
