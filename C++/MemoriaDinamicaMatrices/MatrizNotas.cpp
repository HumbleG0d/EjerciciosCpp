#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

const float Fila = 6.0;

void MatrizNotas(int** MA, int C);
void PromediosAlumnos(int** MA, int C);

int main() {
	srand(time(NULL));
	int Columna = 0;
	cout << "Digite el numero de alumnos:"; cin >> Columna;

	int** matrizA = new int* [Fila];
	for (int i = 0; i < Fila; i++) {
		matrizA[i] = new int[Columna];
	}
	cout << "Matriz Notas" << endl;
	MatrizNotas(matrizA, Columna);
	cout << "Promedio de los " << Columna << " alumnos:" << endl;
	PromediosAlumnos(matrizA, Columna);

	for (int i = 0; i < Fila; i++) {
		delete[] matrizA[i];
	}
	delete[] matrizA;
	
	return 0;
}
void MatrizNotas(int** MA, int C) {

	for (int i = 0; i < Fila; i++) {
		for (int j = 0; j < C; j++) {
			MA[i][j] = 0 + rand() % 21;
		}
	}

	for (int i = 0; i < Fila; i++) {
		for (int j = 0; j < C; j++) {
			cout << setw(5) << MA[i][j] << setw(5);
		}
		cout << endl;
	}

}
void PromediosAlumnos(int** MA, int C) {

	for (int i = 0; i < C; i++) {
		int sum = 0;
		int min = 21;
		for (int j = 0; j < Fila; j++) {
			sum = sum + MA[j][i];
			if (MA[j][i] < min) {
				min = MA[j][i];
			}
		}
		float Promedio = (sum - min) / (Fila - 1);
		cout << "El promedio del " << i + 1 << " alumno es de " << setprecision(3) << Promedio << endl;
	 }

}
