# Build Guide

## List of Materials

These below components are needed in order to build Mixi macropad completely.

| Name                                  |   Qty. | Pic.                                  |
|---------------------------------------|--------|---------------------------------------|
| Mixi PCB                              |      1 | ![](https://i.imgur.com/G1R2raZt.jpg) |
| Switches (PCB mount or plate mount)   |      9 | ![](https://i.imgur.com/IYepZ86t.jpg) |
| Keycaps                               |      9 | ![](https://i.imgur.com/IUYmllPt.jpg) |
| Arduino Pro Micro / clone             |      1 | ![](https://i.imgur.com/X5aqknNt.jpg) |
| 470Ω 1/4 W Resistor                   |      1 | ![](https://i.imgur.com/f5QIO8tt.jpg) |
| 10KΩ 1/4 W Resistor                   |      1 | ![](https://i.imgur.com/B0Q0Dfmt.jpg) |
| Micro Switch SMD 3x6x2.5mm            |      1 | ![](https://i.imgur.com/arVxMoot.jpg) |
| WS2812B RGB LED (individual)          |      5 | ![](https://i.imgur.com/NDJdu9Kt.jpg) |
| M2x10 Bolts                           |      8 | ![](https://i.imgur.com/wrFVZyFt.jpg) |
| M2x12 Standoffs                       |      4 | ![](https://i.imgur.com/oKORk9Et.jpg) |
| Mixi Acrylic Sandwich Case            |      1 | ![](https://i.imgur.com/Seof9ejt.jpg) |
| Rubber Feet 6mm x >=2.5mm             |      4 | ![](https://i.imgur.com/04lfNT0t.jpg) |
| (Optional) EC11 Rotary Encoder Switch | 1 or 2 | ![](https://i.imgur.com/t4BbMint.jpg) |
| (Optional) Rotary Encoder Knob        | 1 or 2 | ![](https://i.imgur.com/pJnMIWrt.jpg) |

> **Note**: If you planning on using rotary encoder, the amount of switches and
> keycaps can be reduced to 7 or 8 depends on how many rotary encoder used. The
> rotary encoder can only be mounted on the top left and the top right of the
> PCB or on [0,0] and [0,2] from the switch matrix.

## Firmware Installation

Firmware installation can be done before or after build. Steps on flashing the
firmware are described on the
[QMK documentation](https://docs.qmk.fm/#/newbs_flashing).

The default firmware of Mixi doesn't support [VIA](https://caniusevia.com). VIA-
supported firmware can be downloaded from the [firmware directory](/firmware).

## Building

![Prepare](https://i.imgur.com/G1R2raZm.jpg)

Put the 470Ω resistor on `R1` and 10KΩ resistor on `R2` and solder them. Then
trim the leads flush to the PCB on the other side to avoid interference with
the switches.

![Solder resistors](https://i.imgur.com/UX7Z2cUm.jpg)
![Solder resistors](https://i.imgur.com/JEl6zVxm.jpg)
![Trim legs](https://i.imgur.com/12rAxZym.jpg)

After that, solder the SMD parts which are the reset button on `SW3` and LEDs on
`LED1` to `LED5`. Tin one of the pads then use tweezer to hold the component in
place, and solder the one pad. Make sure it is aligned properly then solder the
rest of the pads.

![Tin pad](https://i.imgur.com/bWvD9qvm.jpg)
![Place SMD components](https://i.imgur.com/KK0JXVOm.jpg)
![Place SMD components](https://i.imgur.com/CqszDUZm.jpg)
![Complete solder pads](https://i.imgur.com/PdLu1aom.jpg)

> **Note**: Before soldering the WS2812B LEDs, make each is aligned properly.
> The corner notch should be on the top right.

Then solder the Pro Micro header. You can use dielectric tape to align the
the header. After soldering, trim the legs.

If you want to use rotary encoder(s), it's time to solder them. Put the rotary
encoder on `SW1` and/or `SW2`.

![Rotary](https://i.imgur.com/s4X3ddYm.jpg)

Put your switches on the switch plate layer of the case and put the plate
support layer between the switch plate layer and the PCB. Solder the swithes to
the PCB.

![Switch](https://i.imgur.com/EmnORK0m.jpg)

> **Note**: Before soldering the switches, make sure the PCB is close to the
> plate support layer. If there's to much gap between the PCB and the plate
> support layer, the Pro Micro header will later interfere with the base layer
> of the case. In this case, plate mounted switches are highly recommended.

After the switches are soldered, put the Pro Micro on the headers and solder it.
Make sure the components on the Pro Micro is facing the PCB. Then trim the
legs so it won't interfere with the base layer of the case.

![Pro micro](https://i.imgur.com/mylS2t2m.jpg)

Stack the case layers in below order, and assemble them with standoffs and bolts.

*from bottom to top*

![Case layer order](https://i.imgur.com/Q2gwhIem.jpg)

Place the rubber feet at the designated locations.

![Rubber feet](https://i.imgur.com/ogmd9iIm.jpg)

![](https://i.imgur.com/sv39K2hm.jpg)

Put keycaps on, and voila!.
