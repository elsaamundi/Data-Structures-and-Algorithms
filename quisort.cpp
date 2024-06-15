#include <iostream>
#include <vector>

using namespace std;

void swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] > pivot) { 
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void quickInput(vector<int>& arr, int size) {
    cout << "==Masukkan " << size << " Angka==\n";
    for (int i = 0; i < size; i++) {
        cout << "angka ke-" << i + 1 << ": ";
        cin >> arr[i];
    }
}

int main() {
    int n;
    cout << "Masukkan Angka: ";
    cin >> n;

    vector<int> arr(n);
    quickInput(arr, n);
    quickSort(arr, 0, n - 1);

    cout << "Quick Sorting (descending): \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    cout << "\n";

    return 0;
}

