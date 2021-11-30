#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

const int FILA = 4;
const int COLUMNA = 4;

typedef int Matriz[FILA][COLUMNA];

void Digitar_valores(Matriz mat);

void Matriz_Cuadrada(Matriz mat);

int main() {

	Matriz mat;
	cout << "Los valores de la matriz son:" << endl;
	Digitar_valores(mat);

	cout << "La matriz es:" << endl;

	Matriz_Cuadrada(mat);
	return 0;
}

void Digitar_valores(Matriz mat) {
	srand(time(NULL));

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			mat[i][j] = 1 + rand() % 14;
			cout << mat[i][j]<<endl;
		}
	}

}


void Matriz_Cuadrada(Matriz mat) {

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			cout << setw(6) << mat[i][j] << setw(6);
		}
		cout << endl;
	}

}

