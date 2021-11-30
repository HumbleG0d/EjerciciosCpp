#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

void generando_matriz(int** M, int F, int C);
void mostrando_matriz(int** M, int F, int C);

int main() {
	srand(time(NULL));
	int Fila = 0, Columna = 0;

	cout << "Digite el numero de filas de la matriz:"; cin >> Fila;
	cout << "Digite el numero de columnas de la matriz:"; cin >> Columna;

	int** matriz = new int* [Fila];   //Asignando espacio para el arreglo de direcciones.

	for (int i = 0; i < Fila; i++) {
		matriz[i] = new int [Columna];  //Asignando espacio para cada fila e inicializando el arreglo de direcciones.
	}

	generando_matriz(matriz, Fila, Columna);
	cout << endl;
	mostrando_matriz(matriz, Fila, Columna);
     
	for (int i = 0; i < Fila; i++) {
		delete[] matriz[i];  //Liberando espacio asignado para cada fila.
	}
	delete[] matriz;  //Liberando espacio asignado para la matriz de direcciones.

	return 0;
}
void generando_matriz(int** M, int F, int C) {

	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			M[i][j] = 0 + rand() % 21;
		}
	}

}

void mostrando_matriz(int** M, int F, int C) {

	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout << setw(4) << M[i][j] << setw(4);
		}
		cout << endl;
	}

}

