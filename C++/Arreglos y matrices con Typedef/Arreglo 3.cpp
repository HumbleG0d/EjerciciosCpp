#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;

const int TAMANIO = 10;

typedef  float Arreglo[TAMANIO];

void nota_maxima_minima(Arreglo notas);

int main() {

	
	Arreglo notas = {};

	nota_maxima_minima(notas);
	return 0;
}

void nota_maxima_minima(Arreglo notas) {

	srand(time(NULL));

	for (int i = 0; i < TAMANIO; i++) {
		notas[i] = 1 + rand() % 20;
		cout << setw(3) << notas[i] << setw(3);
	}
	cout << endl;
	int max = 0, min = 9999;

	for (int i = 0; i < TAMANIO; i++) {
		if (notas[i] > max) {
			max = notas[i];
		}
		if (notas[i] < min) {
			min = notas[i];
		}
	}
	cout << "La nota maxima es:" << max << endl;
	cout << "La nota minima es:" << min << endl;

}
