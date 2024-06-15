#include <iostream>
#include <string>
using namespace std;
// Deklarasi struktur untuk menyimpan informasi buku
struct Buku {
  string judul;
  string pengarang;
  int tahunTerbit;
};

 // Fungsi: Mencetak informasi buku
  void cetakInformasiBuku(Buku* buku) {
    cout << "Judul: " << buku->judul << endl;
    cout << "Pengarang: " << buku->pengarang << endl;
    cout << "Tahun Terbit: " << buku->tahunTerbit << endl;
  }

  // Fungsi: Memodifikasi informasi buku melalui pointer
  void modifikasiBuku(Buku* buku) {
    buku->judul = "Lord of the Rings";
    buku->pengarang = "J.R.R. Tolkien";
    buku->tahunTerbit = 1954;
  }

int main() {
  // Deklarasi dan inisialisasi variabel bertipe struct Buku
  Buku buku1 = {"Harry Potter", "J.K. Rowling", 1997}; // Variabel

  // Deklarasi pointer yang menunjuk ke variabel bertipe struct Buku
  Buku* ptrBuku = &buku1; // Variabel

  // Fungsi: Menjalankan program
  cout << "Informasi buku sebelum dimodifikasi: " << endl;
  cetakInformasiBuku(ptrBuku); // Memanggil fungsi

  modifikasiBuku(ptrBuku); // Memanggil fungsi

  cout << "\nInformasi buku setelah dimodifikasi: " << endl;
  cetakInformasiBuku(ptrBuku); // Memanggil fungsi

  return 0;
}

