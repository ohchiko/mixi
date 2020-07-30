# Panduan Merakit

## Daftar Komponen

Berikut daftar komponen yang diperlukan untuk merakit macropad Mixi:

| Komponen                              |   Jumlah | Gambar                                |
|---------------------------------------|----------|---------------------------------------|
| PCB Mixi                              |        1 | ![](https://i.imgur.com/G1R2raZt.jpg) |
| Switch (PCB mount atau plate mount)   |        9 | ![](https://i.imgur.com/IYepZ86t.jpg) |
| Keycaps                               |        9 | ![](https://i.imgur.com/IUYmllPt.jpg) |
| Arduino Pro Micro / clone             |        1 | ![](https://i.imgur.com/X5aqknNt.jpg) |
| Resistor 470Ω 1/4 W                   |        1 | ![](https://i.imgur.com/f5QIO8tt.jpg) |
| Resistor 10KΩ 1/4 W                   |        1 | ![](https://i.imgur.com/B0Q0Dfmt.jpg) |
| Micro Switch SMD 3x6x2.5mm            |        1 | ![](https://i.imgur.com/arVxMoot.jpg) |
| WS2812B RGB LED (individual)          |        5 | ![](https://i.imgur.com/NDJdu9Kt.jpg) |
| Baut M2x10                            |        8 | ![](https://i.imgur.com/wrFVZyFt.jpg) |
| Spacer M2x12                          |        4 | ![](https://i.imgur.com/oKORk9Et.jpg) |
| Casing Mixi                           |        1 | ![](https://i.imgur.com/Seof9ejt.jpg) |
| Rubber Feet 6mm x >=2.5mm             |        4 | ![](https://i.imgur.com/04lfNT0t.jpg) |
| (Opsional) EC11 Rotary Encoder Switch | 1 atau 2 | ![](https://i.imgur.com/t4BbMint.jpg) |
| (Opsional) Rotary Encoder Knob        | 1 atau 2 | ![](https://i.imgur.com/pJnMIWrt.jpg) |

> **Catatan**: Jika berencana menggunakan rotary encoder, maka jumlah switch dan
> keycaps dikurangi menjadi 7 atau 8 tergantung jumlah rotary encoder yang akan
> dipasang. Rotary encoder hanya dapat dipasang di sisi kiri atas dan kanan atas
> atau pada posisi [0,0] dan [0,2] jika pada matrix switch.

## Instalasi Firmware

Instalasi firmware dapat dilakukan sebelum ataupun sesudah perakitan. Untuk
langkah-langkah flashing firmware sudah dijelaskan secara rinci pada
[dokumentasi QMK](https://docs.qmk.fm/#/newbs_flashing).

Firmware Mixi default pada repository QMK belum support aplikasi
[VIA](https://caniusevia.com). Firmware Mixi yang sudah support aplikasi VIA,
dapat didownload di [direktori firmware](/firmware).

## Perakitan

![Prepare](https://i.imgur.com/G1R2raZm.jpg)

Pertama, solder resistor 470Ω pada `R1` dan resistor 10KΩ pada `R2`. Setelah
menyolder resistor, potong kaki resistor hingga rata dengan PCB. Jika timah pada
kaki resistor terlalu tinggi, nantinya akan menabrak bagian bawah switch.

![Solder resistors](https://i.imgur.com/UX7Z2cUm.jpg)
![Solder resistors](https://i.imgur.com/JEl6zVxm.jpg)
![Trim legs](https://i.imgur.com/12rAxZym.jpg)

Selanjutnya, solder komponen SMD yaitu tombol reset pada `SW3` dan LED WS2812B
pada `LED1` sampai `LED5`. Berikan timah pada salah satu pad, kemudian gunakan
pinset/tweezer untuk meletakkan komponen tersebut sambil memanaskan timah yang
telah ada pada pad sehingga komponen dapat terpasang sesuai posisinya. Lalu,
solder pad lainnya.

![Tin pad](https://i.imgur.com/bWvD9qvm.jpg)
![Place SMD components](https://i.imgur.com/KK0JXVOm.jpg)
![Place SMD components](https://i.imgur.com/CqszDUZm.jpg)
![Complete solder pads](https://i.imgur.com/PdLu1aom.jpg)

> **Catatan**: Perhatikan peletakkan LED WS2812B! Bagian pada LED yang sedikit
> menjorok ke dalam (pin 3) harus berada di pad yang berlawanan arah dengan pad
> bernomor 1 pada PCB.

Kemudian, solder header Pro Micro ke PCB. Bila perlu, gunakan alat bantu seperti
dielectric tape untuk meluruskan posisi header sebelum disolder. Lalu, potong
kaki header yang akan menghadap ke switch agar tidak mengganggu posisi switch.

Jika menggunakan rotary encoder, maka selanjutnya solder rotary encoder pada
`SW1` dan/atau `SW2` di PCB sebelum memasang switch.

![](https://i.imgur.com/s4X3ddYm.jpg)

Pasang switch pada switch plate dan letakkan plate support sebelum menyolder
switch ke PCB sehingga plate support berada diantara PCB dan switch plate. Lalu
solder switch ke PCB.

![](https://i.imgur.com/EmnORK0m.jpg)

> **Catatan**: Sebelum menyolder switch ke PCB, pastikan posisi PCB sebisa
> mungkin menempel pada plate support. Hal ini dikarenakan jika terdapat gap
> cukup besar antara PCB dengan plate support akan mengakibatkan base layer
> casing menabrak kaki header Pro Micro. Dalam hal ini, switch plate mount
> sangat direkomendasikan.

Setelah switch terpasang pada PCB, selanjutnya solder Pro Micro ke header yang
telah dipasang. Pastikan komponen pada Pro Micro menghadap ke PCB. Potong kaki
header pada Pro Micro setelah disolder.

![](https://i.imgur.com/mylS2t2m.jpg)

Susun tiap layer casing seperti gambar di bawah ini, lalu pasang.

*urutan dari bawah ke atas*

![](https://i.imgur.com/Q2gwhIem.jpg)

Kemudian, tempelkan rubber feet di lokasi yang sudah ditentukan pada base layer casing.

![](https://i.imgur.com/ogmd9iIm.jpg)

Pasang keycaps, dan selesai.

![](https://i.imgur.com/sv39K2hm.jpg)
