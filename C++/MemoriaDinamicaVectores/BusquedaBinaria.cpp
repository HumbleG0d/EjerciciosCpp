#include<iostream>
#include<time.h>

using namespace std;

void GenerandoNotas(int* N, int Cap);
void OrdenamientoBubuja(int* N, int Cap);
void Mostrar(int* N, int Cap);
int BusquedaBinaria(int* N, int Cap, int n);


int main() {

	srand(time(NULL));
	int unknown = 0 + rand() % 21;
	int* Notas = nullptr, CAPACIDAD = 0;

	cout << "La nota ah buscar es:" << unknown << endl;

	cout << "Digite el numero de notas:"; cin >> CAPACIDAD;

	Notas = new int[CAPACIDAD];
	GenerandoNotas(Notas, CAPACIDAD);
	cout << endl;
	OrdenamientoBubuja(Notas, CAPACIDAD - 1);
	cout << "Notas Ordenadas" << endl;
	Mostrar(Notas, CAPACIDAD);
	cout << endl;
	if (BusquedaBinaria(Notas, CAPACIDAD, unknown) == -1) {
		cout << "Numero no encontrado" << endl;
	}
	else {
		cout << "Numero encontrado" << endl;
	}
	
	delete[] Notas;
}
void GenerandoNotas(int* N, int Cap) {

	for (int i = 0; i < Cap; i++) {
		N[i] = 0 + rand() % 21;
		cout << "Notas[" << i << "]:" << N[i] << endl;
	}

}
void OrdenamientoBubuja(int* N, int Cap) {


	if (Cap == 0) {
		return;
	}
	else {
		for (int i = 0; i < Cap; i++) {
			if (N[i] > N[i + 1]) {    //Ordena de menor a mayor
				int aux = N[i];             //si desea que ordene de mayor a menor
				N[i] = N[i + 1];      //cambiar arreglo[i]>arreglo[i+1] por arreglo[i]<arreglo[i+1]
				N[i + 1] = aux;
			}
		}
		OrdenamientoBubuja(N, Cap - 1);
	}
}

void Mostrar(int* N, int Cap) {

	for (int i = 0; i < Cap; i++) {
		cout << "Notas[" << i << "]:" << N[i] << endl;
	}
}

int BusquedaBinaria(int* N, int Cap, int n) {
	int primero, ultimo, medio;
	primero = 0;
	ultimo = n - 1;
	
	while (primero <= ultimo) {
		medio = (primero + ultimo) / 2;
		if (N[medio] == n) {
			return medio;
		}
		else {
			if (n < N[medio]) {
				ultimo = medio - 1;
			}
			else {
				primero = medio + 1;
			}
		}
	}
	return -1;

}
