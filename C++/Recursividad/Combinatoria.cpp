#include <iostream>
using namespace std;

int universo();
int muestra(int n);
int combinatoria(int n, int k);

int main() {
	int n, k;
	n = universo();
	k = muestra(n);
	cout << "El numero de combinaciones de " << n;
	cout << " elemento(s) de " << k << " elemento(s) dado(s) es ";
	cout << combinatoria(n,k) << endl;
}	

int universo() {
	int n;
	do {
		cout << "Ingrese un entero positivo: ";
		cin >> n;
		if (n <= 0) cout << "Valor no permitido." << endl;
	} while (n <= 0);
	return n;
}

int muestra(int n) {
	int k;
	do {
		cout << "Ingrese un entero positivo menor o igual a " << n << ": ";
		cin >> k;
		if (k <= 0 || n < k) cout << "Valor no permitido." << endl;
	} while (k <= 0 || n < k);
	return k;
}

int combinatoria(int n, int k) {
	if (k == 1)
		return n;
	else if (n == k)
		return 1;
	else
	 	return combinatoria(n-1,k-1) + combinatoria(n-1,k);
