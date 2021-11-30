#include<iostream>
#include<fstream>
#include<cstring>
#include<cassert>
using namespace std; 


int main() {

	ifstream Archivo;
	Archivo.open("Prueba.txt");

	string linea;
	if (Archivo.fail()) {

		cout << "No se pudo abrir el archivo." << endl;
	}

	while (!Archivo.eof()) {
		getline(Archivo,linea);
		cout<<linea<<endl;
	}
	Archivo.close();

	ofstream Archivo1;
	Archivo1.open("Prueba.txt");
   Archivo1<<"Linea que desea agregar"<<endl;

	return 0;
}
