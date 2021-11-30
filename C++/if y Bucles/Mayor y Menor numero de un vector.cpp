#include<iostream>
using namespace std;

int main() {

	int Numero;
	int max = 0, min = 999999;
	const int Vector = 100000;
	int V[Vector] = {};

	cout << "Digite la cantidad de elemnetos:"; cin >> Numero;

	for (int i = 0; i < Numero; i++) {
		cout << "Digite los elementos:"; cin >>V[i];
		if (V[i] > max) {
			max = V[i];
		}
		else if (V[i] < min) {
			min = V[i];
		}
	}
	cout << "El mayor elemento es:" << max<<endl;
	cout << "El menor elemento es:" << min << endl;

	return 0;
}