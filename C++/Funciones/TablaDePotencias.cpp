#include<iostream>
#include<iomanip>
using namespace std;

void Tabla_De_Potencias(int x);
int main() {
	int Numero;
	do {
		cout << "Digite el numero:"; cin >> Numero;
	} while (Numero <= 0);
	Tabla_De_Potencias(Numero);

	return 0;
}

void Tabla_De_Potencias(int x) {
	int k = 1;
	for (int j = 1; j <= x; j++) {
		int Pont = 1;
		for (int i = 1; i <= 2; i++) {
			Pont = Pont * j;
		}
		if (j >= 1 && j <= x) {
				int Pont2 = 1;
				for (int i = 1; i <= 3; i++) {
					Pont2 = Pont2 * k;
				}
				cout << j << "^" << "2:" << Pont << setw(4) << k << "^" << "3:" << Pont2 << endl;
		}
		k++;
	}
}
