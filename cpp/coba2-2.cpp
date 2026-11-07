#include <iostream>
using namespace std;

int main() {
    // --- 1. DEKLARASI & INISIALISASI VARIABEL ---
    // Mendeklarasikan variabel bertipe integer secara eksplisit
    int panjang = 10;
    int lebar = 5;
    int luas = 0;

    // --- 2. EKSPRESI & OPERATOR ---
    // Ekspresi menggunakan operator aritmatika '*' untuk mengalikan 
    // nilai dari variabel 'panjang' dan 'lebar'
    luas = panjang * lebar;

    // Menampilkan hasil ekspresi
    cout << "Luas persegi panjang adalah: " << luas << endl;

    return 0;
}