#include<iostream>
using namespace std;

void PedirDatos();
void Mult(int x, int y);
int Numero1, Numero2;
int main() {
	PedirDatos();
	Mult(Numero1, Numero2);

	return 0;
}
void PedirDatos() {
	cout << "Digite el primer numero:"; cin >> Numero1;
	cout << "Digite el segundo numero:"; cin >> Numero2;
}
void Mult(int x, int y) {
	long Multiplicacion;
	Multiplicacion = x * y;
	cout << "La multiplicacion de dos numeros es:" << Multiplicacion<<endl;
}



