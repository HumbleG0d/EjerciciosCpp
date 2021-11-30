#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

void OrdenadoNotas(int* Nota, int CAP);
void Mostar(int* Nota, int CAP);
void Intentos(int NotaDes);
int main() {

	srand(time(NULL));
	int p;
	int NotaDesconocida;
	int* Notas = nullptr, CAPACIDAD = 0;

	cout << "Digite la cantidad de notas:"; cin >> CAPACIDAD;

	Notas = new int[CAPACIDAD];

	for (int i = 0; i < CAPACIDAD; i++) {
		Notas[i] = 0 + rand() % 21;
		cout << "Nota[" << i << "]:" << Notas[i] << endl;
	}
	p = 0 + rand() % (CAPACIDAD + 1);
	NotaDesconocida = Notas[p];

	cout << "La nota selecionada por la computadora es : " << NotaDesconocida << endl;

	OrdenadoNotas(Notas, CAPACIDAD - 1);
	cout << endl;
	Mostar(Notas, CAPACIDAD);
	cout << endl;
	Intentos(NotaDesconocida);

	return 0;
}

void OrdenadoNotas(int* Nota, int CAP) {

	if (CAP == 0) {
		return;
	}
	else {
		for (int i = 0; i < CAP; i++) {
			if (Nota[i] > Nota[i + 1]) {    //Ordena de menor a mayor
				int aux = Nota[i];             //si desea que ordene de mayor a menor
				Nota[i] = Nota[i + 1];      //cambiar arreglo[i]>arreglo[i+1] por arreglo[i]<arreglo[i+1]
				Nota[i + 1] = aux;
			}
		}
		OrdenadoNotas(Nota, CAP - 1);
	}
}
void Mostar(int* Nota, int CAP) {

	for (int i = 0; i < CAP; i++) {
		cout << setw(4) << Nota[i] << setw(4);
	}
}
void Intentos(int NotaDes) {
	int N;
	N = 0 + rand() % 21;

	if (NotaDes == N) {
		cout << "Adivinaste";
	}
	else if (NotaDes != N) {
		if (NotaDes > N) {
			cout << "La nota seleccionada es mayor que la nota fallida";
		 }
		else {
			cout << "La notaseleccionada es menor que la nota fallida";
		}
	}
}
