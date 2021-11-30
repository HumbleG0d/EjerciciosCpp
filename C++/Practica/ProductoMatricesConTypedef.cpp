#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

const int FILA = 2;
const int COLUMNA = 2;

typedef int Matriz[FILA][COLUMNA];

void MatrizA(Matriz  A);
void MatrizB(Matriz B);
void MatrizC(Matriz C,Matriz A, Matriz B);


int main() {

	srand(time(NULL));


	Matriz A = {};
	Matriz B = {};
	Matriz C = {};

	cout << "La matriz A:" << endl;
	MatrizA(A);
	cout << "La matriz B:" << endl;
	MatrizB(B);
	cout << "El producto de la matriz A y B:" << endl;
	MatrizC(A, B, C);

	return 0;
}

void MatrizA(Matriz A) {

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			A[i][j] = 0 + rand() % 20;
			cout << setw(4) << A[i][j] << setw(4);
		}
		cout << endl;
	}
}

void MatrizB(Matriz B) {

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			B[i][j] = 0 + rand() % 20;
			cout << setw(4) << B[i][j] << setw(4);
		}
		cout << endl;
	}
}

void MatrizC(Matriz A,Matriz B,Matriz C) {


	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			C[i][j] = 0;
			for (int k = 0; k < 2; k++) {
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			cout << setw(4) << C[i][j] << setw(4);
		}
		cout << endl;
	}
}
