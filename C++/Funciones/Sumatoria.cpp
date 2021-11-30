#include <iostream>
#include <cmath>    // for pow function
using namespace std;

int suma(int n);
void imprimir_suma(int n);

int main() {
	int const REPETICIONES = 8;
	for (int j = 1; j <= REPETICIONES; ++j) {
		imprimir_suma(j);
		cout << " = " << suma(j) << endl;
	}
}	

int suma(int n) {
	if (n%2 == 1) {
		if (n == 1) return 1;
		else return suma(n-1) + pow(n,n);
	}
	else 
		return suma(n-1) - pow(n,n);
}

void imprimir_suma(int n) {
	if (n%2 == 1) {
		if(n > 1) {
			imprimir_suma(n-1); 
			cout << " + ";
		}
	}
	else {
		imprimir_suma(n-1); 
		cout << " - ";
	}	
	cout << n << "^{" << n << "}";
}
