#include<iostream>
using namespace std;

long Capicua(int x);

int main() {
	long Numero;
	do {
		cout << "Digite el numero:"; cin >> Numero;
	} while (Numero <= 0);
	if (Numero == Capicua(Numero)) {
		cout << "El numero " << Numero << " es capicua" << endl;
	}
	else {
		cout << "El numero " << Numero << " no es capicua" << endl;
	}
	return 0;
}

long Capicua(int x) {
	long resto, NumeroCapicua = 0;
	while (x>0){
		resto = x % 10;
		NumeroCapicua = NumeroCapicua*10+resto;
		x = x / 10;
	}
	return NumeroCapicua;
}

