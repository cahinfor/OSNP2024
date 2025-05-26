# Studi Kasus D: Kalkulator Pengubah Basis

## Deskripsi Cerita

Pak Dengklek memiliki sebuah kalkulator pengubah basis. Untuk menggunakan kalkulator ini, Pak Dengklek pada awalnya menuliskan sebuah bilangan bulat non-negatif X dalam basis 10. Pak Dengklek kemudian memerintahkan kalkulator tersebut untuk mengubah nilai X ke dalam basis B. Secara cepat, kalkulator tersebut akan menampilkan sebuah string Y <b>tanpa leading zeroes*</b> yang seharusnya merupakan nilai X dalam basis B.

Namun, sangat disayangkan bahwa kalkulator tersebut tidak dapat menampilkan digit selain '0' hingga '9'. Untuk digit di atas '9', kalkulator tersebut akan menuliskan nilai digit tersebut dalam basis 10 **tanpa leading zeroes**. Misalnya, digit 'A' akan dituliskan sebagai "10", digit 'B' akan dituliskan sebagai "11", dan seterusnya.

Sebagai contoh, Pak Dengklek pada awalnya menuliskan bilangan X = 123 456. Pak Dengklek kemudian memerintahkan kalkulator tersebut untuk mengubahnya ke dalam basis B = 16. Bilangan 123 456 dalam basis 16 seharusnya adalah "1E240", namun kalkulator tersebut malah akan menampilkan Y = "114240".

Pak Dengklek kemudian secara cermat mengamati bahwa bisa jadi akan ada banyak bilangan berbeda, yang jika diubah ke dalam suatu basis yang sama, akan menampilkan hasil yang sama pula. Misalnya, 737 856 dalam basis 16 juga akan ditampilkan sebagai "114240". Pun demikian 1 131 072 dalam basis 16 juga akan ditampilkan sebagai "114240".

Diberikan nilai B dan Y, tugas Anda adalah menghitung banyaknya X berbeda, sehingga apabila X diubah ke dalam basis B, maka kalkulator akan menampilkan hasil berupa string Y. Karena jawabannya bisa sangat besar, keluarkan jawabannya modulo 1 000 000 007.

*) Sebagai catatan, sebuah string tidak memiliki leading zeroes apabila digit pertama bukan '0' kecuali jika bilangan tersebut memang 0. Sebagai contoh, "42", "0", dan "1000" merupakan bilangan-bilangan tanpa leading zeroes.

## Soal Pemahaman

### Soal D1

Apabila Pak Dengklek memerintahkan kalkulatornya untuk mengubah nilai 15 015 ke dalam basis 13, maka string apa yang akan ditampilkan oleh kalkulator?

**Tuliskan jawaban dalam bentuk STRING tanpa tanda petik.**

### Soal D2

Asumsikan Pak Dengklek mengubah suatu bilangan ke dalam basis 14 dan kalkulator menampilkan hasil berupa string "123010". Dari 5 skenario berikut, manakah yang tidak mungkin?

<ol type="A">
   <li>Angka yang diubah ke dalam basis 14 oleh Pak Dengklek adalah 33 526</li>
   <li>Angka yang diubah ke dalam basis 14 oleh Pak Dengklek adalah 44 502</li>
   <li>Angka yang diubah ke dalam basis 14 oleh Pak Dengklek adalah 44 506</li>
   <li>Angka yang diubah ke dalam basis 14 oleh Pak Dengklek adalah 469 238</li>
   <li>Angka yang diubah ke dalam basis 14 oleh Pak Dengklek adalah 622 902</li>
</ol>

### Soal D3

Berapa banyak bilangan berbeda yang jika diubah ke dalam basis 16 maka kalkulator akan menampilkan hasil berupa string "71112016"?

**Tuliskan jawaban dalam bentuk ANGKA.**

<hr />

## Soal Pemrograman

Tulislah sebuah program dengan bahasa C/C++ sesuai deskripsi cerita dengan format dan batasan sebagai berikut. Perhatikan bahwa untuk setiap kasus uji berlaku ***time limit*** selama 2 detik dan ***memory limit*** sebanyak 256 MB.

## Format Masukan

Masukan diberikan dalam format berikut:
```text
B
Y
```

## Format Keluaran

Keluarkan sebuah baris berisi sebuah bilangan bulat yang menyatakan banyaknya X berbeda, sehingga apabila X diubah ke dalam basis B, maka kalkulator akan menampilkan hasil berupa string Y, modulo 1 000 000 007.

## Contoh Masukan dan Keluaran

| Contoh Masukan                                     | Contoh Keluaran |
|----------------------------------------------------|-----------------|
| 16<br/>114240                                      | 3               |
| 4 <br/> 114240                                     | 0               |
| 10 <br/> 0                                         | 1               |
| 10 <br/> 1001                                      | 1               |
| 1000000 <br/> 123456789123456789123456789123456789 | 649774399       |

## Penjelasan Contoh

Pada contoh pertama, terdapat 3 kemungkinan X berbeda, yakni 123 456, 737 856, dan 1 131 072; seperti yang telah dijelaskan pada deskripsi cerita.

Pada contoh kedua, tidak ada nilai X yang mungkin karena setiap bilangan yang diubah ke basis 4 pasti hanya memiliki digit 0, 1, 2, atau 3.

Pada contoh ketiga, hanya ada 1 kemungkinan X, yakni 0.

Pada contoh keempat, hanya ada 1 kemungkinan X, yakni 1001.

Pada contoh kelima, sebenarnya terdapat 26 649 774 581 kemungkinan X berbeda, namun perhatikan bahwa jawaban harus dalam modulo 1 000 000 007.

## Batasan

Untuk seluruh kasus uji berlaku:
* 2 ≤ B ≤ 1 000 000
* 1 ≤ |Y| ≤ 100 000, dengan |Y| menyatakan panjang dari string Y
* Y hanya terdiri dari digit-digit '0' hingga '9' dan tidak memiliki leading zeroes 

## Batasan Tambahan untuk Subsoal 1 (Mudah)

Pada subsoal ini, untuk seluruh kasus uji berlaku:
* B ≤ 16
* |Y| ≤ 6

## Batasan Tambahan untuk Subsoal 2 (Sulit)

Tidak ada batasan tambahan pada subsoal ini.