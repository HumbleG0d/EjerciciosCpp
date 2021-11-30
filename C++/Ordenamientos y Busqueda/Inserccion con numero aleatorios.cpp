#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;

const int TAMANIO = 20;
typedef int Arreglo[TAMANIO];

void notas_aleatorias(Arreglo numeros);

void ordenamiento_inserccion(Arreglo numeros);

void mostrar(Arreglo numeros);

int main() {

	Arreglo notas = { };
	notas_aleatorias(notas);
	ordenamiento_inserccion(notas);
	mostrar(notas);
	return 0;
}

void notas_aleatorias(Arreglo numeros) {

	srand(time(NULL));
	cout << "Las 20 notas del alumno son:" << endl;
	for (int i = 0; i < TAMANIO; i++) {
		numeros[i] = 1 + rand() % 20;
		cout<<setw(3)<<numeros[i]<<setw(3);
	}
	cout << endl;

}
void ordenamiento_inserccion(Arreglo numeros) {
	int cont = 0;
	for (int i = 1; i < TAMANIO; i++) {
		int elemento = numeros[i];      
		int k = i - 1;
		while (k >= 0 && elemento < numeros[k]) {  
			numeros[k + 1] = numeros[k];           
			k--;                                 
		}
		numeros[k + 1] = elemento;
		cont++;
	}
	cout << "El numero de comapraciones es:" << cont << endl;
}

void mostrar(Arreglo numeros) {
	cout << "Ls notas ordenadas de menor a mayor:" << endl;
	for (int i = 0; i < TAMANIO; i++) {
		cout << setw(3) << numeros[i] << setw(3);
	}

}
