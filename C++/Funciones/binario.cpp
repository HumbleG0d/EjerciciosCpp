#include<iostream>

using namespace std;

int binario(int);

int main(){
	int nro;
	do{
		cout << "Ingrese un numero entero y positivo: ";
		cin >>  nro;
	}while(nro<0);
	cout << "El Numero Decimal: " << nro <<endl;
	cout << "El Numero Binario: ";
	binario(nro); 
	return 0;
}

int binario(int n){
	if (n>1)
		binario(n/2);
	cout << n%2;
}
