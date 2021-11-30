#include<iostream>
#include<iomanip>

using namespace std;

const int CAPACIDAD = 100;

void GuardarValores(int* Valores);

void DireccionMemoriaValoresPrimos(int* Valores);

int main() {

	int Valores[CAPACIDAD];

	GuardarValores(Valores);
	cout << endl;
	DireccionMemoriaValoresPrimos(Valores);
	return 0;
}

void GuardarValores(int* Valores) {

	for (int i = 0; i< CAPACIDAD; i++) {
		Valores[i] = 2 + i;
		cout << setw(4) << Valores[i] << setw(4);
	}

}
void DireccionMemoriaValoresPrimos(int* Valores) {

	for (int i = 0; i < CAPACIDAD; i++) {
		int cont = 0;
		for (int j = 1; j <=Valores[i]; j++) {
			if (Valores[i] % j == 0) {
				cont++;
			}
		}
		if (cont == 2) {
			cout << Valores[i] << "--->" << Valores + i << endl;
		}
	}

}
