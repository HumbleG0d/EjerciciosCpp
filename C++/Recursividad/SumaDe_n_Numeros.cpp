#include<iostream>
using namespace std;

long SumaDe_n_Numeros(int x);
int main() {
	int Numero;
	do {
		cout << "Hasta que numero(+) desea que se sume:"; cin >> Numero;
	} while (Numero <= 0);
	cout << "La suma de los " << Numero << " numero/s es " << SumaDe_n_Numeros(Numero);
	return 0;
}

long SumaDe_n_Numeros(int x) {
	
	 if (x == 1) {
		x = 1;
	}
	else if (x > 1) {
		x = x + SumaDe_n_Numeros(x - 1);
	}
	return x;
}
