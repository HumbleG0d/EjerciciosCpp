#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

void MatrizA(int** MA, int n);
void MatrizB(int** MB, int n);
void MatrizMixta(int** MA, int** MB, int n,int a,int b);


int main() {
	srand(time(NULL));
	int N = 0, a = 0, b = 0;
	cout << "Ingrese la dimesion de las matrices:"; cin >> N;
	cout << "Ingrese el valor de a:"; cin >> a;
	cout << "ingrese el valr de b:"; cin >> b;

	int** matrizA = new int* [N];

	for (int i = 0; i < N; i++) {
		matrizA[i] = new int[N];
	}

	int** matrizB = new int* [N];

	for (int p = 0; p < N; p++) {
		matrizB[p] = new int[N];
	}

	cout << "Matriz A:" << endl;
	MatrizA(matrizA, N);
	cout << "Matriz B:" << endl;
	MatrizB(matrizB, N);
	cout << "Matriz aA+bB:" << endl;
	MatrizMixta(matrizA, matrizB, N, a, b);

	for (int i = 0; i < N; i++) {
		delete[] matrizA[i];
	}
	delete[]matrizA;

	for (int p = 0; p < N; p++) {
		delete[] matrizB[p];
	}
	delete[]matrizB;

	return 0;
}
void MatrizA(int** MA, int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			MA[i][j] = 0 + rand() % 40;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << MA[i][j] << setw(5);
		}
		cout << endl;
	}
	
}
void MatrizB(int** MB, int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			MB[i][j] = 0 + rand() % 40;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << MB[i][j] << setw(5);
		}
		cout << endl;
	}


}
void MatrizMixta(int** MA, int** MB, int n, int a, int b) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << a * MA[i][j] + b * MB[i][j] << setw(5);
		}
		cout << endl;
	}

}
