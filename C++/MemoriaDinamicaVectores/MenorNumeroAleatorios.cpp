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
	
	int* p_int = new int{ Nota[0] };

	for (int i = 0; i < CAPACIDAD; i++) {
		if (Nota[i] < *p_int) {
			*p_int = Nota[i];
		}
	}
	cout << "La menor nota es:" << *p_int;
	delete p_int;

	return 0;
}
