# ergodox-keymap

To be compiled with zsa/qmk_firmware.

See: [original layout](https://configure.ergodox-ez.com/ergodox-ez/layouts/60bpL/XgM09/0) in the
Oryx configurator.

### Set up QMK Repo

Clone the repo:
```bash
cd ~/src
git clone --recurse-submodules https://github.com/zsa/qmk_firmware.git
```

Install dependencies:

```bash
cd ~/src/qmk_firmware
./util/qmk_install.sh
make git-submodule
```

See: [QMK Docs](https://docs.qmk.fm/#/newbs_getting_started?id=set-up-qmk) for more info.

### Set up QMK Environment

Symlink this repo in to the keymaps:

```bash
ln -sF ~/src/ergodox-keymap ~/src/qmk_firmware/keyboards/ergodox_ez/keymaps/asellitt
```

Then compile:

```bash
cd ~/src/qmk_firmware
git fetch && git pull
make git-submodule
make ergodox_ez:asellitt
```
