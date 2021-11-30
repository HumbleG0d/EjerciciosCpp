#include<iostream>
#include<time.h>
using namespace std;

void GenerandoNotas(int* N, int Cap);

bool BuscandoNota(int* N, int Cap,int Un);

int main() {

	srand(time(NULL));
	int* Notas = nullptr;
	int CAPACIDAD = 0;
	int unknown=0+rand()%21;
	
	cout << "Nota ah buscar es:" << unknown << endl;
	cout << "Digite la cantidad de notas:"; cin >> CAPACIDAD;

	Notas = new int[CAPACIDAD];

	GenerandoNotas(Notas, CAPACIDAD);

	if (BuscandoNota(Notas, CAPACIDAD, unknown) == true) {
		cout << "La nota fue encontrada" << endl;
	}
	else {
		cout << "La nota no fue encontrada" << endl;
	}

	delete[] Notas;

	return 0;
}
void GenerandoNotas(int* N, int Cap) {
    
	for (int i = 0; i < Cap; i++) {
		N[i] = 0 + rand() % 21;
		cout << "Notas[" << i << "]:" << N[i] << endl;
	}

}

bool BuscandoNota(int* N, int Cap,int Un) {

	for (int i = 0; i < Cap; i++) {
		if (Un == N[i]) {
			return true;
		}
	}
}
