#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void aniadir_texto();

int main() {

	aniadir_texto();

	return 0;

}
void aniadir_texto() {

	ofstream Archivo; 
	string texto;
	Archivo.open("Prueba.txt", ios::app); //ios::app-->Sirve para añadir texto a un archivo ya creado.

	if (Archivo.fail()) {
		cout << "No se pudo abrir el archivo."<<endl;
		exit(1);
	}
	cout << "Digite el texto que va ah añadir:" << endl;
	getline(cin, texto);
   
	Archivo << texto<<endl;

	Archivo.close();

}
