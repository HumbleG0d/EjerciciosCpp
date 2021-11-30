#include<iostream>
using namespace std;

const int CAPACIDAD = 5;

int main() {

	int* Notas = new int[CAPACIDAD];

	for (int i = 0; i < CAPACIDAD; i++) {
		cout << "Nota[" << i << "]:"; cin >> Notas[i];
	}

	int min = 21, max = -1;
	float Promedio = 0;

	for (int i = 0; i < CAPACIDAD; i++) {
		Promedio = Promedio + Notas[i];
		if (Notas[i] < min) {
			min = Notas[i];
		}
		if (Notas[i] > max) {
			max = Notas[i];
		}
	}

	Promedio = Promedio / CAPACIDAD;

	cout << "La minima nota es:" << min << endl;
	cout << "La maxima nota es:" << max << endl;
	cout << "El promedio de las notas es:" << Promedio << endl;


	return 0;
}
