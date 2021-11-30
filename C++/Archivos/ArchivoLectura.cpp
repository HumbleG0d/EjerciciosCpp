#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

void lectura();

int main() {

	lectura();


	return 0;
}
void lectura() {

	ifstream Archivo;  //Lee un archivo ya existente.
	string texto;
	Archivo.open("Apuntes.txt",ios::in); //Abrimos el archivo de nombre Apuntes.
	//ios::in->se usa en ficheros de entrada en este caso el ifstream.

	if (Archivo.fail()) {
		cout << "No se pudo abrir el archivo." << endl;
		exit(1);
	}
	
	while (!Archivo.eof()) {
		getline(Archivo,texto);
		cout<<texto<<endl;
	}
	
	//Otra manera de leer un texto:
	
	 /*
	ifstream Archivo;  //Lee un archivo ya existente.
	char  texto;
	Archivo.open("Apuntes.txt",ios::in); //Abrimos el archivo de nombre Apuntes.
	//ios::in->se usa en ficheros de entrada en este caso el ifstream.

	if (Archivo.fail()) {
		cout << "No se pudo abrir el archivo." << endl;
		exit(1);
	}
	char letra;
	while (!Archivo.eof()) {
		Archivo.get(letra);
		cout<<letra;
	}
*/

}
