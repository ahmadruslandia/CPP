#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string MahasiswaNama, MahasiswaStambuk, MahasiswaKelas;
};

int main()
{
    int jumlah;
    Mahasiswa mas[1];
    cout << "Jumlah Mahasiswa : ";
    cin >> jumlah;
    for (int i = 0; i < jumlah; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cin.ignore(1, '\n');
        cout << "Masukkan Nama    : ";
        getline(cin, mas[i].MahasiswaNama);
        cout << "Masukkan Stambuk : ";
        cin >> mas[i].MahasiswaStambuk;
        cout << "Masukkan Kelas   : ";
        cin >> mas[i].MahasiswaKelas;
    }

    for (int i = 0; i < jumlah; i++) {
        cout << "Mahasiswa " << i + 1 << " : ";
        cout << mas[i].MahasiswaNama << "-" << mas[i].MahasiswaStambuk << "-" << mas[i].MahasiswaKelas << endl;
    }

    return 0;
} 

