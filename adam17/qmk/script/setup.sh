#!/bin/bash

git clone --recurse-submodules git@github.com:qmk/qmk_firmware.git ~/src/qmk-qmk_firmware

cd ~/src/qmk-qmk_firmware
./util/qmk_install.sh
make git-submodule

ln -sF ~/src/keymap/addams17/qmk ~/src/qmk-qmk_firmware/keyboards/kbdcraft/adam17/keymaps/addams17_asellitt
