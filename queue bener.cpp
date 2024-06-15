#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
  // Deklarasi queue untuk menyimpan nomor plat mobil
  queue<string> antrianMobil;

  // Fungsi: Menyambut pengguna dan meminta input nomor plat
  cout << "Selamat datang di gerbang tol!" << endl;
  cout << "Masukkan nomor plat mobil (ketik 'selesai' untuk mengakhiri):" << endl;

  string nomorPlat;
  while (true) {
    // Fungsi: Meminta input nomor plat mobil
    cout << "Masukkan nomor plat mobil: ";
    cin >> nomorPlat;

    // Fungsi: Memeriksa apakah input ingin mengakhiri program
    if (nomorPlat == "selesai") {
      break;
    }

    // Fungsi: Menambahkan nomor plat ke dalam queue
    antrianMobil.push(nomorPlat);
  }

  // Fungsi: Memeriksa apakah queue kosong
  if (antrianMobil.empty()) {
    cout << "Tidak ada mobil yang masuk antrian." << endl;
  } else {
    // Fungsi: Mencetak daftar mobil di antrian
    cout << "Mobil-mobil di antrian:" << endl;
    while (!antrianMobil.empty()) {
      cout << antrianMobil.front() << endl;
      antrianMobil.pop();
    }
  }

  // Mengucapkan terima kasih kepada pengguna
  cout << "Terima kasih atas kerjasamanya!" << endl;

  return 0;
}

