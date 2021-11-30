#include<iostream>
using namespace std;

double Factorial(double);
int main() {
	double m,n,a,Resultado;
	do {
		cout << "Digite el valor de m:"; cin >> m;
		cout << "Digte el valor de n:"; cin >> n;
	} while (m <= 0||n<=0);
	a = m - n;
	cout << "El factorial m es:" << Factorial(m)<<endl;
	cout << "El factorial n es:" << Factorial(n) << endl;
	if (a > 0) {
		Resultado = Factorial(m) / (Factorial(n) * Factorial(a));
		cout << "Combinatorio de m sobre n es:" << Resultado << endl;
	}
	else {
		cout << "m tiene que ser mayor que n" << endl;
	}
	return 0;
}
double Factorial(double numero1 ){
	int FACTORIAL = 1;
	for (int i = 1; i <= numero1; i++) {
		FACTORIAL = FACTORIAL * i;
	}
	return FACTORIAL;
}
