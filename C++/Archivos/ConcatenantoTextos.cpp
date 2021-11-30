#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {

	ifstream Archivo;
	Archivo.open("Leeme.txt");

	string texto;
	string linea;

	if (Archivo.fail()) {
		cout << "No se pudo habrir el archivo." << endl;
		exit(1);
	}

	while (!Archivo.eof()) {

		getline(Archivo, texto);
		linea = linea + texto;

	}
	
	Archivo.close();
	cout << linea << endl;

	ofstream Archivo1;
	Archivo1.open("Prueba.txt", ios::app);
	Archivo1 << linea << endl;

	Archivo1.close();

	return 0;
}
