#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

void GenerandoMatriz1(int** M, int n);
void MostrandoMatriz1(int** M, int n);
void GenerandoMatriz2(int** Ma, int n);
void MostrandoMatriz2(int** Ma, int n);
void SumandoMatriz1Matriz2(int** M, int** Ma, int n);

int main() {
	srand(time(NULL));
	int N = 0;
	cout << "Ingrese la dimension de las dos  matrices cuadradas:"; cin >> N;

	int** matriz1 = new int* [N];

	for (int i = 0; i < N; i++) {
		matriz1[i] = new int[N];
	}

	int** matriz2 = new int* [N];

	for (int p = 0; p < N; p++) {
		matriz2[p] = new int[N];
	}

	cout << "Matriz A:" << endl;
	GenerandoMatriz1(matriz1, N);
	MostrandoMatriz1(matriz1, N);
	cout << "Matriz B:" << endl;
	GenerandoMatriz2(matriz2, N);
	MostrandoMatriz2(matriz2, N);
	cout << "Matriz A+B:" << endl;
	SumandoMatriz1Matriz2(matriz1, matriz2, N);

	for (int i = 0; i < N; i++) {
		delete[] matriz1[i];
	}
	delete[] matriz1;

	for (int p = 0; p < N; p++) {
		delete[] matriz2[p];
	}
	delete[] matriz2;




	return 0;
}
void GenerandoMatriz1(int** M, int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			M[i][j] = 0 + rand() % 40;
		}
	}

}

void MostrandoMatriz1(int** M, int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << M[i][j] << setw(5);
		}
		cout << endl;
	}

}

void GenerandoMatriz2(int** Ma, int n) {

	for (int i= 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			Ma[i][j] = 0 + rand() % 40;
		}
	}

}

void MostrandoMatriz2(int** Ma, int n) {

	for (int i= 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << Ma[i][j] << setw(5);
		}
		cout << endl;
	}

}

void SumandoMatriz1Matriz2(int** M, int** Ma, int n) {

	for (int i = 0; i < n; i++) {
		for (int j= 0; j < n; j++) {
			cout << setw(5) << M[i][j] + Ma[i][j] << setw(5);
		}
		cout << endl;
	}
}

