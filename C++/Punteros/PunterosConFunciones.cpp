#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;

const int CAPACIDAD = 10;
bool Busqueda_Lineal(int* notas, int nota);

int main() {
	srand(time(NULL));

	int notas[CAPACIDAD];
	int nota = 15;

	for (int i = 0; i < CAPACIDAD; i++) {
		notas[i] = 0 + rand() % 20;
		cout << setw(3) << notas[i] << setw(3);
	}
	cout << endl;


	if (Busqueda_Lineal(notas, nota) == true) {
		cout << "La nota " << nota << " fue encontrada en el arreglo" << endl;
	}
	else {
		cout << "La nota " << nota << " no fue encontrada en el arreglo" << endl;
	}

	return 0;
}

bool Busqueda_Lineal(int* notas, int nota) {

	for (int i = 0; i < CAPACIDAD; i++) {
		if (notas[i] == nota) {
			return true;
		}
	}
}
