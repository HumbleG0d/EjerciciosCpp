#include<iostream>
using namespace std;

double PotenciaNumero(float x, int y);
int main() {
	float Base;
	int Exponente;
	cout << "Digite la Base:"; cin >> Base;
	cout << "Digite el Exponente:"; cin >> Exponente;
	cout << endl;
	cout << "La Potencia del numero es:" << PotenciaNumero(Base, Exponente);
	return 0;
}

double PotenciaNumero(float x, int y) {
	double Potencia=1.0;
	if (y > 0) {
		for (int i = 1; i <= y; i++) {
			Potencia = Potencia * x;
		}
		return Potencia;
	}
	else if (y < 0) {
		for (int i = 1; i <= -1*y; i++) {
			Potencia = Potencia * x;
		}
		return 1/Potencia;
	}
	else {
		return Potencia;
	}
	
}
