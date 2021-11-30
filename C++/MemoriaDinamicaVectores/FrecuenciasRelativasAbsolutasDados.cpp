#include<iostream>
#include<time.h>

using namespace std;

int main() {

	srand(time(NULL));
	int* Puntaje = nullptr, Lanzamientos = 0;

	cout << "Cuantas veces decea lanzar el dado:"; cin >> Lanzamientos;

	Puntaje = new int[Lanzamientos];

	float cont=0, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0;

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
	float Fr1 = cont / Lanzamientos;
	float Fr2 = cont1 / Lanzamientos;
	float Fr3 = cont2 / Lanzamientos;
	float Fr4 = cont3 / Lanzamientos;
	float Fr5 = cont4 / Lanzamientos;
	float Fr6 = cont5 / Lanzamientos;

	cout << "Frecuencia Absoluta cuanto la cara es 1:  " << cont << "    " << "Frecuencia Relativa cuando la cara es 1:" <<Fr1 << endl;
	cout << "Frecuencia Absoluta cuanto la cara es 2:  " << cont1 << "    " << "Frecuencia Relativa cuando la cara es 2:" << Fr2 << endl;
	cout << "Frecuencia Absoluta cuanto la cara es 3:  " << cont2 << "    " << "Frecuencia Relativa cuando la cara es 3:" << Fr3 << endl;
	cout << "Frecuencia Absoluta cuanto la cara es 4:  " << cont3 << "    " << "Frecuencia Relativa cuando la cara es 4:" << Fr4 << endl;
	cout << "Frecuencia Absoluta cuanto la cara es 5:  " << cont4 << "    " << "Frecuencia Relativa cuando la cara es 1:" << Fr5 << endl;
	cout << "Frecuencia Absoluta cuanto la cara es 6:  " << cont5 << "    " << "Frecuencia Relativa cuando la cara es 1:" << Fr6 << endl;
	return 0;
}
