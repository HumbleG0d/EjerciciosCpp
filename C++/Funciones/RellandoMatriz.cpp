#include<iostream>
#include<iomanip>
using namespace std;

const int Tamano = 20;
void Llenar_Matriz(double Mat[Tamano][Tamano], int F, int C);

int main() {
	int Fila, Columna;
	double M[Tamano][Tamano];
	do {
		cout << "Digite el numero de filas:"; cin >> Fila;
		cout << "Digite el numero de columnas:"; cin >> Columna;
	} while (Fila <= 0 || Columna <= 0);
	Llenar_Matriz(M, Fila, Columna);
	return 0;
}
void Llenar_Matriz(double Mat[Tamano][Tamano], int F, int C) {
	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout << "[" << i <<"]"<< "[" << j << "]:"; cin >> Mat[i][j];
		}
	}
	cout<<"La matriz es:"<<endl;
		for (int i = 0; i < F; i++) {
		      for (int j = 0; j < C; j++) {
			     cout <<setw(3)<< Mat[i][j]<<setw(3);
		}
		cout << endl;
	}
}


