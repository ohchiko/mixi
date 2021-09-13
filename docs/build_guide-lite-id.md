# Panduan Merakit Macropad Mixi Lite

[![built](https://i.imgur.com/QGY6OPSl.jpg)](https://i.imgur.com/QGY6OPS.jpg)


## Instalasi _Firmware_

Mixi Lite menggunakan _firmware_ [QMK](https://qmk.fm/). 
Firmware Mixi Lite dapat diunduh pada [tautan ini](https://drive.google.com/drive/folders/1Pa_X5m7XY1j7zEGnwzM4nk56kc_EIH6z?usp=sharing).

Instalasi _firmware_ dapat dilakukan melalui aplikasi [QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases).
Instruksi instalasi dapat dilihat di [halaman dokumentasi QMK](https://docs.qmk.fm/#/newbs_flashing).

## Merakit Mixi Lite

### Komponen

[ ![components](https://i.imgur.com/hJNwRQgl.jpg) ](https://i.imgur.com/hJNwRQg.jpg)

Komponen yang akan Anda terima dari pembelian kit Mixi Lite dan yang dibutuhkan untuk proses perakitan adalah sebagai berikut:

- 1x PCB Mixi Lite
- 1x Case Mixi Lite
- 4x Kaki Karet (_rubber bump-on feet_)
- 1x Arduino Pro Micro + _header_
- 1x Tombol Reset
- 1x Resistor 10K Ohm
- 1x Rotary Encoder EC11
- 1x Knob Rotary

Anda perlu menambahkan 8-9x Switch MX untuk proses perakitan. Jika Anda akan menggunakan rotary encoder, Anda hanya butuh sebanyak 8x Switch MX.

Komponen lain yang dapat Anda tambahkan adalah sebagai berikut:

- 2x RGB LED Strip (2 Mata LED)
- 1x Resistor 470 Ohm
- 3x ±2.5cm Kabel Tembaga 22/24 AWG (disarankan kabel tunggal)
- 3x ±6cm Kabel Tembaga 22/24 AWG (disarankan kabel tunggal)

### Langkah Perakitan

#### Reset Button

**1. Beri timah pada salah satu pad.**

[ ![tin-reset](https://i.imgur.com/QExGbcLl.jpg) ](https://i.imgur.com/QExGbcL.jpg)

**2. Panaskan timah yang telah ada pada salah satu pad, sembari posisikan reset switch.**

[ ![reheat-reset](https://i.imgur.com/m6Skztql.jpg) ](https://i.imgur.com/m6Skztq.jpg)

**3. Solder pad yang lain.**

[ ![reset](https://i.imgur.com/JJNAnhJl.jpg) ](https://i.imgur.com/JJNAnhJ.jpg)

**4. Tekuk kaki resistor 10K ohm.**

[ ![bend-reset](https://i.imgur.com/RUvLQYll.jpg) ](https://i.imgur.com/RUvLQYl.jpg)

**5. Masukan kaki resistor tersebut ke R2 kemudian tekuk kaki resistor di sisi sebaliknya untuk menahan posisi resistor, lalu solder.**

[ ![r2-reset](https://i.imgur.com/xE5OYVQl.jpg) ](https://i.imgur.com/xE5OYVQ.jpg)

**6. Potong kaki resistor hingga rata dengan PCB, dan resistor akan terlihat seperti gambar di bawah ini.**

[ ![resistor-reset](https://i.imgur.com/31k1mVil.jpg) ](https://i.imgur.com/31k1mVi.jpg)

#### RGB Underglow - 1

**Jika Anda akan menggunakan fitur RGB underglow, pasang resistor 470 ohm pada R1.**

[ ![resistor-rgb](https://i.imgur.com/DvjoZxRl.jpg) ](https://i.imgur.com/DvjoZxR.jpg)

#### Pro Micro - 1

**1. Letakkan header pro micro pada lubang yang tersedia, kaki yang lebih pendek menghadap PCB.**

[ ![header-1](https://i.imgur.com/d7lWxfel.jpg) ](https://i.imgur.com/d7lWxfe.jpg)

**2. Solder salah satu pin dari header pada sisi sebaliknya sembari meluruskan header.**

[ ![header-2](https://i.imgur.com/SSpsfYDl.jpg) ](https://i.imgur.com/SSpsfYD.jpg)

**3. Pastikan header lurus sehingga Pro Micro dapat dimasukkan dengan mudah.**

[ ![header-3](https://i.imgur.com/67iGiWgl.jpg) ](https://i.imgur.com/67iGiWg.jpg)

**4. Jika header sudah lurus, solder seluruh pin header.**

[ ![header-4](https://i.imgur.com/i1ZI37Cl.jpg) ](https://i.imgur.com/i1ZI37C.jpg)

#### Rotary Encoder

**1. Jika Anda akan menggunakan rotary encoder, masukan rotary encoder pada sisi balik dari SW1 (sisi atas PCB)**

[ ![rotary-1](https://i.imgur.com/msZenh6l.jpg) ](https://i.imgur.com/msZenh6.jpg)

**2. Solder ke-lima pin rotary encoder.**

[ ![rotary-2](https://i.imgur.com/TOtVWS3l.jpg) ](https://i.imgur.com/TOtVWS3.jpg)

#### Switch

**1. Tempatkan switch pada plate.**

[ ![switch-1](https://i.imgur.com/RJhTORQl.jpg) ](https://i.imgur.com/RJhTORQ.jpg)

**2. Masukkan switch ke PCB dan solder semua switch.**

[ ![switch-2](https://i.imgur.com/eQus7pkl.jpg) ](https://i.imgur.com/eQus7pk.jpg)

Sebagai langkah preventif, Anda dapat memotong pin 2 switch yang terletak di antara header Pro Micro untuk mengurangi risiko pin switch menyentuh komponen pada Pro Micro.

#### Pro Micro - 2

**1. Letakkan pro micro di atas header, komponen pada Pro Micro menghadap PCB.**

[ ![promicro-1](https://i.imgur.com/PcZicUCl.jpg) ](https://i.imgur.com/PcZicUC.jpg)

Anda juga dapat menempelkan Kapton/Dielectric Tape pada PCB, di atas pin switch di antara header Pro Micro sebelum meletakkan Pro Micro untuk menghindari kontak antara komponen Pro Micro dengan pin switch.

**2. Solder pin Pro Micro.**

[ ![promicro-2](https://i.imgur.com/US7sk5sl.jpg) ](https://i.imgur.com/US7sk5s.jpg)

#### RGB Underglow - 2

**1. Gunakan 3 warna kabel berbeda untuk setiap panjang kabel. Beri timah pada tembaga pada ujung kabel.**

[ ![rgb-1](https://i.imgur.com/vaViNYll.jpg) ](https://i.imgur.com/vaViNYl.jpg)

**2. Beri timah pada pad di ujung LED Strip. Salah satu strip hanya perlu diberi timah pada satu sisi saja (perhatikan tanda panah pada LED Strip).**

[ ![rgb-2](https://i.imgur.com/vpIG5Wbl.jpg) ](https://i.imgur.com/vpIG5Wb.jpg)

**3. Solder kabel pada LED Strip. Pastikan gunakan warna yang sama untuk pad yang sama. Perhatikan tanda panah pada LED Strip!**

[ ![rgb-3](https://i.imgur.com/rvjyp2Wl.jpg) ](https://i.imgur.com/rvjyp2W.jpg)

**4. Solder kabel yang pendek pada J3.**

[ ![rgb-4](https://i.imgur.com/BDOneVAl.jpg) ](https://i.imgur.com/BDOneVA.jpg)

**5. Lepaskan pelindung lem di belakang LED Strip, dan letakkan LED Strip pada PCB.**

[ ![rgb-5](https://i.imgur.com/pEMBhXFl.jpg) ](https://i.imgur.com/pEMBhXF.jpg)

#### Case

**1. Pasang PCB dan plate pada case.**

[ ![case-1](https://i.imgur.com/CjE9CIpl.jpg) ](https://i.imgur.com/CjE9CIp.jpg)

**2. Pasang kaki karet pada bawah case untuk menghindari kontak langsung antara case dengan permukaan meja, mencegah baret.**

[ ![case-2](https://i.imgur.com/pkMCCWll.jpg) ](https://i.imgur.com/pkMCCWl.jpg)
[ ![case-3](https://i.imgur.com/2rcg1col.jpg) ](https://i.imgur.com/2rcg1co.jpg)

#### Penyelesaian

**1. Pasang keycaps dan knob.**

[ ![finish-1](https://i.imgur.com/G2h7n6Kl.jpg) ](https://i.imgur.com/G2h7n6K.jpg)

**2. Colokkan kabel micro USB pada Pro Micro dan Anda telah menyelesaikan perakitan Mixi Lite menggunakan langkah-langkah yang saya rekomendasikan, selamat!**

[ ![finish-2](https://i.imgur.com/btkncXzl.jpg) ](https://i.imgur.com/btkncXz.jpg)
