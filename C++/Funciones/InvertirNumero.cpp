#include <iostream>
using namespace std;

void invertir(int n);

int main() {
	int n;
	cout << "Ingrese un entero positivo: ";
	cin >> n;
	cout << "Numero invertido: ";
	invertir(n);
}	

void invertir(int n) {
	int unidades = 0;
    if (n == 0) return;
	do {
        unidades = n%10;
        n = n/10;
    } while (unidades == 0);
    cout << unidades;
	while (n > 0) {
        unidades = n%10;
        n = n/10;
        cout << unidades;
	}
	cout << endl;
}
