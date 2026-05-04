#!/bin/bash
CLEAR="\033[1;0m"
GREEN="\033[1;32m"
CYAN="\033[1;36m"

echo -e "$GREEN- Starting:$CYAN ergodox/compile $GREEN-$CLEAR"
echo ''

echo -e "$GREEN- Pulling:$CYAN zsa/qmk_firmware updates $GREEN-$CLEAR"
# echo -e "$GREEN- Pulling:$CYAN qmk/qmk_firmware updates $GREEN-$CLEAR"
echo ''

cd ~/src/zsa-qmk_firmware
# cd ~/src/qmk-qmk_firmware

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
echo -e "$GREEN- Making:$CYAN ergodox_ez_asellitt $GREEN-$CLEAR"
echo -e "(If it halts here, press$GREEN Y$CLEAR)"
echo ''

make zsa/ergodox_ez:asellitt TARGET=ergodox_asellitt

echo ''
echo -e "$GREEN- Moving:$CYAN hex $GREEN-$CLEAR"
echo ''

mv ~/src/zsa-qmk_firmware/ergodox_asellitt.hex ~/src/keymap/ergodox
# mv ~/src/qmk-qmk_firmware/ergodox_ez_asellitt.hex ~/src/keymap/ergodox
