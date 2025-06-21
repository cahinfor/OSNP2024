# Studi Kasus F: Maju Tak Papan

## Deskripsi Cerita

Pak Dengklek memiliki papan berukuran N baris dan M kolom. Setiap baris dinomori dari 1 hingga N dari atas ke bawah dan setiap kolom dinomori dari 1 hingga M dari kiri ke kanan. Petak (X, Y) menyatakan petak pada baris ke-X dan kolom ke-Y. Pak Dengklek akan mengisi setiap petak pada papan tersebut dengan angka 1 hingga N × M sedemikian sehingga masing-masing angka akan muncul tepat satu kali pada papan.

Sebuah robot bebek akan mulai pada petak (1, 1). Pada setiap waktu, robot tersebut akan membandingkan petak tepat di kanannya dengan petak tepat di bawahnya. Robot kemudian akan berpindah ke petak yang memiliki angka yang **lebih besar**. Jika robot berada pada baris terakhir (baris ke-N), maka ia secara otomatis hanya akan bergerak ke kanan. Jika robot berada pada kolom terakhir (kolom ke-M), maka ia secara otomatis hanya akan bergerak ke bawah. Robot akan berhenti pada petak (N, M).

Angka-angka pada seluruh petak yang dikunjungi oleh robot bebek (termasuk petak (1, 1) dan petak (N, M)) akan dijumlahkan. Pak Dengklek kemudian akan memberi hadiah kepada bebek-bebeknya permen sebanyak jumlah ini.

Karena Pak Dengklek tidak ingin bebek-bebeknya makan terlalu banyak permen, tugas Anda adalah membantu Pak Dengklek untuk menentukan jumlah terkecil yang mungkin apabila Pak Dengklek mengisi setiap petak pada papannya dengan angka 1 hingga N × M secara optimal.

## Soal Pemahaman

### Soal F1

Asumsikan papan Pak Dengklek berukuran 3 baris dan 4 kolom dan Pak Dengklek mengisi papan tersebut dengan konfigurasi angka-angka seperti berikut ini.

|    |    |   |    |
|----|----|---|----|
| 4  | 6  | 1 | 10 |
| 3  | 5  | 8 | 9  |
| 12 | 11 | 2 | 7  |


Berapa jumlah angka-angka pada petak-petak yang akan dikunjungi oleh robot bebek?

**Tuliskan jawaban dalam bentuk ANGKA.**

### Soal F2

Apabila papan Pak Dengklek berukuran 5 baris dan 2 kolom, berapa jumlah terkecil yang mungkin apabila Pak Dengklek mengisi setiap petak pada papan dengan angka 1 hingga 10 secara optimal?

**Tuliskan jawaban dalam bentuk ANGKA.**

### Soal F3

Apabila papan Pak Dengklek berukuran 3 baris dan 3 kolom, berapa jumlah terkecil yang mungkin apabila Pak Dengklek mengisi setiap petak pada papan dengan angka 1 hingga 9 secara optimal?

**Tuliskan jawaban dalam bentuk ANGKA.**

<hr />

## Soal Pemrograman

Tulislah sebuah program dengan bahasa C/C++ sesuai deskripsi cerita dengan format dan batasan sebagai berikut. Perhatikan bahwa untuk setiap kasus uji berlaku ***time limit*** selama 2 detik dan ***memory limit*** sebanyak 256 MB.

## Format Masukan

Masukan diberikan dalam format berikut:

```
N M
```

## Format Keluaran

Keluarkan sebuah baris berisi sebuah bilangan bulat yang menyatakan jumlah terkecil yang mungkin apabila Pak Dengklek mengisi setiap petak pada papannya dengan angka 1 hingga N × M secara optimal.

## Contoh Masukan dan Keluaran

| Contoh Masukan | Contoh Keluaran |
|----------------|-----------------|
| 2 3            | 11              |
| 1 1            | 1               |

## Penjelasan Contoh

Pada contoh pertama, salah satu konfigurasi pengisian yang optimal adalah sebagai berikut.

|    |    |   |
|----|----|---|
| 2  | 4  | 6 | 
| 5  | 3  | 1 |

Robot bebek akan berjalan sebagai berikut:

- Robot mulai pada petak (1, 1) yang berisi angka 2. 
- Antara petak kanan (1, 2) yang berisi angka 4 dan petak bawah (2, 1) yang berisi angka 5, petak bawah memiliki angka yang lebih besar, sehingga robot akan bergerak ke bawah. 
- Karena robot berada pada baris terakhir, robot secara otomatis akan bergerak ke kanan ke petak (2, 2) yang berisi angka 3. 
- Karena robot berada pada baris terakhir, robot secara otomatis akan bergerak ke kanan ke petak (2, 3) yang berisi angka 1. 
- Karena robot berada pada petak (N, M), maka robot akan bergenti bergerak.
- Salah satu cara Pak Dengklek meminimalkan total rasa ketidakpuasan yakni dengan memberi gulali dengan tingkat kemanisan 50 kepada bebek ke-1, ke-3, ke-5, ke-6, dan ke-8; 30 kepada grup bebek ke2 dan ke-7, serta 40 kepada bebek ke-4. Dapat dihitung bahwa total rasa ketidakpuasan adalah 150.

Jumlah angka-angka pada petak-petak yang dikunjungi oleh robot adalah 2+5+3+1 = 11.

Pada contoh kedua, hanya ada 1 kemungkinan konfigurasi pengisian yakni satu petak berisi angka 1.

## Batasan

Untuk seluruh kasus uji berlaku:
* 1 ≤ N, M ≤ 1000

## Batasan Tambahan untuk Subsoal 1 (Mudah)

Pada subsoal ini, untuk seluruh kasus uji berlaku:
* N ≤ 2

## Batasan Tambahan untuk Subsoal 2 (Sulit)

Tidak ada batasan tambahan pada subsoal ini.
