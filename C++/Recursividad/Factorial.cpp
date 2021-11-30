#include<iostream>
using namespace std;

  long Factorial(int x);
int main() {

	int Numero;
	do {
		cout << "Digite el numero:"; cin >> Numero;
	} while (Numero <= 0);
	cout << "El Factorial de " << Numero << " es " << Factorial(Numero);

	return 0;
}
 long Factorial(int x) {
	if (x == 0) {
		x = 1;
	}
	else {
		x = x * Factorial(x - 1);
	}
	return x;
}

