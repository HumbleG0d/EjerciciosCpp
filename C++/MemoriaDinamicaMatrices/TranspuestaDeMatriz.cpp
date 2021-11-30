#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

void MatrizA(int** MA, int N, int M);
void TranspuestaMatrizA(int** MA, int N, int M);
int main() {
	srand(time(NULL));
	int n = 0, m = 0;
	cout << "ingrese el tamaño de la fila de la matriz:"; cin >> n;
	cout << "ingrese el tamaño de la columna de la matriz:"; cin >> m;
	cout << endl;
	int** matrizA = new int* [n];
	for (int i = 0; i < n; i++) {
		matrizA[i] = new int[m];
	}
	cout << "Matriz A:" << endl;
	MatrizA(matrizA, n, m);
	cout << "Traspuesta de la matriz A:" << endl;
	TranspuestaMatrizA(matrizA, n, m);

	for (int i = 0; i < n; i++) {
		delete[] matrizA[i];
	}
	delete[] matrizA;

	return 0;
}
void MatrizA(int** MA, int N, int M) {

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			MA[i][j] = 0 + rand() % 40;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << setw(5) << MA[i][j] << setw(5);
		}
		cout << endl;
	}
  
}

void TranspuestaMatrizA(int** MA, int N, int M) {

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << setw(5) << MA[j][i] << setw(5);
		}
		cout << endl;
	}

}
