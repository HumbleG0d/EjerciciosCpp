#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>

using namespace std;

void escribir();


int main() {

	escribir();

	return 0;
}
void escribir() {

	ofstream Archivo;  //Creando un archivo.
	char NombreArchivo[20],frase[100];

	cout << "Escriba el nombre de su archivo: " << endl;
	cin.getline(NombreArchivo,20,'\n');

	Archivo.open(NombreArchivo, ios::out); 
	
	if (Archivo.fail()) {  //Verfica si se creo o no el archivo.
		cout << "El archivo no pudo ser craeado." << endl;
		exit(1);  //sale automaticamente del archivo.
	}
	cout << "Digite el texto." << endl;
	cin.getline(frase, 100, '\n');
	Archivo << frase;   //Escribimos el contenido del texto.
	Archivo.close(); //Cerramos el archivo.
}
