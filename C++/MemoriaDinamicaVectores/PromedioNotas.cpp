#include<iostream>
#include<time.h>
using namespace std;

const int CAPACIDAD = 5;
typedef int Notas[CAPACIDAD];

int main() {
	srand(time(NULL));

	Notas Nota;
	
	for (int i = 0; i < CAPACIDAD; i++) {
		Nota[i] = 0 + rand() % 20;
		cout << "Nota[" << i << "]:" << Nota[i]<<endl;
	}
	
	float* Promedio = new float{ 0 };

	for (int i = 0; i < CAPACIDAD; i++) {
		*Promedio = *Promedio + Nota[i];
	}
	*Promedio = *Promedio / CAPACIDAD;
	cout << "El promedio de las notas es:" << *Promedio << endl;
	delete Promedio;

	return 0;
}
