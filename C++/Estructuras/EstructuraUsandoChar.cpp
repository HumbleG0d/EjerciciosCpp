#include<iostream>
using namespace std;

struct DatosPersona{

	char Nombre[20];
	int Edad;
	int AņoNacimineto;
	char MesNacimiento[10];
};

int main() {
	struct DatosPersona Persona1;
	cout << "Nombre:"; cin.getline(Persona1.Nombre, 20, '\n');
	cout << "Edad:"; cin >> Persona1.Edad;
	cout << "Aņo de Nacimiento:"; cin >> Persona1.AņoNacimineto;
	cout << "Mes de Nacimiento:"; cin >> Persona1.MesNacimiento;
	return 0;
}
