#include<iostream>
#include<fstream>
#include<cassert>

using namespace std;

int main() {

	char NombreArchivo[20];
	char Texto[255];

	cout << "Escriba el nombre del archivo:"; cin >> NombreArchivo;

	ofstream Archivo(NombreArchivo); //Equivale a ofstream Archivo    -->Creando un archivo
	 //  Archivo.open("Nombre.txt",ios::out);

	assert(Archivo.is_open());     //Asegura que se haya creado el archivo.

	cout << "Escriba un texto:" << endl;   //Escribiendo texto.
	cin.ignore(1, '\n');                    //Escribiendo texto.
	cin.getline(Texto, 251, '\n');          //Escribiendo texto.
	Archivo << Texto<<'\n';                 //Escribiendo texto.
	Archivo.close();              //Cerramso el archivo.

	ifstream Archivo1(NombreArchivo);   // Equivale a ifstream Archivo
	//Archivo.opne("Nombre.txt",ios:in);

	 assert(Archivo1.is_open());  //Asegura que se habra el archivo.

	cout << "Leyendo cada caracter del texto escrito e imprimiendo las letras del texto." << endl;

	char letra;

	while (Archivo1.get(letra)) {  
		if ((letra >= 65 && letra <= 90) || (letra >= 97 && letra <= 122)) {
			cout << letra;
		}
	}


	return 0;
}
