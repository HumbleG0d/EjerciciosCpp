#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

const int FILA = 6;
const int COLUMNA = 3;

typedef int Matriz[FILA][COLUMNA];

void Matriz_Notas(Matriz A);

int main() {

	srand(time(NULL));

	Matriz A = {};


	Matriz_Notas(A);

	return 0;
}

void Matriz_Notas(Matriz A) {
	int min = 999,min1=999,min2=999;
	float Sum = 0.0, Sum1 = 0.0, Sum2 = 0.0, Promedio;
	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			A[i][j] = 0 + rand() % 20;
			cout << setw(3) << A[i][j] << setw(4);
			if (A[i][j] < min) {
				min = A[i][j];
			}
		}
		cout << endl;
	}

	for (int j = 0; j< COLUMNA; j++) {
		for (int i = 0; i < FILA; i++) {
			if (j == 0) {
				if (A[i][j] < min) {
					min = A[i][j];
				}
				Sum = Sum + A[i][j];
			}
			else if (j == 1) {
				if (A[i][j] < min1) {
					min1 = A[i][j];
				}
				Sum1 = Sum1 + A[i][j];
			}
			else if (j == 2) {
				if (A[i][j] < min2) {
					min2 = A[i][j];
				}
				Sum2 = Sum2 + A[i][j];
			}
		}
	}
	
	cout << "El promedio para el primer estudiante es:" << (Sum - min) / 5 << endl;
	cout << "El promedio para el segundo estduainte es:" << (Sum1 - min1) / 5 << endl;
	cout << "El promedio para el tercer estudiante es:" << (Sum2 - min2) / 5 << endl;
	


}
