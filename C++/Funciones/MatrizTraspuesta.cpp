#include<iostream>
#include<iomanip>
using namespace std;

const int Tamano = 20;
void Llenar_Matriz(int Matriz1[Tamano][Tamano], int F, int C);

int main() {
	int Fila, Columna;
	int M[Tamano][Tamano];
	do {
		cout << "Digite el numero de filas de la matriz:"; cin >> Fila;
		cout << "Digite el numero de columnas de la matriz:"; cin >> Columna;
	} while (Fila <= 0 || Columna <= 0);
	cout << endl;
	Llenar_Matriz(M, Fila, Columna);
	

	return 0;
}
void Llenar_Matriz(int Matriz1[Tamano][Tamano], int F, int C){
	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout << "[" << i << "]" << "[" << j << "]:"; cin >> Matriz1[i][j];
		}
	}
	cout<<"La matriz es:"<<endl;
		for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout << setw(3) << Matriz1[i][j] << setw(3);
		}
		cout << endl;
	}
	cout<<"La matriz TRASPUESTA:"<<endl;
		for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout << setw(3) << Matriz1[j][i] << setw(3);
		}
		cout << endl;
	}
}


