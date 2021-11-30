#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

void MatrizA(int** MA, int n);
void MatrizB(int** MB, int n);
void MatrizAB(int** MA, int** MB,int**MC, int n);

int main() {
	srand(time(NULL));

	int N = 0;
	cout << "Digite la dimesion de las matrices:"; cin >> N;

	int** matrizA = new int* [N];
	for (int i = 0; i < N; i++) {
		matrizA[i] = new int[N];
	}

	int** matrizB = new int* [N];
	for (int p = 0; p < N; p++) {
		matrizB[p] = new int[N];
	}
    
	int** matrizC = new int* [N];
	for (int k = 0; k < N; k++) {
		matrizC[k] = new int[N];
	}
	cout << "Matriz A:" << endl;
	MatrizA(matrizA, N);
	cout <<"Matriz B:"<< endl;
	MatrizB(matrizB, N);
	cout <<"Matriz A.B: "<< endl;
	MatrizAB(matrizA, matrizB, matrizC, N);

	for (int i = 0; i < N; i++) {
		delete[] matrizA[i];
	}
	delete[] matrizA;

	for (int p = 0; p < N; p++) {
		delete[] matrizB[p];
	}
	delete[] matrizB;

	for (int k = 0; k < N; k++) {
		delete[] matrizC[k];
	}
	delete[] matrizC;


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

void MatrizAB(int** MA, int** MB, int** MC, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			MC[i][j] = 0;
			for (int k = 0; k < n; k++) {
				MC[i][j] = MC[i][j] + MA[i][k] * MB[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << MC[i][j] << setw(5);
		}
		cout << endl;
	}

}
