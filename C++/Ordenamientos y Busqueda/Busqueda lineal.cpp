#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;

const int CAPACIDAD = 10;
typedef int Arreglo[CAPACIDAD];
bool busqueda_lineal(Arreglo arreglo, int valor_a_buscar);
void generando_arreglo(Arreglo arreglo, int valor_a_buscar);
int main() {
	Arreglo notas = {};
	int nota = 19;

	generando_arreglo(notas, nota);
	cout << endl;
	
	if (busqueda_lineal(notas, nota) == true) {
		cout << "La nota fue encontrada";
	}
	else {
		cout << "La nota no fue encontrada";
	}

}
void generando_arreglo(Arreglo arreglo, int valor_a_buscar) {

	srand(time(NULL));

	for (int i = 0; i < CAPACIDAD; i++) {
		arreglo[i] = 0 + rand() % 21;
		cout << setw(3) << arreglo[i] << setw(3);
	}

}
bool busqueda_lineal(Arreglo arreglo, int valor_a_buscar) {
	for (int i = 0; i < CAPACIDAD; i++) {
		if (arreglo[i] == valor_a_buscar) {
			return true;
		}
	}
	
}
