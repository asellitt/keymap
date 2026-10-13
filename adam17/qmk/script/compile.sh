#!/bin/bash
CLEAR="\033[1;0m"
GREEN="\033[1;32m"
CYAN="\033[1;36m"

echo -e "$GREEN- Starting:$CYAN addams17/compile $GREEN-$CLEAR"
echo ''

echo -e "$GREEN- Pulling:$CYAN qmk/qmk_firmware updates $GREEN-$CLEAR"
echo ''

cd ~/src/qmk-qmk_firmware
git fetch && git pull

echo ''
echo -e "$GREEN- Making:$CYAN git-submodule $GREEN-$CLEAR"
echo ''

make git-submodule

echo ''
echo -e "$GREEN- Making:$CYAN clean $GREEN-$CLEAR"
echo ''
make clean

echo ''
echo -e "$GREEN- Making:$CYAN addams17_asellitt $GREEN-$CLEAR"
echo -e "(If it halts here, press$GREEN Y$CLEAR)"
echo ''

make addams17:asellitt

echo ''
echo -e "$GREEN- Moving:$CYAN hex $GREEN-$CLEAR"
echo ''

mv ~/src/qmk-qmk_firmware/addams17_asellitt.hex ~/src/keymap/addams17/qmk
