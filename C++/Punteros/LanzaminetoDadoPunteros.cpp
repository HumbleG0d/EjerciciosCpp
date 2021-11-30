#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;

const int CAPACIDAD = 20;

void LanzamientoDado(int* cara);

int main() {

	srand(time(NULL));
	int cara[CAPACIDAD];
	
	LanzamientoDado(cara);

	
	return 0;
}

void LanzamientoDado(int* cara) {


	for (int i = 0; i < CAPACIDAD; i++) {
		cara[i] = 1 + rand() % 6;
		cout << cara[i] << "---->" << cara + i << endl;
	}
	int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0;
	for (int i = 0; i < CAPACIDAD; i++) {
		if (*(cara + i)==1) {
			c1++;
		}
		else if (*(cara + i) == 2) {
			c2++;
		}
		else if (*(cara + i) == 3) {
			c3++;
		}
		else if (*(cara + i) == 4) {
			c4++;
		}
		else if (*(cara + i) == 5) {
			c5++;
		}
		else if (*(cara + i) == 6) {
			c6++;
		}
	}
	cout << "La cara 1 se repite " << c1 << " veces" << endl;
	cout << "La cara 2 se repite " << c2 << " veces" << endl;
	cout << "La cara 3 se repite " << c3 << " veces" << endl;
	cout << "La cara 5 se repite " << c4 << " veces" << endl;
	cout << "La cara 5 se repite " << c5 << " veces" << endl;
	cout << "La cara 6 se repite " << c6 << " veces" << endl;
}
