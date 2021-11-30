#include<iostream>
#include<time.h>
using namespace std;

const int Tamano = 100;
void Arreglo(int a[Tamano], int x);
int SumaArreglo(int a[Tamano], int x);
int MayorElemento(int a[Tamano], int x);
int main() {
	int M[Tamano];
	int Elementos;
	do {
		cout << "Digite el numero de elementos del arreglo:"; cin >> Elementos;
	} while (Elementos <= 0);
	cout << "Digite los elementos del arreglo:" << endl;
	Arreglo(M, Elementos);
	cout << endl;
	cout << "El mayor elemento del arreglo es:" << MayorElemento(M, Elementos - 1) << endl;
	cout << "La suma de los elementos del arreglo es:" << SumaArreglo(M, Elementos-1)<<endl;
	return 0;
}
void Arreglo(int a[Tamano], int x) {
	srand(time(NULL));
	for ( int i = 0; i < x; i++) {
		a[i] = -12 + rand() % (113);
		cout << "[" << i << "]:" << a[i] << endl;
	}
}
int a;
int SumaArreglo(int a[Tamano], int x) {
	int Pos = x;
	int Res;
	if (Pos == 0) {
		Res = a[Pos];
	}
	else {
		Res = a[Pos] + SumaArreglo(a, Pos- 1);
	}
	return Res;
}
