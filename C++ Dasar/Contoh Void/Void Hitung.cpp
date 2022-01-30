#include <iostream>
using namespace std;

void tambah(int a, int b){
	cout << "--------- +" << endl;
	cout << "Hasil : " << a + b << endl;
}

void kurang(int a, int b){
	cout << "--------- -" << endl;
	cout << " " << a - b << endl;
}

void perkalian(int a, int b){
	cout << "--------- *" << endl;
	cout << " " <<a * b << endl;
}

void pembagian(int a, int b){
	cout << "--------- :" << endl;
	cout << " " << a / b << endl;
}

int main(){
	int a, b;
	int pilihan;
	
	cout << "Menu\n" << endl;
	cout << "1. Pertambahan " << endl;
	cout << "2. Pengurangan " << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian \n" << endl;
	cout << "Masukkan Pilihan : " ;
	cin >> pilihan;
	
	
	if (pilihan == 1){
		cout << "\nSilahkan Masukkan Angka \n" << endl;
		cout << "Angka : " ;
		cin >> a;
		cout << "Angka : " ;
		cin >> b;
		tambah(a, b);
	}
	else if (pilihan == 2){
		cout << "\nSilahkan Masukkan Angka \n" << endl;
		cout << "Angka : " ;
		cin >> a;
		cout << "Angka : " ;
		cin >> b;
		kurang(a, b);
	}
	else if (pilihan == 3){
		cout << "\nSilahkan Masukkan Angka \n" << endl;
		cout << "Angka : " ;
		cin >> a;
		cout << "Angka : " ;
		cin >> b;
		perkalian(a, b);
	}
	else if (pilihan == 4){
		cout << "\nSilahkan Masukkan Angka \n" << endl;
		cout << "Angka : " ;
		cin >> a;
		cout << "Angka : " ;
		cin >> b;
		pembagian(a, b);
	}
	else {
		cout << "Masukkan pilihan (1..4)" << endl;
	}

	return 0;

}
