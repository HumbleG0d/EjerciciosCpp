#include<iostream>

using namespace std;

const int CAPACIDAD = 5;


int main() {

	int* Notas = new int[CAPACIDAD];

	for (int i = 0; i < CAPACIDAD; i++) {
		cout << "Notas[" << i << "]:"; cin >> Notas[i];
	}
	
	int min = 21, max = -1;

	for (int i = 0; i < CAPACIDAD; i++) {
		if (Notas[i] < min) {
			min = Notas[i];
		}
		if (Notas[i] > max) {
			max = Notas[i];
		}
	}
	cout << "La maxima nota es:" << max << endl;
	cout << "La minima nota es:" << min << endl;

	delete[] Notas;

	return 0;
}

