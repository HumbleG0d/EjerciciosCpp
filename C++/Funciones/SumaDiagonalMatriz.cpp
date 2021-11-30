#include<iostream>
#include<iomanip>
using namespace std;

const int Tamano = 20;
void LlenarMostrar_Matriz(int Matriz1[Tamano][Tamano], int F, int C);
void SumaDiagonal(int Matriz1[Tamano][Tamano], int F, int C);
int main() {
	int Fila, Columna;
	int M[Tamano][Tamano];
	do {
		cout << "Digite el numero de filas de la matriz:"; cin >> Fila;
		cout << "Digite el numero de columnas de la matriz:"; cin >> Columna;
	} while (Fila <= 0 || Columna <= 0);
	LlenarMostrar_Matriz(M, Fila, Columna);
	SumaDiagonal(M, Fila, Columna);

	return 0;
}
void LlenarMostrar_Matriz(int Matriz1[Tamano][Tamano], int F, int C) {
	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout << "[" << i << "]" << "[" << j << "]:"; cin >> Matriz1[i][j];
		}
	}
	cout << "La matriz es:" << endl;
	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout << setw(3) << Matriz1[i][j] << setw(3);
		}
		cout << endl;
	}
}
void SumaDiagonal(int Matriz1[Tamano][Tamano], int F, int C) {
	int Suma = 0;
	for (int i = 0; i < F; i++) {
		Suma = Suma + Matriz1[i][i];
	}
	cout << "La suma de los elementos de la diagonal principal es:" << Suma << endl;
}


