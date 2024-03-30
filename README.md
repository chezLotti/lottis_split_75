# lottis_split_75
qmk files to compile and flash my 75% keyboard
.stl files for the case

works (probably) only in conjunction with the NeoQwertz Layout (https://www.neo-layout.org/Layouts/neoqwertz/).
uses a single microcontroller with at least 26 programmable pins.
i connected both halfs with a 14pin bus cable of which 13 pins are used. 

how to use:
- put the folder (lottis_split_75) into the "qmk/keyboards/handwired/" folder
- start qmk_msys
- type "qmk compile -kb handwired/lottis_split_75 -km default"
- wait...
- put your microcontroller into bootloader mode
- and type "qmk flash -kb handwired/lottis_split_75 -km default"
- have fun

attention if you want to use the case!:
i designed it in sketchup. for reference: the left hand side is 7.4225in wide.
but when a friend of mine tried to print it, it was 7.4225mm.
i checked it later in freecad and fusion 360 and both said it's 74.225mm wide... what?!?
tl;dr: whatever your printing software says, scale it up such that the lhs is ~7.42in wide and the rhs is ~7.64in wide
