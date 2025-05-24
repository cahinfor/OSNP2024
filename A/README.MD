# Studi Kasus A: String Cantik OSN

## Deskripsi Cerita

Selamat kepada Anda yang telah lolos ke OSN-P Informatika 2024! Pak Dengklek ingin menyelamati dan juga menyemangati Anda dengan membuatkan Anda sebuah **string cantik OSN**.

Sebuah string dikatakan string cantik OSN jika dan hanya jika memenuhi 2 persyaratan berikut:
1. Memiliki panjang **minimal** 3 huruf.
2. Setiap 3 huruf yang berurutan harus terdiri dari **tepat** 1 huruf 'O', 1 huruf 'S', dan 1 huruf 'N'.

Pada awalnya, Pak Dengklek memiliki sebuah string awal S. Pak Dengklek boleh menghapus beberapa huruf (**mungkin saja nol**) dari S dan tetap mempertahankan urutan huruf-huruf yang tidak dihapus. Pak Dengklek ingin string akhir setelah penghapusan tersebut adalah sebuah string cantik OSN, yang kemudian akan diberikan kepada Anda.

Carilah panjang string cantik OSN terpanjang yang mungkin Anda terima! Perlu diperhatikan bahwa bisa jadi Pak Dengklek tidak dapat membuatkan Anda sebuah string cantik OSN dari string awal S.

## Soal Pemahaman

### Soal A1

Manakah dari 5 pilihan string berikut yang **bukan** merupakan string cantik OSN? 
<ol type="A">
   <li>NSO</li>
   <li>SNOS</li>
   <li>SONSO</li>
   <li>ONSONS</li>
   <li>NOSNOSO</li>
</ol>

### Soal A2

Ada berapa banyak string berbeda dengan panjang 100 huruf yang juga merupakan string cantik OSN?

**Tuliskan jawaban dalam bentuk ANGKA.**

### Soal A3

**BENAR** atau **SALAH**: Diberikan string awal berupa "CONTOHSTRINGUNTUKSOALBENARATAUSALAH", Pak Dengklek dapat membuatkan Anda string cantik OSN berupa “OSNOSN” dari string awal tersebut.

<hr />

## Soal Pemrograman

Tulislah sebuah program dengan bahasa C/C++ sesuai deskripsi cerita dengan format dan batasan sebagai berikut. Perhatikan bahwa untuk setiap kasus uji berlaku ***time limit*** selama 2 detik dan ***memory limit*** sebanyak 256 MB.

## Format Masukan

Masukan diberikan dalam format berikut:
```text
S
```

## Format Keluaran

Keluarkan sebuah baris berisi sebuah bilangan bulat yang menyatakan panjang string cantik OSN terpanjang yang mungkin Anda terima. Jika Pak Dengklek tidak dapat membuatkan Anda sebuah string cantik OSN dari string awal S, keluarkan -1.

## Contoh Masukan dan Keluaran

| Contoh Masukan | Contoh Keluaran |
|----------------|-----------------|
| OSN            | 3               |
| NASIONAL       | 4               |
| INFORMATIKA    | -1              |
| OSNNSONO       | 5               |

## Penjelasan Contoh

Pada contoh pertama, string awal sudah merupakan string cantik OSN sehingga merupakan string  cantik OSN terpanjang yang mungin Anda terima.

Pada contoh kedua, Pak Dengklek dapat menghapus huruf ke-2, ke-4, ke-7, dan ke-8 sehingga string akhir setelah penghapusan adalah “NSON” yang merupakan sebuah string cantik OSN.

Pada contoh ketiga, Pak Dengklek tidak dapat membuatkan Anda sebuah string cantik OSN karena string tersebut tidak memiliki huruf ‘S’.

Pada contoh keempat, Pak Dengklek dapat menghapus huruf ke-2, ke-3, dan ke-8 sehingga string akhir setelah penghapusan adalah “ONSON” yang merupakan sebuah string cantik OSN.

## Batasan

Untuk seluruh kasus uji berlaku:
* 1 ≤ |S| ≤ 100 000, dengan |S| menyatakan panjang dari string S
* S hanya terdiri dari huruf-huruf kapital 'A' hingga 'Z'

## Batasan Tambahan untuk Subsoal 1 (Mudah)

Subsoal ini hanya berisi satu buah kasus uji, yaitu sebagai berikut:
```text
OLIMPIADESAINSNASIONALTINGKATPROVINSI
```

## Batasan Tambahan untuk Subsoal 2 (Sulit)

Tidak ada batasan tambahan pada subsoal ini.