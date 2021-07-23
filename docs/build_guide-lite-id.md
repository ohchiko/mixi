# Panduan Merakit Macropad Mixi Lite

## Instalasi Firmware

Mixi Lite menggunakan firmware yang sama dengan Mixi, yaitu [QMK](https://qmk.fm/). Instalasi firmware Mixi Lite dapat
dilakukan melalui aplikasi [QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases).

Instruksi instalasi dapat dilihat di [halaman dokumentasi QMK](https://docs.qmk.fm/#/newbs_flashing).

## Merakit PCB

### Komponen

Komponen yang dibutuhkan untuk merakit PCB Mixi Lite adalah sebagai berikut:
- 1x PCB Mixi Lite
- 1x Reset Switch
- 1x Arduino Pro Micro (or clone) + headers
- 8/9x Switch MX
- (Opsional) 1x Rotary Encoder EC11

### Langkah Perakitan

#### Reset Button

**1. Beri timah pada salah satu pad.**

**2. Letakkan dan tahan posisi reset switch pada tempatnya.**

**3. Panaskan timah yang telah ada pada salah satu pad, sembari posisikan reset switch.**

**4. Solder pad yang lain.**

![reset](https://media.discordapp.net/attachments/854190316465815553/866199415844503572/IMG20210718124801.jpg?width=676&height=676)

#### Header Pro Micro

**1. Letakkan header pro micro pada lubang yang tersedia.**

Bagian yang lebih panjang menghadap ke PCB.

![header-1](https://media.discordapp.net/attachments/854190316465815553/866278336140148746/IMG20210718181909.jpg?width=676&height=676)

**2. Solder pin header pro micro pada sisi sebaliknya.**

![header-2](https://media.discordapp.net/attachments/854190316465815553/866278336656834560/IMG20210718181950.jpg?width=676&height=676)

**3. Potong sisa pin yang telah disolder.**

#### Switch

**1. Tempatkan switch pada plate dan pasang ke PCB.**

![switch](https://media.discordapp.net/attachments/854190316465815553/866279062807511070/IMG-20210718-WA0012.jpg?width=901&height=676)

**2. Solder switch.**

#### Pro Micro

**1. Letakkan pro micro di atas header.**

Bagian pro micro yang terdapat komponen menghadap ke PCB.

**2. Solder pin pro micro.**

![promicro](https://media.discordapp.net/attachments/854190316465815553/866199416247812136/IMG20210718125854.jpg?width=676&height=676)

## Merakit Case

### Komponen

Komponen case pada Mixi Lite terdiri atas:
- 1x Bottom Layer
- 4x Mid Layer
- 1x Plate Layer
- 2x Top Layer
- 8x Baut M2x8mm
- 4x Standoff M2x16mm
- (Extra) 4x Baut M2x5mm
- (Extra) 4x Standoff M2x12mm

### Langkah Perakitan

**1. Pasang standoff dan baut pada bottom layer.**

![bottom](https://media.discordapp.net/attachments/854190316465815553/866199416872239105/IMG20210718130111.jpg?width=676&height=676)

**2. Susun 4x mid layer.**

Jika memungkinkan, Anda dapat hanya menggunakan 3x mid layer. Dalam hal ini, gunakan standoff 12mm dan perhatikan tinggi pin header pro micro, apakah menabrak bottom layer atau tidak.

![mid](https://media.discordapp.net/attachments/854190316465815553/866199417622102016/IMG20210718130151.jpg?width=676&height=676)

**3. Letakkan plate dan PCB.**

**4. Susun top layer.**

Top layer dengan lubang baut lebih besar (lubang untuk standoff) berada di bawah top layer dengan lubang baut lebih kecil.

**5. Kencangkan baut pada case.**

Diharapkan tidak memutar baut terlalu keras berhubung bahan case terbuat dari akrilik yang dapat retak. Kencangkan baut secukupnya.

![complete](https://media.discordapp.net/attachments/854190316465815553/866199418210353152/IMG20210718130316.jpg?width=676&height=676)
