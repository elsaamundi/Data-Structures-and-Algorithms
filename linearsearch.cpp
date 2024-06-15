#include <iostream>
#include <vector> // Menggunakan vector untuk array dinamis
using namespace std;

// Fungsi untuk melakukan linear search
int linearSearch(const vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Mengembalikan indeks elemen yang ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika elemen tidak ditemukan
}

// Fungsi utama
int main() {
    vector<int> arr; // Deklarasi array dinamis menggunakan vector
    int size, element, target;

    // Input ukuran array
    cout << "Masukkan ukuran : ";
    cin >> size;

    // Input elemen array
    cout << "Masukkan angka : ";
    for (int i = 0; i < size; ++i) {
        cin >> element;
        arr.push_back(element); // Menambahkan elemen ke dalam vector
    }

    // Input elemen yang akan dicari
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> target;

    // Melakukan pencarian linear
    int result = linearSearch(arr, target);

    // Menampilkan hasil pencarian
    if (result != -1) {
        cout << "Elemen ditemukan di indeks " << result << "." << endl;
    } else {
        cout << "Elemen tidak ditemukan dalam array." << endl;
    }

    return 0;
}

