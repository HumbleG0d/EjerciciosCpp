#include<iostream>
using namespace std;

double potencia(double a, int b);


int main() {

	double base;
	int exponente;
	float y;
	
	do {
		cout << "Digite la base de la potencia:"; cin >> base;
	} while (base <= 0);
	
	cout << "Digite el exponente de la potencia:"; cin >> exponente;
	
	if (exponente >= 0) {
		cout << "La potencia es:" << potencia(base, exponente) << endl;
	}
	else if(exponente<0){
		y = 1 / potencia(base, exponente);
		cout << "La potencia es:" <<y<< endl;
	}
	
	return 0;
}

double potencia(double a, int b) {
	double x;
	if (b < 0) {
		b = b * (-1);
			if (b == 0) {
				return 1;
			}
			else {
				x = a * potencia(a, b - 1);
				return x;
			}
	}
	else if (b >= 0) {
		if (b == 0) {
			return 1;
		}
		else {
			x = a * potencia(a, b - 1);
			return x;
		}

	}

}
