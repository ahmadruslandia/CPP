#include <iostream>

using namespace std;

int main()
{
	int pil;
	cout << "Menu :\n" << endl;
	cout << "Masukan Angka : 1 Contoh If" << endl;
	cout << "Masukan Angka : 2 Contoh Else If" << endl;
	cout << "Masukan Angka Selain 1 dan 2 Untuk Contoh Else\n" << endl;
	cout << "Silahkan Masukan Angka : ";
	cin >> pil;

	if (pil == 1) {
		cout << "\nini Adalah Contoh If" << endl;
	}
	else if (pil == 2) {
		cout << "\nini Adalah Contoh Else If" << endl;
	}
	else {
		cout << "\nini Adalah Contoh Else" << endl;
	}

	return 0;
}
