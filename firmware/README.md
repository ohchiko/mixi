# Firmware

You can download the default firmware for you Mixi macropad from here or from
[the official QMK website](https://qmk.fm/keyboards/).

Below are the steps in order to use VIA-supported firmware:

1. Download one of the firmware which has `_via` suffix according to your layout
2. Download the [`mixi.json`](mixi.json) file.
3. Flash the downloaded firmware to your Mixi macropad.
4. Open VIA application (download [here](https://caniusevia.com)).
5. Go to `File -> Import Keymap` (or simply press `Ctrl+O` on your keyboard).
6. Locate and choose the `mixi.json` file downloaded before.
7. Feel free to customize the keymap!

> The `mixi.json` file is needed and have to manually imported to VIA application
> until the PR to VIA repository merged. You can track the PR
> [here](https://github.com/the-via/keyboards/pull/177).

## How to Flash Firmware

[How to flash firmware?](https://docs.qmk.fm/#/newbs_flashing)
