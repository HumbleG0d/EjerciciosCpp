#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

const int FILA = 2, COLUMNA = 2;
typedef int Matriz[FILA][COLUMNA];

void MatrizA(Matriz A, int a);
void MatrizB(Matriz B, int b);
void Suma_Matriz(Matriz C,Matriz A,Matriz B,int a,int b);

int main() {
	srand(time(NULL));
	Matriz A = {};
	Matriz B = {};
	Matriz C = {};
	int a1, b1;
	cout << "Digite un numero:"; cin >> a1;
	cout << "Digite un numero:"; cin >> b1;
	MatrizA(A, a1);
	cout << endl;
	MatrizB(B, b1);
	cout << endl;
	Suma_Matriz(C, A, B, a1, b1);



	return 0;
}
void MatrizA(Matriz A, int a) {
	cout << "La matriz A:" << endl;
	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			A[i][j] = 0 + rand() % 20;
			cout << setw(4) << A[i][j] << setw(4);
		}
		cout << endl;
	}
	cout << "La matriz aA:" << endl;
	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			
			cout << setw(4) << a*A[i][j] << setw(4);
		}
		cout << endl;
	}
}

void MatrizB(Matriz B, int b) {

	cout << "La matriz B:" << endl;
	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			B[i][j] = 0 + rand() % 20;
			cout << setw(4) << B[i][j] << setw(4);
		}
		cout << endl;
	}
	cout << "La matriz bB:" << endl;
	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {

			cout << setw(4) << b * B[i][j] << setw(4);
		}
		cout << endl;
	}

}

void Suma_Matriz(Matriz C, Matriz A, Matriz B, int a, int b) {

	cout << "Suma de las matrices A y B:" << endl;

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			C[i][j] = a * A[i][j] + b * B[i][j];
			cout << setw(4) << C[i][j] << setw(4);
		}
		cout << endl;
	}

}
