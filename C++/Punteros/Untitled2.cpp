#include<iostream>
#include<iomanip>
using namespace std;


const int SAZE = 3;

int main() {


	char numeros[SAZE][SAZE] = { {'1','2','3'},
						 {'4','5','6'},
						 {'7','8','9'} };


	for (int i = 0; i < SAZE; i++) {
		for (int j = 0; i < SAZE; j++) {
			cout << setw(4) << numeros[i][j] << setw(4);
		}
		cout << endl;
	}



	return 0;
}
