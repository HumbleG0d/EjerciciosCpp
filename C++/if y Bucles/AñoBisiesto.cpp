#include<iostream>
using namespace std;

void AnioBisiesto();
int main() {
	 AnioBisiesto();
	return 0;
}

void AnioBisiesto() {
	int anio;
	do {
		cout << "Digite el año:"; cin >> anio;
	} while (anio <= 0);

	if (anio % 4 == 0&& anio % 100 != 0 || anio % 400 == 0) {
		cout << "El año es bisiesto" << endl;
	}
	else {
		cout << "El año no es bisiesto" << endl;
	}
}
