#include<iostream>
using namespace std;

bool es_primo(int n);

int main() {
	
	int Numero;
	
	do {
		cout << "Digite un numero:"; cin >> Numero;
	} while (Numero <= 1);

	if (es_primo(Numero) == true) {
		cout << "El " << Numero << " es primo";
	}
	else if (es_primo(Numero) == false) {
		cout << "El " << Numero << " es compuesto";
	}

	return 0;
}

bool es_primo(int n) {

	int cont = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i==0) {
			cont++;
		}
	}
	if (cont == 2) {
		return true;
	}
	else if (cont > 2) {
		return false;
	}

}

