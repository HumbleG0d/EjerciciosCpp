#include <iostream>
#include <iomanip>
using namespace std;

const int CAPACIDAD = 10;
void ordenamiento_rapido(int* P, int indice_inicial, int indice_final);
int separar(int* P, int indice_inicial, int indice_final);
void mostrar(int* P);

int main() {
	 int notas[CAPACIDAD] = { 19,13,20,17,12,10,16,19,18,20 };
	 ordenamiento_rapido(notas, 0, CAPACIDAD - 1);
	mostrar(notas);

}

void ordenamiento_rapido(int * P, int indice_inicial, int indice_final) {
	if (indice_inicial < indice_final) {
		int i_pivote = separar(P, indice_inicial, indice_final);
		ordenamiento_rapido(P, indice_inicial, i_pivote - 1);
		ordenamiento_rapido(P, i_pivote + 1, indice_final);

	}

}

int separar(int* P, int indice_inicial, int indice_final) {
	int pivote = P[indice_final];
	int i_aux = indice_inicial;
	int aux = 0; // variable auxiliar para hacer los intercambios
	for (int j = indice_inicial; j < indice_final; ++j) {
		if (P[j] < pivote) {                                 //Ordena de menor a mayor
			aux = P[i_aux];                                  //Para ordenar de mayor a menor cambiar arreglo[j]<pivote por
			P[i_aux] = P[j];                           //arreglo[j]>pivote
			P[j] = aux;
			++i_aux;

		}

	}
	aux = P[i_aux];
	P[i_aux] = P[indice_final];
	P[indice_final] = aux;
	return i_aux; // retornando el indice del pivote

}

void mostrar(int* P) {
	cout << "Notas ordenadas por ordenamiento rapido y usando punteros:" << endl;
	for (int j = 0; j < CAPACIDAD; ++j)
		cout << setw(4) << P[j];
	cout << endl;
}
