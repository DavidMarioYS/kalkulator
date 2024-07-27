#include <iostream>
using namespace std;

void showMenu() {
    cout << "Kalkulator Sederhana\n";
    cout << "Pilih operasi yang diinginkan:\n";
    cout << "1. Penjumlahan (+)\n";
    cout << "2. Pengurangan (-)\n";
    cout << "3. Perkalian (*)\n";
    cout << "4. Pembagian (/)\n";
    cout << "5. Keluar\n";
}

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        showMenu();
        cout << "Masukkan pilihan (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Keluar dari program.\n";
            break;
        }

        if (choice < 1 || choice > 5) {
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
            continue;
        }

        cout << "Masukkan angka pertama: ";
        cin >> num1;
        cout << "Masukkan angka kedua: ";
        cin >> num2;

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Hasil: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Hasil: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Hasil: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Hasil: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Kesalahan: Pembagian dengan nol tidak diperbolehkan.\n";
                }
                break;
        }

        cout << endl;
    }

    return 0;
}
