# TP3 - Sistem Komputer

## Janji
Saya Varrell Rizky Irvanni Mahkota dengan NIM 2306245 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

---

## Diagram Kelas
![tp3 drawio](https://github.com/user-attachments/assets/554ecb7e-3275-42b5-b153-6f07f034d5ca)

---

## Penjelasan Konsep OOP yang Diimplementasikan

### 1. Inheritance (Pewarisan)
- **Single Inheritance**: 
  - Kelas `Komponen` sebagai base class untuk hampir semua komponen komputer (CPU, GPU, RAM, dll)
  - Kelas `Penyimpanan` mewarisi dari `Komponen` dan menjadi parent untuk `SSD` dan `HDD`
  
- **Hierarchical Inheritance**:
  - Kelas `Cooling` mewarisi dari `Komponen` dan menjadi parent untuk `Fan`
  - Kelas `Penyimpanan` sebagai parent untuk dua kelas: `SSD` dan `HDD`

- **Multiple Inheritance**:
  - Kelas `Motherboard` mewarisi dari `Komponen` dan `USBInterface`
  - Kelas `Fan` mewarisi dari `Cooling` dan `RGBInterface`

### 2. Encapsulation (Enkapsulasi)
- Semua atribut kelas dideklarasikan sebagai `private` atau `protected`
- Implementasi getter dan setter untuk mengontrol akses ke atribut
- Modifier access `protected` pada kelas parent untuk memungkinkan kelas turunan mengakses atribut

### 3. Polymorphism (Polimorfisme)
- Function overriding melalui metode `displayInfo()` yang diimplementasikan secara berbeda di setiap kelas
- Penggunaan keyword `virtual` pada metode di kelas dasar untuk memungkinkan dynamic binding
- Virtual destructor untuk memastikan deallocation yang tepat

### 4. Abstraction (Abstraksi)
- Interface `RGBInterface` dan `USBInterface` yang mendefinisikan properti dan metode umum
- Kelas dasar abstrak (`Komponen`) yang menyediakan struktur umum untuk komponen komputer
- Penyembunyian detail implementasi melalui encapsulation

### 5. Composition (Komposisi)
- Kelas `Komputer` menggunakan komposisi untuk memiliki objek-objek komponen (CPU, GPU, RAM, dll)
- Kelas `Casing` memiliki objek-objek `Fan` (has-a relationship)
- Komposisi memungkinkan pembuatan objek kompleks dari objek yang lebih sederhana

---

## Penjelasan Alur Program

1. **Inisialisasi Komponen**:
   - Program membuat objek untuk setiap komponen komputer (CPU, Motherboard, RAM, dll)
   - Setiap komponen diinisialisasi dengan spesifikasi tertentu (merk, nama, harga, dan atribut khusus)

2. **Pembuatan Komputer**:
   - Objek `Komputer` dibuat dengan menggunakan komponen yang telah diinisialisasi
   - Komponen disusun bersama untuk membentuk sistem komputer yang lengkap

3. **Perhitungan Harga Total**:
   - Metode `hitungTotalHarga()` menghitung total harga dari semua komponen
   - Harga diakumulasikan dari CPU, Motherboard, GPU, dan komponen lainnya

4. **Menampilkan Informasi**:
   - Metode `displayInfo()` dipanggil untuk menampilkan informasi detail tentang komputer dan komponennya
   - Informasi ditampilkan secara terstruktur dengan detail untuk setiap komponen

---

## Penjelasan Atribut dan Methods

### Kelas `Komponen` (Base Class)
- **Atribut**:
  - `merk`: Merk komponen (string)
  - `nama`: Nama model komponen (string)
  - `harga`: Harga komponen (int)
- **Methods**:
  - Konstruktor (default & parameterized)
  - Getter & Setter untuk semua atribut
  - `displayInfo()`: Menampilkan informasi dasar komponen (virtual)

### Kelas `Cpu`
- **Atribut**:
  - `jumlahCore`: Jumlah core CPU (int)
  - `kecepatanGHz`: Kecepatan CPU dalam GHz (float)
  - `socket`: Tipe socket CPU (string)
- **Methods**:
  - Konstruktor mewarisi `Komponen`
  - Getter & Setter untuk atribut khusus
  - Override `displayInfo()` untuk menampilkan informasi CPU

### Kelas `GPU`
- **Atribut**:
  - `vram`: Kapasitas VRAM dalam GB (int)
  - `cudaCores`: Jumlah CUDA cores (int)
  - `memoryType`: Tipe memori GPU (string)
- **Methods**:
  - Override `displayInfo()` untuk menampilkan informasi GPU

### Kelas `Penyimpanan` (Base Class untuk Storage)
- **Atribut**:
  - `kapasitasGB`: Kapasitas dalam GB (int)
  - `interface`: Tipe interface (string)
- **Methods**:
  - Override `displayInfo()` untuk menampilkan informasi penyimpanan

### Kelas `SSD` dan `HDD`
- **Atribut Spesifik SSD**:
  - `readSpeed`: Kecepatan baca dalam MB/s (int)
  - `writeSpeed`: Kecepatan tulis dalam MB/s (int)
- **Atribut Spesifik HDD**:
  - `rpm`: Rotasi per menit (int)
  - `cacheSize`: Ukuran cache dalam MB (int)

### Interface `RGBInterface` dan `USBInterface`
- **Atribut RGBInterface**:
  - `hasRGB`: Status RGB (boolean)
  - `rgbType`: Tipe RGB (string)
- **Atribut USBInterface**:
  - `usb2Ports`: Jumlah port USB 2.0 (int)
  - `usb3Ports`: Jumlah port USB 3.0 (int)

### Kelas `Komputer`
- **Atribut**:
  - Komponen individu (CPU, GPU, RAM, dll)
  - `totalHarga`: Total harga sistem (int)
- **Methods**:
  - `hitungTotalHarga()`: Menghitung total harga semua komponen
  - `displayInfo()`: Menampilkan informasi lengkap sistem
