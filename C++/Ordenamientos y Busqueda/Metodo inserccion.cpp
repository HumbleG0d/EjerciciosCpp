#include<iostream>
#include<iomanip>
using namespace std;

const int TAMANIO = 8;
typedef int Arreglo[TAMANIO];

void ordenamiento_inserccion(Arreglo numeros);

void mostrar(Arreglo numeros);

int main() {

	Arreglo numeros = { 1,2,5,7,20,13,14,15 };
	ordenamiento_inserccion(numeros);
	mostrar(numeros);
	return 0;
}

void ordenamiento_inserccion(Arreglo numeros) {

	for (int i = 1; i < TAMANIO; i++) {
		int elemento = numeros[i];      //Algoritomo de inserccion
		int k = i - 1;
		while (k >= 0 && elemento >numeros[k]) {  //ordena de mayor a menor 
			numeros[k + 1] = numeros[k];          //si desea de menor a mayor cambiar la parte de 
			k--;                                  //elemnto>numeros[k] por elemento<numeros[k]
		}
		numeros[k + 1] = elemento;
	}
}

void mostrar(Arreglo numeros) {

	for (int i = 0; i < TAMANIO; i++) {
		cout << setw(3) << numeros[i] << setw(3);
	}

}


