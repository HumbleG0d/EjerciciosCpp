#include<iostream>
#include<iomanip>
using namespace std;

const int CAPACIDAD = 5, UMBRAL = 10;

typedef int Arreglo[CAPACIDAD];

void mostrar_nota(Arreglo nota);


int main() {

	Arreglo Nota = { 20,9,8,12,16 };

	mostrar_nota(Nota);
	return 0;
}

void mostrar_nota(Arreglo nota) {

	cout << "Las notas aprobadas son:" << endl;

	for (int i = 0; i < CAPACIDAD; i++) {
		if (nota[i] > 10) {
			cout << setw(3) << nota[i] << setw(3);
		}
	}

}
