#include<iostream>
#include<time.h>

using namespace std;

const int CAPACIDAD = 100;
typedef int Notas[CAPACIDAD];

int main() {
	srand(time(NULL));
	Notas Nota;
	int CAPACIDAD2;
	
	cout << "Digite el tamaño del arreglo:"; cin >> CAPACIDAD2;

	for (int i = 0; i < CAPACIDAD2; i++) {
		Nota[i] = 0 + rand() % 20;
		cout << "Notas[" << i << "]:" << Nota[i] << endl;
	}

	int* Max = new int{ Nota[0] };

	for (int i = 0; i < CAPACIDAD; i++) {
		if (Nota[i] > * Max) {
			*Max= Nota[i];
		}
	}
	cout << "La maxima nota es:" << *Max;
	delete Max;
	return 0;
}
