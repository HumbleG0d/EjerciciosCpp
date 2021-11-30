#include<iostream>
using namespace std;

void PedirDatos();
void Potencia(int x, int y);
int Numero1, Numero2;

int main() {
	PedirDatos();
	Potencia(Numero1, Numero2);
	return 0;
}
void PedirDatos() {
	cout << "Digite la base:"; cin >> Numero1;
	cout << "Digite el exponente:"; cin >> Numero2;
}
void Potencia(int x,int y) {
	long Resultado=1;
	if (y > 0) {
		for (int i = 1; i <= y; i++) {
			Resultado = Resultado * x;
		}
		cout << "El resultado es:" << Resultado << endl;
	}
	else {
		cout << "El valor del exponente  tiene que ser positivo" << endl;
	}
}


