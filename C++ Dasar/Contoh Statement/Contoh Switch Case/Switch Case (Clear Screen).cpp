#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
int pilihan;
    
    system("cls");
    cout << " " << endl;
    cout << "Menu :" << endl;
    cout << " " << endl;
    cout << "1. Contoh Ke Satu           " << endl;
    cout << "2. Contoh Ke Dua            " << endl;
    cout << "3. Contoh Ke Tiga           " << endl;
    cout << "4. Contoh Ke Empat	         " << endl;
    cout << " " << endl;
    cout << "Masukan Pilihan : "; 
    cin >> pilihan;
    switch (pilihan)
    {
        case 1: system("cls"); {
			cout << "Contoh Ke-1 Berhasil Dicoba" << endl;
       	    break;
    	}
		case 2: system("cls"); {
            cout << "Contoh Ke-2 Berhasil Dicoba" << endl;
            break;
       	}
      	case 3: system("cls"); {
        	cout << "Contoh Ke-3 Berhasil Dicoba" << endl;
            break;
        }
        case 4: system("cls"); {
        	cout << "Contoh Ke-4 Berhasil Dicoba" << endl;
        	break;
        }
    	default: system("cls"); {
            cout << "Masukkan Pilihan Dengan Benar" << endl;
            break;
        }
    }_getch();
 
 	return 0;
 
}
