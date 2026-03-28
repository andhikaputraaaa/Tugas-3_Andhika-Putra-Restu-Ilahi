# 🚦 Penerapan Kendali GPIO pada Traffic Light 4 Arah

Proyek ini adalah simulasi sistem kendali lampu lalu lintas empat sisi menggunakan **Arduino Uno**. Dibuat untuk memenuhi tugas mata kuliah **Pemrograman Sistem Tertanam**, proyek ini mendemonstrasikan logika kontrol output digital (GPIO) dan modularisasi fungsi pada mikrokontroler.

---

## 🛠️ Komponen yang Digunakan
* **1x** Arduino Uno R3
* **1x** Breadboard
* **4x** LED Merah
* **4x** LED Kuning
* **4x** LED Hijau
* **12x** Resistor 220Ω
* Kabel Jumper

---

## 📋 Spesifikasi Sistem
Sistem bekerja secara otomatis dengan aturan sebagai berikut:
1. **Urutan Jalur:** Berputar searah jarum jam (Utara → Timur → Selatan → Barat).
2. **Kondisi Default:** Semua lampu Merah selama 2 detik saat pertama kali dijalankan.
3. **Logika Lampu:**
   - **Lampu Hijau:** Menyala selama **5 detik**.
   - **Lampu Kuning:** Berkedip **3 kali** (efek transisi), lalu menyala statis selama **2 detik**.
   - **Lampu Merah:** Kembali menyala segera setelah fase kuning berakhir.
4. **Keamanan:** Sistem memastikan tidak ada dua sisi yang hijau secara bersamaan.

---

## 🔌 Konfigurasi Pin (Wiring)

| Simpang | LED Merah | LED Kuning | LED Hijau |
| :--- | :---: | :---: | :---: |
| **Utara (U)** | Pin 13 | Pin 12 | Pin 11 |
| **Timur (T)** | Pin 10 | Pin 9 | Pin 8 |
| **Selatan (S)** | Pin 7 | Pin 6 | Pin 5 |
| **Barat (B)** | Pin 4 | Pin 3 | Pin 2 |

---

## 🚀 Cara Menjalankan
1. Buka link simulasi Tinkercad di bawah ini.
2. Klik tombol **"Start Simulation"**.
3. Amati urutan lampu yang dimulai dari kondisi semua merah (standby) sebelum memulai siklus hijau pertama di sisi Utara.

🔗 **[Klik di sini untuk melihat Simulasi di Tinkercad](https://www.tinkercad.com/things/gWjCNlTl8Oz-traffic-light?sharecode=smOt-6K5hyKa7Ure-cfGT3N5obM4jT96aujBPUKiXqI)**

---

## 📸 Dokumentasi Rangkaian
<img width="701" alt="image" src="https://github.com/user-attachments/assets/3dd75a15-8cf5-4763-85a0-0549e3450090" />

---

## 👨‍💻 Penulis
**Andhika Putra Restu Ilahi** - *H1D023089*
