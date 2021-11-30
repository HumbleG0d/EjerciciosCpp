#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	const int TamañoArreglo=100000;
	int NumeroElementos;

	int Arreglo[TamañoArreglo] = {};

	cout << "Digite el numuero de elementos del arreglo:"; cin >> NumeroElementos;


	for (int i = 0; i <NumeroElementos; i++) {
		cout << "Digite los elementos:"; cin >> Arreglo[i];
	}

   cout << "Lugar" << setw(13) << "Elemneto" << endl;

	     for (int i =0; i<NumeroElementos; i++) {
		   cout << setw(5) << i << setw(13) << Arreglo[i];
		   cout << endl;
	     }

		 cout << endl<<endl;

	   cout << "Lugar" << setw(13) << "Elemneto" << endl;
	     for (int i =NumeroElementos; i>0; i--) {
		cout << setw(5) << i-1 << setw(13) << Arreglo[i-1];
		cout << endl;
	     }

	return 0;
}