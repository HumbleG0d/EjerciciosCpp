#include<iostream>
using namespace std;

struct DatosPersona{

	char Nombre[20];
	int Edad;
	int A�oNacimineto;
	char MesNacimiento[10];
};

int main() {
	struct DatosPersona Persona1;
	cout << "Nombre:"; cin.getline(Persona1.Nombre, 20, '\n');
	cout << "Edad:"; cin >> Persona1.Edad;
	cout << "A�o de Nacimiento:"; cin >> Persona1.A�oNacimineto;
	cout << "Mes de Nacimiento:"; cin >> Persona1.MesNacimiento;
	return 0;
}
