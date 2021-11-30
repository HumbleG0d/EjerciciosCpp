include<iostream>
#include<iomanip>

using namespace std;

const int TAMANIO = 6;

typedef int Arreglo[TAMANIO];

void media_aritmetica_notas(Arreglo notas);

void promedio_notas_mayores(Arreglo notas);


int main(){

	Arreglo notas = { 17,20,15,18,14,20 };
	
	media_aritmetica_notas(notas);

	promedio_notas_mayores(notas);


	return 0;
}

void media_aritmetica_notas(Arreglo notas) {
	
	float suma=0.0;

	for (int i = 0; i < TAMANIO; i++) {
		suma = suma + notas[i];
	}
	
	float MediaAritmetica = suma / TAMANIO;

	cout << "La media aritmetica de las notas es:" << setprecision(3) << MediaAritmetica << endl;
}

void promedio_notas_mayores(Arreglo notas) {

	int min = 9999;
	
	for (int i = 0; i < TAMANIO; i++) {
		if (notas[i] < min) {
			min = notas[i];
		 }
	}

	float sum = 0.0;
	for (int i = 0; i < TAMANIO; i++) {
		if (notas[i] != min) {
			sum = sum + notas[i];
		}
	}

	float Promedio = sum / (TAMANIO - 1);
	
	cout << "El promedio de las notas mayores es:" << setprecision(3) << Promedio << endl;
}

