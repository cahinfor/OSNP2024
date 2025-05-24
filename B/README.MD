# Studi Kasus B: Berbagi Banyak Candil

## Deskripsi Cerita

Pak Dengklek memiliki sekian ekor bebek. Pak Dengklek memberi tahu Anda bahwa ia memiliki **setidaknya** satu ekor bebek dan **paling banyak** B ekor bebek.

Pagi hari ini, Pak Dengklek telah membeli C butir jajanan candil untuk dibagikan ke bebek-bebeknya. Pak Dengklek ingin membagikan candil-candil tersebut **sebanyak mungkin** kepada bebek-bebeknya selama setiap bebeknya mendapatkan banyak butir candil yang **sama rata**. Setelah membagikan candil-candil tersebut, sisa candil akan dimakan oleh Pak Dengklek.

Pak Dengklek memberitahu Anda bahwa banyaknya candil yang akhirnya ia makan adalah D. Tugas Anda adalah menerka banyaknya bebek milik Pak Dengklek, dengan cara menghitung berapa banyak kemungkinan banyaknya bebek berbeda milik Pak Dengklek yang mungkin. Perhatikan bahwa jawaban bisa saja 0 dikarenakan adanya kekeliruan informasi yang diberikan oleh Pak Dengklek.

## Soal Pemahaman

### Soal B1

Asumsikan Pak Dengklek membeli 100 butir candil dan banyaknya candil yang akhirnya dimakan oleh Pak Dengklek adalah 10. Dari 5 skenario berikut, manakah yang sebenarnya **tidak mungkin**?

<ol type="A">
   <li>Pak Dengklek memiliki 9 ekor bebek</li>
   <li>Pak Dengklek memiliki 15 ekor bebek</li>
   <li>Pak Dengklek memiliki 18 ekor bebek</li>
   <li>Pak Dengklek memiliki 30 ekor bebek</li>
   <li>Pak Dengklek memiliki 45 ekor bebek</li>
</ol>

### Soal B2

Asumsikan Pak Dengklek memiliki paling banyak 100 ekor bebek. Jika Pak Dengklek membeli 20 butir candil dan banyaknya candil yang akhirnya dimakan oleh Pak Dengklek adalah 2, maka berapa banyak kemungkinan banyaknya bebek berbeda milik Pak Dengklek yang mungkin?

**Tuliskan jawaban dalam bentuk ANGKA.**

### Soal B3

**BENAR** atau **SALAH**: Banyaknya kemungkinan banyaknya bebek berbeda milik Pak Dengklek yang mungkin **pasti** dijamin kurang dari atau sama dengan banyaknya butir candil yang Pak Dengklek beli.

<hr/>

## Soal Pemrograman

Tulislah sebuah program dengan bahasa C/C++ sesuai deskripsi cerita dengan format dan batasan sebagai berikut. Perhatikan bahwa untuk setiap kasus uji berlaku **time limit** selama 2 detik dan **memory limit** sebanyak 256 MB.

### Format Masukan

Masukan diberikan dalam format berikut:

```text
B C D
```

### Format Keluaran

Keluarkan sebuah baris berisi sebuah bilangan bulat yang menyatakan banyaknya kemungkinan banyaknya bebek berbeda milik Pak Dengklek yang mungkin.

### Contoh Masukan dan Keluaran
| Contoh Masukan | Contoh Keluaran |
|----------------|-----------------|
| 100 13 3       | 2               |
| 9 9 0          | 3               |
| 77 42 42       | 35              |
| 7 42 42        | 0               |

### Penjelasan Contoh
Pada contoh pertama, hanya 2 dari 100 kemungkinan banyaknya bebek berbeda milik Pak Dengklek yang mungkin, yakni sebanyak 5 atau 10 ekor bebek.

Pada contoh kedua, ada 3 kemungkinan yang mungkin, yakni sebanyak 1, 3, atau 9 ekor bebek.

Pada contoh ketiga, ada 35 kemungkinan yang mungkin, yakni sebanyak 43, 44, hingga 77 ekor bebek.

Pada contoh keempat, berdasarkan penjelasan contoh ketiga, tidak ada kemungkinan yang mungkin.

### Batasan

Untuk seluruh kasus uji berlaku:
* 1 ≤ B, C ≤ 10<sup>12</sup>
* 0 ≤ D ≤ C

### Batasan Tambahan untuk Subsoal 1 (Mudah)

Subsoal ini hanya berisi satu buah kasus uji, yaitu sebagai berikut:

```text
25 8420 20
```

### Batasan Tambahan untuk Subsoal 2 (Sulit)

Tidak ada batasan tambahan pada subsoal ini.

### Peringatan

Untuk dapat menjawab pertanyaan ini dengan benar, Anda mungkin perlu menggunakan tipe data **long long** untuk dapat menyimpan data dengan nilai yang besar. Tipe data **int** saja mungkin tidak cukup!