#include <iostream>
#include <iomanip>
#include<time.h>
using namespace std;


void ordenamiento_rapido(int* arreglo, int indice_inicial, int indice_final);
int separar(int* arreglo, int indice_inicial, int indice_final);
void mostrar(int* arreglo,int CAP);

int main() {
	srand(time(NULL));
	int CAPACIDAD = 0;
	int* Notas = nullptr;

	cout << "Digite la cantidad de notas:"; cin >> CAPACIDAD;
	cout << endl;
	Notas = new int[CAPACIDAD];

	cout << "Generando Notas" << endl;
	for (int i = 0; i < CAPACIDAD; i++) {
		Notas[i] = 0 + rand() % 21;
		cout << "Nota[" << i << "]:" << Notas[i] << endl;
	}


	ordenamiento_rapido(Notas, 0, CAPACIDAD - 1);
	mostrar(Notas,CAPACIDAD);

}

void ordenamiento_rapido(int* arreglo, int indice_inicial, int indice_final) {
	if (indice_inicial < indice_final) {
		int i_pivote = separar(arreglo, indice_inicial, indice_final);
		ordenamiento_rapido(arreglo, indice_inicial, i_pivote - 1);
		ordenamiento_rapido(arreglo, i_pivote + 1, indice_final);

	}

}

int separar(int*arreglo, int indice_inicial, int indice_final) {
	int pivote = arreglo[indice_final];
	int i_aux = indice_inicial;
	int aux = 0; // variable auxiliar para hacer los intercambios
	for (int j = indice_inicial; j < indice_final; ++j) {
		if (arreglo[j] < pivote) {                                 //Ordena de menor a mayor
			aux = arreglo[i_aux];                                  //Para ordenar de mayor a menor cambiar arreglo[j]<pivote por
			arreglo[i_aux] = arreglo[j];                           //arreglo[j]>pivote
			arreglo[j] = aux;
			++i_aux;

		}

	}
	aux = arreglo[i_aux];
	arreglo[i_aux] = arreglo[indice_final];
	arreglo[indice_final] = aux;
	return i_aux; // retornando el indice del pivote

}

void mostrar(int* arreglo,int CAP) {
	cout << "Notas ordenadas segun el metodo de ordenamiento rapido:" << endl;
	for (int i = 0; i < CAP; i++)
		cout << setw(4) << arreglo[i];
	cout << endl;

}
