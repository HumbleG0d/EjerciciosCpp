#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

const int FILA = 2;
const int COLUMNA = 2;

typedef float  Matriz[FILA][COLUMNA];

void MatrizA_y_Su_Simetrica(Matriz A,Matriz B);
void MatrizB_y_Su_Antisimetrica(Matriz A,Matriz C);
void Muestra_La_MatrizA(Matriz B, Matriz C, Matriz D);

int main() {

	srand(time(NULL));

	Matriz A = {};
	Matriz B = {};
	Matriz C = {};
	Matriz D = {};

	MatrizA_y_Su_Simetrica(A, B);
	MatrizB_y_Su_Antisimetrica(A, C);
	Muestra_La_MatrizA(B, C, D);

	return 0;
}
void MatrizA_y_Su_Simetrica(Matriz A,Matriz B) {
	cout << "Matriz A:" << endl;
	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			A[i][j] = 2 + rand() % 4;
			cout << setw(4) << A[i][j] << setw(4);
		}
		cout << endl;
	}
	cout << endl;
	cout << "Matriz simetrica de la Matriz A:" << endl;

	for (int i = 0; i <COLUMNA; i++) {
		for (int j = 0; j < FILA; j++) {
			cout << setw(4) << A[j][i] << setw(4);
		}
		cout << endl;
	}

	cout << "Matriz B  = 1/2(A+A^T)" << endl;

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			B[i][j] =  0.5*A[i][j] +0.5* A[j][i];
			cout << setw(4) << B[i][j] << setw(4);
		}
		cout << endl;
	}

}

void MatrizB_y_Su_Antisimetrica(Matriz A, Matriz C) {

	cout << "Matriz A:" << endl;

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			cout << setw(4) << A[i][j] << setw(4);
		}
		cout << endl;
	}

	cout << "Matriz antisimetrica  de la Matriz A:" << endl;

	for (int i = 0; i < COLUMNA; i++) {
		for (int j = 0; j < FILA; j++) {
			cout << setw(4) << -1 * A[j][i] << setw(4);
		}
		cout << endl;
	}

	cout << "La Matriz C=1/2(A-A^T)" << endl;

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			C[i][j] = 0.5 *A[i][j] - 0.5 * A[j][i];
			cout << setw(4) << C[i][j] << setw(4);
		}
		cout << endl;
	}

}
void Muestra_La_MatrizA(Matriz B, Matriz C, Matriz D) {

	cout << "La Matriz A=B+C :" << endl;

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			D[i][j] = C[i][j] + B[i][j];
			cout << setw(4) << D[i][j] << setw(4);
		}
		cout << endl;
	}

}
