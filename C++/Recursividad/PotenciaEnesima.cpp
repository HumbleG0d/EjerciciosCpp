#include<iostream>
using namespace std;

int Potencia(int x, int y);
int main() {
	int Base, Exponente;
	cout << "Digite la base:"; cin >> Base;
	do {
		cout << "Digite el exponte:"; cin >> Exponente;
	} while (Exponente < 0);
	cout << endl;
	cout << "El resultado es:" << Potencia(Base, Exponente);
	return 0;
}
int Potencia(int x, int y) {
	if (y == 0) {
		return 1;
	}
	else {
		x = x * Potencia(x,y - 1);
		return x;
	}
}

