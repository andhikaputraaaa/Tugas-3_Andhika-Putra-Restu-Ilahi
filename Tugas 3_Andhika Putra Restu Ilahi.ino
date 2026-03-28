// Definisi Pin Simpang Utara
const int U_M = 13; const int U_K = 12; const int U_H = 11;
// Definisi Pin Simpang Timur
const int T_M = 10; const int T_K = 9;  const int T_H = 8;
// Definisi Pin Simpang Selatan
const int S_M = 7;  const int S_K = 6;  const int S_H = 5;
// Definisi Pin Simpang Barat
const int B_M = 4;  const int B_K = 3;  const int B_H = 2;

void setup() {
  // Set semua pin sebagai OUTPUT
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
  
  // Kondisi Default: Semua Merah
  setSemuaMerah();
  delay(2000);
}

void loop() {
  // Urutan: Utara -> Timur -> Selatan -> Barat
  aktifkanSimpang(U_M, U_K, U_H);
  aktifkanSimpang(T_M, T_K, T_H);
  aktifkanSimpang(S_M, S_K, S_H);
  aktifkanSimpang(B_M, B_K, B_H);
}

// Fungsi untuk mengaktifkan satu simpang
void aktifkanSimpang(int pinM, int pinK, int pinH) {
  // 1. Lampu Hijau Menyala 5 detik
  digitalWrite(pinM, LOW);   // Merah mati
  digitalWrite(pinH, HIGH);  // Hijau nyala
  delay(5000);               // Tunggu 5 detik
  digitalWrite(pinH, LOW);   // Hijau mati

  // 2. Lampu Kuning Kedip 3 kali
  for (int i = 0; i < 3; i++) {
    digitalWrite(pinK, HIGH);
    delay(300);
    digitalWrite(pinK, LOW);
    delay(300);
  }

  // 3. Lampu Kuning Menyala diam 2 detik
  digitalWrite(pinK, HIGH);
  delay(2000);
  digitalWrite(pinK, LOW);

  // 4. Kembali ke Merah
  digitalWrite(pinM, HIGH);
}

// Fungsi pembantu agar semua kondisi awal merah
void setSemuaMerah() {
  digitalWrite(U_M, HIGH); digitalWrite(T_M, HIGH);
  digitalWrite(S_M, HIGH); digitalWrite(B_M, HIGH);
  
  digitalWrite(U_K, LOW);  digitalWrite(T_K, LOW);
  digitalWrite(S_K, LOW);  digitalWrite(B_K, LOW);
  
  digitalWrite(U_H, LOW);  digitalWrite(T_H, LOW);
  digitalWrite(S_H, LOW);  digitalWrite(B_H, LOW);
}