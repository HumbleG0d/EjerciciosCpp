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
	char NombreArchivo[20];

	cout << "Escriba el nombre de su archivo: " << endl;
	cin.getline(NombreArchivo,20,'\n');   //Debe terminar en .txt
 
	Archivo.open(NombreArchivo, ios::out); 
	
	if (Archivo.fail()) {  //Verfica si se creo o no el archivo.
		cout << "El archivo no pudo ser craeado." << endl;
		exit(1);  //sale automaticamente del archivo.
	}
	Archivo << "Esto se creo el 09/02/2021 , saludos futuro yo , xd.";  //Creando texto para nuestro archivo.
	Archivo.close(); //Cerramos el archivo.
}
