#include<iostream>
#include<iomanip>
using namespace std;

void ViscDen(int Op1, int Op2);
int main() {
	int Opcion1, Opcion2;
	cout << "VISCOSIDAD" <<setw(28)<<"DENSIDAD"<< endl;
	cout << "Opcion1-->Alcohol Etilico" << setw(30) << "Opcion1-->Alcohol Etilico" << endl;
	cout << "Opcion2-->Alcohol Metilico" << setw(30) << "Opcion2-->Alcohol Metilico" << endl;
	cout << "Opcion3-->Alcohol Propilico" << setw(30) << "Opcion3-->Alcohol Propilico" << endl;
	do {
		cout << "De que producto desea ver su Viscosidad-Opcion:"; cin >> Opcion1;
		cout << "De que producto desea ver su Densidad-Opcion:"; cin >> Opcion2;
	} while ((Opcion1 <= 0 || Opcion1 > 3) || (Opcion2 <= 0 || Opcion2 > 3));
	ViscDen(Opcion1, Opcion2);
	return  0;
}
void ViscDen(int Op1, int Op2) {
	switch (Op1) {
	case 1:
		cout << "Viscosidad=2.29x10^5" << endl;
		break;
	case 2:
		cout << "Viscosidad=1.17x10^5" << endl;
		break;
	case 3:
		cout << "Viscosidad=4.01x10^5" << endl;
		break;
	}
	switch (Op2) {
	case 1:
		cout << "Densidad=1.527" << endl;
		break;
	case 2:
		cout << "Densidad=1.534" << endl;
		break;
	case 3:
		cout << "Densidad=1.556" << endl;
		break;
	}

}
