#!/bin/bash

git clone --recurse-submodules git@github.com:zsa/qmk_firmware.git ~/src/zsa-qmk_firmware
# git clone --recurse-submodules git@github.com:qmk/qmk_firmware.git ~/src/qmk-qmk_firmware

cd ~/src/zsa-qmk_firmware
# cd ~/src/qmk-qmk_firmware
./util/qmk_install.sh
make git-submodule

ln -sF ~/src/keymap/ergodox ~/src/zsa-qmk_firmware/keyboards/zsa/ergodox_ez/keymaps/asellitt
# ln -sF ~/src/keymap/ergodox ~/src/qmk-qmk_firmware/keyboards/ergodox_ez/keymaps/asellitt
