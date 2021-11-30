#include<iostream>
#include<cstring>
using namespace std;


int main() {
	int CAPACIDAD;
	char Palabra[20];
	char Polindroma[20];

	cout << "Escriba una palabra:"; cin >> Palabra;
	CAPACIDAD = strlen(Palabra);

		for (int i = CAPACIDAD-1; i >= 0; i--) {
			Polindroma[CAPACIDAD-1-i] = Palabra[i];
		}
		
		Polindroma[CAPACIDAD] = '\0';
	
		if (strcmp(Palabra,Polindroma)==0) {
			cout << "La palabra es polindroma" << endl;
		}
		else {
			cout << "La palabra no es polindroma" << endl;
		}

	return 0;
}
