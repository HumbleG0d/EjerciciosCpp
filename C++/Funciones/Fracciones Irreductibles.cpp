#include<iostream>
using namespace std;

void numero_equivalente(int a, int b);

int main() {

	int Numerador, Denominador;

	cout << "Digite el valor del numerador:"; cin >> Numerador;
	cout << "Digite el valor de denomaindor:"; cin >> Denominador;


	numero_equivalente(Numerador, Denominador);
	return 0;
}


void numero_equivalente(int a, int b) {

	if (a < 0 && b < 0) {

		for (int i = 2; i <= 20; i++) {
			while (a % i == 0 && b % i == 0) {
				a = a / i;
				b = b / i;
			}
		}

		cout << "La fraccion irreductible es:" << (-1)*a << "/" <<(-1)* b << endl;
	}

	else if (a > 0 && b < 0) {
		for (int i = 2; i <= 20; i++) {
			while (a % i == 0 && b % i == 0) {
				a = a / i;
				b = b / i;
			}
		}

		cout << "La fraccion irreductible es:" << (-1)*a << "/" << (-1)*b << endl;
	}
    
	else {

		for (int i = 2; i <= 20; i++) {
			while (a % i == 0 && b % i == 0) {
				a = a / i;
				b = b / i;
			}
		}

		cout << "La fraccion irreductible es:" << a << "/" << b << endl;
	}

}
