#include<iostream>
#include<cmath>
using namespace std;

const double limite = pow(10, -4);
const double pi = 3.14159265358979323846264338327950288419716939937;
double ValorX(int A, int Simbolo);
double ValorY(int A, int Simbolo);

int main() {
	int A = 1;
	double Simbolo;
	for (int m = 0; m <= 20; m++) {
		Simbolo = pi * m/20;
		cout << "Para Simbolo:" << Simbolo << endl;
		cout << "El valor de X=" << ValorX(A, Simbolo) << endl;
		cout << "El valor de Y=" << ValorY(A, Simbolo) << endl;
		cout << endl;
	}
	return 0;
}

double ValorX(int A, int Simbolo) {
	double suma = 0.0;
	int i = 0;
	long Factorial = 1;
	double Valor=1.0;
	while (abs(Valor) > limite) {
		for (int j = 1; j <= (4 * i + 1) * (2 * i); j++) {
			Factorial = Factorial * j;
		}
		if (i == 0) {
			Factorial = 1;
			Valor = pow(-1, i) * (pow(Simbolo, 2 * i) / Factorial);
		}
		Valor = pow(-1, i) * (pow(Simbolo, 2 * i) / Factorial);
		suma = suma + Valor;
		i++;
	}
	return A * sqrt(2 * Simbolo) * suma;
}

double ValorY(int A, int Simbolo) {
	double suma = 0.0;
	int i = 0;
	long Factorial = 1;
	double Valor = 1.0;
	while (abs(Valor) > limite) {
	for (int j = 1; j <= (4 * i + 3) * (2 * i+1); j++) {
		Factorial = Factorial * j;
	}
	Valor = pow(-1, i) * (pow(Simbolo, 2 * i+1) / Factorial);
	suma = suma + Valor;
	i++;
    }
return A * sqrt(2 * Simbolo) * suma;
}

