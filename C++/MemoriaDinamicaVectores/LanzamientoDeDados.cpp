#include<iostream>
#include<time.h>

using namespace std;

int main() {

	srand(time(NULL));
	int* Puntaje = nullptr, Lanzamientos = 0;

	cout << "Cuantas veces decea lanzar el dado:"; cin >> Lanzamientos;

	Puntaje = new int[Lanzamientos];

	int cont=0, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0;

	for (int i = 0; i < Lanzamientos; i++) {
		Puntaje[i] = 1 + rand() % 6;
		if (Puntaje[i] == 1) {
			cont++;
		}
		else if (Puntaje[i] == 2) {
			cont1++;
		}
		else if (Puntaje[i] == 3) {
			cont2++;
		}
		else if (Puntaje[i] == 4) {
			cont3++;
		}
		else if (Puntaje[i] == 5) {
			cont4++;
		}
		else if (Puntaje[i] == 6) {
			cont5++;
		}
	}

	cout << "El numero 1 salio " << cont << " veces" << endl;
	cout << "El numero 2 salio " << cont1 << " veces" << endl;
	cout << "El numero 3 salio " << cont2 << " veces" << endl;
	cout << "El numero 4 salio " << cont3 << " veces" << endl;
	cout << "El numero 5 salio " << cont4 << " veces" << endl;
	cout << "El numero 6 salio " << cont5 << " veces" << endl;

	return 0;
}
