#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

void NotasSinRepeticion(int* Nota, int CAP);
int main() {

	srand(time(NULL));
	
	int* Notas = nullptr, CAPACIDAD = 0;

	cout << "Digite la cantidad de notas:"; cin >> CAPACIDAD;

	Notas = new int[CAPACIDAD];

	for (int i = 0; i < CAPACIDAD; i++) {
		Notas[i] = 0 + rand() % 21;
		cout << "Nota[" << i << "]:" << Notas[i] << endl;
	}
	cout << endl;
	NotasSinRepeticion(Notas, CAPACIDAD);
	return 0;
}

void NotasSinRepeticion(int* Nota, int CAP) {
	
	int a = 0;
	while (a >= 0 && a <= 20) {
		int cont = 0;
		for (int i = 0; i < CAP; i++) {
			if (Nota[i] == a) {
				cont++;
			}
		}
		if (cont > 1) {
			cout << a << endl;
		}
		else if (cont == 1) {
			cout << a << endl;
		}
		a++;
	}

}
