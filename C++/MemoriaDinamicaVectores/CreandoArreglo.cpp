#include<iostream>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int*Notas=nullptr;
	int CAPACIDAD=0;

	cout << "Digite el tamaño del arreglo:"; cin >> CAPACIDAD;

	Notas = new int[CAPACIDAD];

	for (int i = 0; i < CAPACIDAD; i++) {
		Notas[i] = 0 + rand() % 21;
		cout << "Notas[" << i << "]:" << Notas[i] << endl;
	}
	delete[] Notas; //Nunca OLvidar el delete Por favor xdddd

	return 0;
}
