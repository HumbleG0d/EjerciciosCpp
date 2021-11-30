#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

const int FILA = 7;
const int COLUMNA = 3;

typedef int Matriz[FILA][COLUMNA];

void Matriz_Venta(Matriz A);

int main() {

	srand(time(NULL));

	Matriz A = {};
	Matriz_Venta(A);
	return 0;

}

void Matriz_Venta(Matriz A) {

	int sum1, sum2, sum3;
	cout << "La matriz venta es:" << endl;
	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			A[i][j] = 3 + rand() % 6;
			cout << setw(4) << A[i][j] << setw(4);
		}
		cout << endl;
	}

	int max = 0;

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			if (j == 0) {
				sum1 = 8 * A[i][j];
			}
			else if (j == 1) {
				sum2 = 9 * A[i][j];
			}
			else if (j == 2) {
				sum3 = 10 * A[i][j];
			}
		}
		cout << endl;
		cout << "El " << i + 1 << " dia se obtuvo un monto de:" << sum1 + sum2 + sum3 << endl;
	}
	int s1 = 0, s2 = 0, s3 = 0;
	for (int j = 0; j< COLUMNA; j++) {
		for (int i = 0; i< FILA; i++) {
			if (j == 0) {
				s1 = s1 + A[i][j];
			}
			else if (j == 1) {
				s2=s2+A[i][j];
			}
			else if (j == 2) {
				s3=s3+A[i][j];
			}
		}
	}
	
	cout << "El monto de A es de :" << 8*s1 << endl;
	cout << "El monto de B es de:" << 9*s2 << endl;
	cout << "El monto de C es de:" << 10*s3 << endl;
}
