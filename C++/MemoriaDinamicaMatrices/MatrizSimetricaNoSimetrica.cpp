#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

void MatrizA(int** MA, int N);
void TranspuestaMatrizA(int** MA, int N);
void Verificando_Simetria(int** MA, int N);
int main() {
	srand(time(NULL));

	int n = 0;
	cout << "Digite la dimension de la matriz cuadrada:"; cin >> n;

	int** matrizA = new int* [n];
	for (int i = 0; i < n; i++) {
		matrizA[i] = new int[n];
	}

	cout << "Matriz A:" << endl;
	MatrizA(matrizA, n);
	cout << "Transpuesta de la matriz A:" << endl;
	TranspuestaMatrizA(matrizA, n);
	cout << endl;
	Verificando_Simetria(matrizA, n);

	for (int i = 0; i < n; i++) {
		delete[] matrizA[i];
	}
	delete[] matrizA;


	return 0;
}
void MatrizA(int** MA, int N) {

	for (int i = 0; i < N; i++ ) {
		for (int j = 0; j < N; j++) {
			MA[i][j] = 0 + rand() % 2;
			cout << setw(5) << MA[i][j] << setw(5);
		}
		cout << endl;
	}

	
}

void TranspuestaMatrizA(int** MA, int N) {

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << setw(5) << MA[j][i] << setw(5);
		}
		cout << endl;
	}
}

void Verificando_Simetria(int** MA, int N) {
	int cont = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (MA[i][j] == MA[j][i]) {
				cont++;
			}
		}
	}
	if (cont == N * N) {
		cout << "La matriz es simetrica" << endl;
	}
	else {
		cout << "La matriz no es simetrica" << endl;
	}
}
