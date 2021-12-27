#include <iostream>
using namespace std;

void tambah(int a, int b){
	
	cout << "Hasil : " << a + b << endl;
}

void kurang(int a, int b){

	cout << "Hasil : " << a - b << endl;
}

void perkalian(int a, int b){
	
	cout << "Hasil : " << a * b << endl;
}

void pembagian(int a, int b){
	
	cout << "Hasil : " << a / b << endl;
}

int main(){
	int a, b;
	int i;
	
	cout << "1. Pertambahan " << endl;
	cout << "2. Pengurangan " << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian \n" << endl;
	cout << "Masukkan Pilihan : " ;
	cin >> i;
	
	
	if (i == 1){
		cout << " " << endl;
		cout << "Masukkan Angka : " ; cin >> a;
		cout << "Masukkan Angka : " ; cin >> b;
		tambah(a, b);
	}
	else if (i == 2){
		cout << " " << endl;
		cout << "Masukkan Angka : " ; cin >> a;
		cout << "Masukkan Angka : " ; cin >> b;
		kurang(a, b);
	}
	else if (i == 3){
		cout << " " << endl;
		cout << "Masukkan Angka : " ; cin >> a;
		cout << "Masukkan Angka : " ; cin >> b;
		perkalian(a, b);
	}
	else if (i == 4){
		cout << " " << endl;
		cout << "Masukkan Angka : " ; cin >> a;
		cout << "Masukkan Angka : " ; cin >> b;
		pembagian(a, b);
	}
	else {
		cout << "Masukkan pilihan (1..4)" << endl;
	}

	return 0;
}
