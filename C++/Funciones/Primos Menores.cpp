#include<iostream>
using namespace std;

void primos(int n);

int main() {

	int Numero;

	do {
		cout << "Ingrese el numero primo:"; cin >> Numero;
	} while (Numero <= 1);
	
	primos(Numero);

	return 0;
}

void primos(int n) {

	while (n > 1) {
		int cont = 0;

		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				cont++;
			}
		}
		if (cont == 2) {
			cout << n << endl;
		}
		n--;
	}

}
