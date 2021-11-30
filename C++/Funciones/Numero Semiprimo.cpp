#include<iostream>
#include<math.h>
using namespace std;

void semi_primo(int n);


int main() {

	int Numero1;

	do {
		cout << "Digite un numero:"; cin >> Numero1;
	} while (Numero1 <= 1);

	semi_primo(Numero1);

	return 0;
}

void semi_primo(int n) {
	int a;
	a = sqrt(n);
	if (n %a == 0) {
		int cont = 0;
		for (int i = 1; i <= a; i++) {
			if (a % i == 0) {
				cont++;
			}
		}
		if (cont == 2) {
			cout << "El numero " << n << " si es semiprimo" << endl;
			cout << n << "=" << a << "x" << a << endl;
		}
		else if (cont > 2) {
			cout << "El numero " << n << " no es semiprimo" << endl;
		}
	}
	else if (n % a != 0) {
		int cont1 = 0;
		for (int j = 1; j < n; j++) {
			int cont2 = 0;
			if (n % j == 0) {
				for (int p = 1; p <= j; p++) {
					if (j % p == 0) {
						cont2++;
					}
				}
			}
			if (cont2 == 2) {
				cont1++;
				if (cont1 == 1) {
					cout << "El numero " << n << " si es semiprimo" << endl;
					cout << j << "x";
				}
				if (cont1 == 2) {
					cout << j;

				}
			}
			if (cont2 > 2) {
				cout << "El numero " << n << " no es semiprimo" << endl;
				break;
			}
		}
	}
}
