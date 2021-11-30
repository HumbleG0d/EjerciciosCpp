#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;
const int Filas = 7;
void MatrizVenta(int** MV, int C);
void Tienda_con_mayor_Plumones(int** MV, int C,int*Mv);
void DiaConMayorVentas(int** MV, int C, int* Mv1);
void MontoPorDia(int** MV, int C,int*Mv2);
int main() {
	srand(time(NULL));

	int Columnas = 0;
	cout << "Digite el numero de tiendas:"; cin >> Columnas;

	int** matrizV = new int* [Filas];
	for (int i = 0; i < Filas; i++) {
		matrizV[i] = new int[Columnas];
	}
	int* Mv = nullptr;
	Mv = new int[Columnas];
	
	int* Mv1 = nullptr;
	Mv1 = new int[Columnas];

	int* Mv2 = nullptr;
	Mv2 = new int[Columnas];

	cout << "Matriz Venta:" << endl;
	MatrizVenta(matrizV, Columnas);
	cout << endl;
	Tienda_con_mayor_Plumones(matrizV, Columnas, Mv);
	cout << endl;
	DiaConMayorVentas(matrizV, Columnas, Mv1);
	cout << endl;
	MontoPorDia(matrizV, Columnas, Mv2);
	cout << endl;

	for (int i = 0; i < Filas; i++) {
		delete[] matrizV[i];
	}
	delete[] matrizV;
	delete[] Mv;
	delete[] Mv1;
	delete[]Mv2;

	return 0;
}
void MatrizVenta(int** MV, int C) {

	for (int i = 0; i < Filas; i++) {
		for (int j = 0; j < C; j++) {
			MV[i][j] = 1 + rand() % 4;
		}
	}

	for (int i = 0; i < Filas; i++) {
		for (int j = 0; j < C; j++) {
			cout << setw(5) << MV[i][j] << setw(5);
		}
		cout << endl;
	}
}
void Tienda_con_mayor_Plumones(int** MV, int C,int*Mv) {
	
	for (int i = 0; i < C; i++) {
		Mv[i] = 0;
		for (int j = 0; j < Filas; j++) {
			Mv[i] = Mv[i] + MV[j][i];
		}
	}
	cout << "Numero de plumones vendidos por tienda:" << endl;
	for (int i = 0; i < C; i++) {
		cout << setw(3) << Mv[i] << setw(3);
	}
	cout << endl;
	int max = 0;
	for (int i = 0; i < C; i++) {
		if (Mv[i] > max) {
			max = Mv[i];
		}
		if (i == C - 1) {
			for (int j = 0; j < C; j++) {
				if (max == Mv[j]) {
					cout << "La tienda numero " << j+1 << " vendio mas plumones";
				}
			}
		}
	}
}
void DiaConMayorVentas(int** MV, int C, int* Mv1) {

	for (int i = 0; i < Filas; i++) {
		Mv1[i] = 0;
		for (int j = 0; j < C; j++) {
			Mv1[i] = Mv1[i] + MV[i][j];
		}
	}
	cout << "Ventas por dia:" << endl;
	for (int i = 0; i < Filas; i++) {
		cout << setw(3) << Mv1[i] << setw(3);
	}
	cout << endl;
	int max = 0;
	for (int i = 0; i < Filas; i++) {
		if (Mv1[i] > max) {
			max = Mv1[i];
		}
		if (i == Filas - 1) {
			for (int j = 0; j < Filas; j++) {
				if (max == Mv1[j]) {
					switch (j+1) {
					case 1:
						cout << "El dia lunes hubo mayor venta" << endl;
						break;
					case 2:
						cout << "El dia martes hubo mayor venta" << endl;
						break;
					case 3:
						cout << "El dia miercoles hubo mayor venta" << endl;
						break;
					case 4:
						cout << "El dia juves hubo mayor venta" << endl;
						break;
					case 5:
						cout << "El dia viernes hubo mayor venta" << endl;
						break;
					case 6:
						cout << "El dia sabado hubo mayor venta" << endl;
						break;
					case 7:
						cout << "El dia domingo hubo mayor venta" << endl;
					}
				}
			}
		}
	}
}
void MontoPorDia(int** MV, int C,int* Mv2) {
	
	for (int i = 0; i < Filas; i++) {
		int cont = 2;
		Mv2[i] = 0;
		for (int j = 0; j < C; j++) {
			Mv2[i] = Mv2[i] + cont * MV[i][j];
			cont = cont + 2;
		}
	}

	cout << "Ganacia por dias:" << endl;
	for (int i = 0; i < Filas; i++) {
		cout << setw(10) << Mv2[i] << setw(10);
	}
	cout << endl;

	for (int i =0 ; i < Filas; i++) {
		if (i == 0) {
			cout << "El dia lunes se gano " << Mv2[i] << " soles" << endl;
		}
		else if (i == 1) {
			cout << "El dia martes se gano " << Mv2[i] << " soles" << endl;
		}
		else if (i == 2) {
			cout << "El dia miercoles se gano " << Mv2[i] << " soles" << endl;
		}
		else if (i == 3) {
			cout << "El dia jueves se gano " << Mv2[i] << " soles" << endl;
		}
		else if (i == 4) {
			cout << "El dia viernes se gano " << Mv2[i] << " soles" << endl;
		}
		else if (i == 5) {
			cout << "El dia sabodo se gano " << Mv2[i] << " soles" << endl;
		}
		else if (i == 6) {
			cout << "El dia domingo se gano " << Mv2[i] << " soles" << endl;
		}
		
	}

}
