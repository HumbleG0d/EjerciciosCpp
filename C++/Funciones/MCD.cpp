#include<iostream>

using namespace std;

int mcd(int,int);

int main(){
	int nro1, nro2, m;
	do{
		cout << "Ingrese un numero entero y positivo: ";
		cin >>  nro1;
	}while(nro1<0);
	
	do{
		cout << "Ingrese un numero entero y positivo: ";
		cin >>  nro2;
	}while(nro2<0);
	
	if(nro1>nro2)
		m = mcd(nro1,nro2);
	else
		m = mcd(nro2,nro1); 
		
	cout << "Maximo Comun Divisor" << endl;
	cout << "de " << nro1 << " y " << nro2;
	cout << " es " << m << endl;
	return 0;
}

int mcd(int a,int b){
	if(b == 0)
		return a;
	else
		mcd(b, a%b);
}
