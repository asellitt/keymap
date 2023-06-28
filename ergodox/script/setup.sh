#!/bin/bash

git clone --recurse-submodules git@github.com:zsa/qmk_firmware.git ~/src/qmk_firmware

cd ~/src/qmk_firmware
./util/qmk_install.sh
make git-submodule

ln -sF ~/src/keymap/ergodox ~/src/qmk_firmware/keyboards/ergodox_ez/keymaps/asellitt
