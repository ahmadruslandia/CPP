#include <iostream>
#include <string>

using namespace std;

int main()
{
	string data1, data2;
	cout << "Login " << endl;
	cout << " " << endl;
	cout << "username : " ;
	cin >> data1;
	cout << "password : " ;
	cin >> data2;

	if (data1 == "arblog") {
		if (data2 == "belajar"){
			cout << " " << endl;
			cout << "anda berhasil mencoba" << endl;
		}
		else {
			cout << " " << endl;
			cout << "password salah" << endl; 
		}
	}
	else {
		cout << " " << endl;
		cout << "username anda salah" << endl;
	}

	return 0;
}
