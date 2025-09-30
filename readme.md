# kb_mvac_voyager

<img width="1280" height="605" alt="image" src="https://github.com/user-attachments/assets/d8900e69-253f-4199-aa66-b3374bca50ea" />

A QMK-powered keyboard inspired by the ZSA Voyager.

## Overview

**kb_mvac_voyager** is a custom keyboard project written in C, compatible with [QMK Firmware](https://qmk.fm/). It is designed to mimic the layout and functionality of the [ZSA Voyager](https://www.zsa.io/voyager/), utilizing the exact same keyboard layout. You can configure and map your key layout using the [QMK Configurator](https://config.qmk.fm/#/zsa/voyager/LAYOUT), ensuring a flexible and user-friendly customization experience.

## Features

- 100% compatible with the ZSA Voyager layout
- Fully programmable using QMK Firmware
- Configure keymaps visually using the [QMK Configurator](https://config.qmk.fm/#/zsa/voyager/LAYOUT)
- Written entirely in C for maximum QMK compatibility

## Installation

### Prerequisites

- A C compiler (e.g., GCC, Clang)
- [QMK Firmware](https://qmk.fm/)
- QMK CLI tools

### Setup Instructions

1. **Download QMK Firmware**  
   Follow the [official QMK setup guide](https://docs.qmk.fm/#/newbs_getting_started) if you haven't already.
   ```sh
   git clone https://github.com/qmk/qmk_firmware.git
   cd qmk_firmware
   ```

2. **Download This Repository**  
   In the `qmk_firmware` directory, add the kb_mvac_voyager repo:
   ```sh
   git clone https://github.com/mvacoimbra/kb_mvac_voyager.git keyboards/handwired/mvacoimbra/mvac_voyager
   ```

3. **Build Your Firmware**
   ```sh
   qmk compile -kb handwired/mvacoimbra/mvac_voyager -km default
   ```
   Replace `default` with your keymap name if you've created a custom keymap.

4. **Flash Your Keyboard**

   I recommend using [QMK Toolbox](https://qmk.fm/toolbox/) for an easy and reliable flashing experience.  
   - Download QMK Toolbox from the [official website](https://qmk.fm/toolbox/).
   - Follow the [QMK flashing guide](https://docs.qmk.fm/#/flashing) or use your preferred method.

## Customizing Your Layout

1. **Customize Layout Online**

   - Visit the [QMK Configurator Voyager page](https://config.qmk.fm/#/zsa/voyager/LAYOUT).
   - Design your preferred layout.

2. **Download the Layout as JSON**

   - After finishing your layout in the configurator, click "Download .json" to save your keymap.

3. **Convert JSON to Keymap C**

   - Use the QMK utility [`qmk json2c`](https://docs.qmk.fm/#/cli_commands?id=json2c) to convert your `.json` layout to a keymap C file:
     ```sh
     qmk json2c path/to/your_layout.json
     ```
   - This will generate a `keymap.c` file.

4. **Place the Keymap**

   - Create a custom keymap folder inside your keyboard directory:
     ```
     keyboards/handwired/mvacoimbra/mvac_voyager/keymaps/custom/
     ```
   - Copy the generated `keymap.c` to this folder.

5. **Compile with Your Custom Keymap**

   - Compile the firmware using your custom keymap:
     ```sh
     qmk compile -kb handwired/mvacoimbra/mvac_voyager -km custom
     ```

## License

MIT License. See the [LICENSE](LICENSE) file for details.

## Credits

- Based on the [ZSA Voyager](https://www.zsa.io/voyager/) keyboard layout.
- Powered by [QMK Firmware](https://qmk.fm/).
- Maintained by [mvacoimbra](https://github.com/mvacoimbra).
