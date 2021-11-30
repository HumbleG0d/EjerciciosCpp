#include<iostream>
#include<iomanip>
using namespace std;
const int Tamano= 30;
void Matriz(int Mat[Tamano][Tamano],int Fila,int Columna);
int main() {
	int M[Tamano][Tamano];
	int F,C;
	do {
		cout << "Digite el numero de filas de la matriz:"; cin >> F;
		cout << "Digite el numero de columnas de la matriz:"; cin >> C;
	} while (F <= 0 || C <= 0);
	Matriz(M, F, C);
	return 0;
}

void Matriz(int Mat[Tamano][Tamano], int Fila, int Columna) {
	cout << "Digite los valores de la matriz" << endl;
	for (int i = 0; i < Fila; i++) {
		for (int j = 0; j < Columna; j++) {
			cout << "[" << i << "]" << "[" << j << "]:"; cin >> Mat[i][j];
		}
	}
	cout << "La matriz:" << endl;
	for (int i = 0; i < Fila; i++) {
		for (int j = 0; j < Columna; j++) {
			cout <<setw(4)<< Mat[i][j]<<setw(3);
		}
		cout << endl;
	}
	int Filax, Columnax,Suma=0,Suma2=0,Suma3=0;
	do {
		cout << "Que numero de fila desea que se sumen sus elemntos:"; cin >> Filax;
	} while (Filax <= 0);
	cout << endl;
	if (Filax <= Fila) {
		for (int i = Filax-1; i <= Filax-1; i++) {
			for (int j = 0; j <Columna; j++) {
				Suma = Suma + Mat[i][j];
			}
		}
		cout << "La suma de los elementos de la fila es:" << Suma << endl;
	}
	else {
		cout << "Esta fila no existe" << endl;
	}
	do {
		cout << "Que numero de columna dese que se sumen sus elemtos:"; cin >> Columnax;
	} while (Columnax <= 0);
	cout << endl;
	if (Columnax <= Columna) {
		for (int i = 0; i < Fila; i++) {
			for (int j =Columnax-1; j <=Columnax-1; j++) {
				Suma2 = Suma2 + Mat[i][j];
			}
		}
		cout << "La suma de los elementos de la columna es:" << Suma2 << endl;
	}
	else {
		cout << "Esta columna no existe" << endl;
	}
	for (int i = 0; i < Fila; i++) {
		for (int j = 0; j < Columna; j++) {
			if (i == j) {
				Suma3 = Suma3 + Mat[i][i];
			}
		}
		cout << endl;
	}
	cout << "La suma de los elemntos de la diagonal es:" << Suma3 << endl;
}

