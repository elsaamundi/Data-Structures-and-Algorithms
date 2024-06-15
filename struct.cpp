#include <iostream>
using namespace std;
struct Item {
  int id;
  string name; 
  int quantity;
  float price;
};
int main() {// function untuk input dan menampilkan barang 
  Item item_brng;

  cout << "Masukkan ID barang: ";
  cin >> item_brng.id;
	
  cout << "Masukkan nama barang: ";
  cin >> item_brng.name; // Read into fixed-size array

  cout << "Masukkan jumlah barang: ";
  cin >> item_brng.quantity;

  cout << "Masukkan harga barang: Rp ";
  cin >> item_brng.price;

  cout << "\nDetail Barang" << endl;
  cout << "ID: " << item_brng.id << endl;
  cout << "Nama: " << item_brng.name << endl;
  cout << "Jumlah: " << item_brng.quantity << endl;
  cout << "Harga: Rp " << item_brng.price << endl << endl;

  return 0;
}
// variabel -> id ,name,quantity,price ,item_brng

