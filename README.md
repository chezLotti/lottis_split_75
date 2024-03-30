# lottis_split_75
qmk files to compile and flash my 75% keyboard

works (probably) only in conjunction with the NeoQwertz Layout (https://www.neo-layout.org/Layouts/neoqwertz/).
uses a single microcontroller with at least 26 programmable pins.
i connected both halfs through a 14pin bus cable of which 13 pins are used. 

how to use:
- put the folder (lottis_split_75) into the "qmk/keyboards/handwired/" folder
- start qmk_msys
- type "qmk compile -kb handwired/lottis_split_75 -km default"
- wait...
- put your microcontroller into bootloader mode
- and type "qmk flash -kb handwired/lottis_split_75 -km default"
- have fun
