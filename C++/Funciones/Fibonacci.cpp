#include<iostream>
using namespace std;

int fibonacci(int n);


int main() {

	int Numero;
	do {
		cout << "Digite el termino de la susecion:"; cin >> Numero;
	} while (Numero <= 0);

	for (int i = 1; i <=Numero; i++) {
		cout << fibonacci(i)<<endl;
	}

	return 0;
}

int fibonacci(int n) {

	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
