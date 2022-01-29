#include <iostream>
using namespace std;

void tambah(int a, int b){
	cout << "------ +" << endl;
	cout << " " << a + b << endl;
}

void kurang(int a, int b){
	cout << "------ -" << endl;
	cout << " " << a - b << endl;
}

void perkalian(int a, int b){
	cout << "------ *" << endl;
	cout << " " <<a * b << endl;
}

void pembagian(int a, int b){
	cout << "------ :" << endl;
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
		cout << "\nMasukkan Angka \n" << endl;
		cout << " " ;
		cin >> a;
		cout << " " ;
		cin >> b;
		tambah(a, b);
	}
	else if (pilihan == 2){
		cout << "\nMasukkan Angka \n" << endl;
		cout << " " ;
		cin >> a;
		cout << " " ;
		cin >> b;
		kurang(a, b);
	}
	else if (pilihan == 3){
		cout << "\nMasukkan Angka \n" << endl;
		cout << " " ;
		cin >> a;
		cout << " " ;
		cin >> b;
		perkalian(a, b);
	}
	else if (pilihan == 4){
		cout << "\nMasukkan Angka \n" << endl;
		cout << " " ;
		cin >> a;
		cout << " " ;
		cin >> b;
		pembagian(a, b);
	}
	else {
		cout << "Masukkan pilihan (1..4)" << endl;
	}

	return 0;

}
