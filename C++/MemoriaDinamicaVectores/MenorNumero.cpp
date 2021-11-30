#include<iostream>
using namespace std;

const int CAPACIDAD = 5;
typedef int Notas[CAPACIDAD];

int main() {

	 Notas Nota = { 20,18,19,15,17 };
	int* p_int = new int{ Nota[0] };
	
	int min = 990;

	for (int i = 0; i < CAPACIDAD; i++) {
		if (*p_int > Nota[i]) {
			*p_int = Nota[i];
		}
	}

	cout << "La menor nota es:" << *p_int;
	delete p_int;


	return 0;
}
