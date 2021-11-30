#include<iostream>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int n;

	cout << "Cuantas notas desea generar:"; cin >> n;

	int* Notas = new int[n];

	for (int i = 0; i < n; i++) {
		Notas[i] = 0 + rand() % 21;
		cout << "Notas[" << i << "]:" << Notas[i] << endl;
	}

	cout << "Notas aprobadas:" << endl;
	int cont = 0;
	for (int i = 0; i < n; i++) {

		if (Notas[i] >= 10) {
			cont++;
			cout << Notas[i] << endl;
		}
	}
	cout << "El numero de notas aprobadas es de:" << cont << endl;
	delete[] Notas;
}
