#include<iostream>
#include<iomanip>

using namespace std;

const int TAMANIO = 7;

typedef float Arreglo[TAMANIO];

void cambios_del_dolar(Arreglo valores);

int main() {
  
	Arreglo valores = { 3.42,3.40,3.40,3.43,3.43,3.43,3.43 };

	cambios_del_dolar(valores);
	
	return 0;
}

void cambios_del_dolar(Arreglo valores) {
	float Suma = 0.0;
	for (int i = 0; i < TAMANIO; i++) {
		Suma = Suma + valores[i];
	}
	float Media = Suma / TAMANIO;
	
	cout << "El valor de cambio medio es:" << setprecision(3) << Media << endl;

	for (int i = 0; i < TAMANIO; i++) {
		if (valores[i] < Media) {
			int p = i+1;

			switch (p) {
			case 1:
				cout << "Lunes 1 de Junio" << endl;
				break;
			case 2:
				cout << "Martes 2 de Julio" << endl;
				break;
			case 3:
				cout << "Miercoles 3 de Julio" << endl;
				break;
			case 4:
				cout << "Jueves 4 de Julio" << endl;
				break;
			case 5:
				cout << "Jueves 5 de julio" << endl;
				break;
			case 6:
				cout << "Viernes 6 de Julio" << endl;
			case 7:
				cout << "Sabado 7 de julio" << endl;
				break;
			}
		}
	}

}

