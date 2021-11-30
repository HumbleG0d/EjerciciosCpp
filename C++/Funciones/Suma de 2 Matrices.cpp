#include<iostream>
#include<iomanip>
using namespace std;

const int Tamano = 10;
void Llenar_Matriz1(int Matriz1[Tamano][Tamano],int F,int C);
void Llenar_Matriz2(int Matriz2[Tamano][Tamano], int F, int C);
void Suma_Matriz(int Matriz1[Tamano][Tamano], int Matriz2[Tamano][Tamano], int Matriz3[Tamano][Tamano],int F,int C);
int main() {
	int Fila, Columna,Fila2,Columna2;
	int M1[Tamano][Tamano];
	int M2[Tamano][Tamano];
	int M3[Tamano][Tamano];
	do {
		cout << "Digite el numero de filas de la primera matriz:"; cin >> Fila;
		cout << "Digite el numero de columnas de la primera matriz:"; cin >> Columna;
	} while (Fila <= 0 || Columna <= 0);
	cout << endl;
	 Llenar_Matriz1(M1, Fila, Columna);
	 cout << endl;
	 do {
		 cout << "Digite el numero de filas de la seguna matriz:"; cin >> Fila2;
		 cout << "Digite el numero de columnas de la segunda matriz:"; cin >> Columna2;
	 } while (Fila2 <= 0 || Columna2 <= 0);
	 cout << endl;
	 Llenar_Matriz2(M2, Fila2, Columna2);
	 cout << endl;
	 cout << "La suma de las dos matrices es:" << endl;
	  Suma_Matriz(M1, M2, M3, Fila, Columna);
	return 0;
}

void Llenar_Matriz1(int Matriz1[Tamano][Tamano], int F, int C) {
	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout << "[" << i << "]" << "[" << j << "]:"; cin >> Matriz1[i][j];
		}
	}
	cout<<"La primera matriz es:"<<endl;
		for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout << setw(3) << Matriz1[i][j] << setw(3);	
		}
		cout << endl;
	}
}

void Llenar_Matriz2(int Matriz2[Tamano][Tamano], int F, int C) {
	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout << "[" << i << "]" << "[" << j << "]:"; cin >> Matriz2[i][j];
		}
	}
	cout<<"La segunda matriz es:"<<endl;
	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout <<setw(3)<< Matriz2[i][j]<<setw(3);
		}
		cout << endl;
	}
}

void Suma_Matriz(int Matriz1[Tamano][Tamano], int Matriz2[Tamano][Tamano], int Matriz3[Tamano][Tamano], int F, int C) {
	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout << setw(3) << Matriz1[i][j]+Matriz2[i][j] << setw(3);
		}
		cout << endl;
	}
}



