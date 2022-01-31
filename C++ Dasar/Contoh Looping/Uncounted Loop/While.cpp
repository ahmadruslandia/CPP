#include <iostream>
using namespace std;

int main(){
	
	char ulang = 'y';
	int i = 0;
	
	while(ulang == 'y'){
	cout << " " << endl;
	cout << "Masukkan huruf y untuk contoh perulangan" << endl;
	cout << " " << endl;
	cout << "Masukkan huruf : ";
	cin >> ulang;
	i++;
	}
	
	cout << " " << endl;
	cout << "Selesai" << endl;
	
	return 0;
}
