#include <iostream>
using namespace std;

int main() {// Function:
  
  // Menentukan jumlah elemen array
  int n;// n adalah variabel dengan tipe data int
  cout << "Masukkan jumlah elemen array: ";
  cin >> n;

  // Membuat array dinamis
  int* arr = new int[n]; // Variabel arr adalah pointer untuk menunjuk ke array dinamis

  // Mengisi elemen array
  for (int i = 0; i < n; i++) {
    cout << "Masukkan elemen ke-" << i + 1 << ": ";
    cin >> arr[i];
  }

  // Menampilkan elemen array
  cout << "Isi array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ","; // Menampilkan nilai elemen array
  }

  // Menghapus array dinamis
  delete[] arr;

  return 0;
}
 /* variabel -> n -> menyimpan jumlah elemen array
             -> arr -> pointer untuk menunjuk ke array dinamis
    
    function -> main */

