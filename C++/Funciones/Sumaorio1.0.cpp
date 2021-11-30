#include<iostream>
#include<cmath>
using namespace std;

void sumatoria(int n);

int main() {

	int Termino;

	do {
		cout << "Digite el termino de la susecion:"; cin >> Termino;
	} while (Termino <= 0);

	sumatoria(Termino);

	return 0;
}

void sumatoria(int n) {
	int sum = 0;
	int sum1 = 0;
	int sumx;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			sum = sum + pow(i, i);
		}
		else if (i % 2 == 0) {
			sum1 = sum1 - pow(i, i);
		}
	}
	sumx = sum + sum1;
	cout << "El valor de la suma es:" << sumx << endl;

}

