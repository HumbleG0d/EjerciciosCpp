#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char Palabra[100];
	int espacio;
	int aux;
	
	cout << "Escriba una frase:"; cin.get(Palabra, 100);

	for (int i = 0; i < strlen(Palabra); i++) {
		if (Palabra[i] == 32) {
			espacio = i;
			aux = i;
			while (Palabra[aux] == 32 && aux < (strlen(Palabra) - 1)) aux++;
				Palabra[espacio] = Palabra[aux];
				Palabra[aux] = 32;
		}
	}
	cout << "La palabra sin espacios es:" << Palabra<<endl;

	return 0;
}
