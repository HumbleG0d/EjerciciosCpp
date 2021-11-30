#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

const int LANZAMIENTO = 100;

const int CAPACIDAD = 6;

typedef int Arreglo[CAPACIDAD];

void LanzaminetoDeUnDado( Arreglo Numero);

void MostrandoArreglo(Arreglo Numero);

int main() {

	Arreglo Numero = {};

	LanzaminetoDeUnDado(Numero);
	MostrandoArreglo(Numero);

	return 0;
}

void LanzaminetoDeUnDado(Arreglo Numero) {

	srand(time(NULL));
	int N;
	int C1=0, C2=0, C3=0, C4=0, C5=0, C6=0;
	for (int i = 1; i <= 100; i++) {
		N = 1 + rand() % 6;
		if (N == 1) {
			C1++;
		}
		else if (N == 2) {
			C2++;
		}
		else if (N == 3) {
			C3++;
		}
		else if (N == 4) {
			C4++;
		}
		else if (N == 5) {
			C5++;
		}
		else if (N == 6) {
			C6++;
		}
	}
	
	for (int j = 0; j < CAPACIDAD; j++) {
		if (j == 0) {
			Numero[j] = C1;
		}
		else if (j == 1) {
			Numero[j] = C2;
		}
		else if (j == 2) {
			Numero[j] = C3;
		}
		else if (j == 3) {
			Numero[j] = C4;
		}
		else if (j == 4) {
			Numero[j] = C5;
		}
		else if (j == 5) {
			Numero[j] = C6;
		}

	}
}

void MostrandoArreglo(Arreglo Numero) {

	for (int j = 0; j < CAPACIDAD; j++) {
		cout << setw(4) << Numero[j] << setw(4);
	}
}
