#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

const int FILA = 4;
const int COLUMNA = 4;

typedef int Matriz[FILA][COLUMNA];

void GenerandoMatriz(Matriz A);
void TranspuestaMatriz(Matriz A);


int main() {

	srand(time(NULL));

	Matriz A = {};

	cout << "La matriz A:" << endl;
	GenerandoMatriz(A);
	cout << "====================================================" << endl;
	cout << "La traspuesta de la matriz A:" << endl;
	TranspuestaMatriz(A);

	return 0;
}

void GenerandoMatriz(Matriz A) {

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			A[i][j] = 0 + rand() % 20;
			cout << setw(4) << A[i][j] << setw(4);
		}
		cout << endl;
	}
}

void TranspuestaMatriz(Matriz A) {

	for (int i = 0; i < COLUMNA; i++) {
		for (int j = 0; j < FILA; j++) {
			cout << setw(4) << A[j][i] << setw(4);
		}
		cout << endl;
	}
}
