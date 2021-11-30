#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

const int CAPACIDAD = 100;

void LanzamientoDado(int* Vector);
void CaraImpar(int* Vector);
int main() {
	
	srand(time(NULL));
	int Vector[CAPACIDAD];

	LanzamientoDado(Vector);
	cout << endl;
	CaraImpar(Vector);

	return 0;
}

void LanzamientoDado(int* Vector) {

	for (int i = 0; i < CAPACIDAD; i++) {
		Vector[i] = 1 + rand() % 5;
		cout << setw(3) << Vector[i] << setw(3);
	}
}

void CaraImpar(int* Vector) {

	for (int i = 0; i < CAPACIDAD; i++) {
		if (Vector[i] % 2 != 0) {
			cout << Vector[i] << "--->" << Vector + i<<endl;
		}
	}
}
