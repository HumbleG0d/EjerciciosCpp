#include<iostream>
#include<fstream>

using namespace std;

void escribir();


int main() {

	escribir();

	return 0;
}
void escribir() {

	ofstream Archivo;  //Creando un archivo, el ofstream se usa para escribir texto en un archivo.
	Archivo.open("Prueba.txt", ios::out); //Abriendo el archivo , ios::out->sirve para copiar texto, "Prueba.txt"->Nombre del archivo.
	//ios:out->Reeplaza el archivo en caso que existiera otra archivo, si no esxite un archivo el ios::out crea un archivo.
    //ios::out->se usa en en ficheros de salida en este caso es el ofstream.
	if (Archivo.fail()) {  //Verfica si se creo o no el archivo.
		cout << "El archivo no pudo ser craeado." << endl;
		exit(1);  //sale automaticamente del archivo.
	}
	Archivo << "Esto se creo el 09/02/2021 , saludos futuro yo , xd.";  //Creando texto para nuestro archivo.
	Archivo.close(); //Cerramos el archivo.
}
