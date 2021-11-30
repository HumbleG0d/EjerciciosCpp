#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;

const int CAPACIDAD = 10;

void GenerarNotasAleatroias(int* notas);


int main() {
	srand(time(NULL));
	int notas[CAPACIDAD];

	GenerarNotasAleatroias(notas);

	return 0;
}

void GenerarNotasAleatroias(int* notas) {

	for (int i = 0; i < CAPACIDAD; i++) {
		notas[i] = 0 + rand() % 19;
		if (notas[i] >= 10) {
			cout << notas[i] << "--->" << notas + i << endl;
		}
		else {
			cout << notas[i] << endl;
		}
	}
}
