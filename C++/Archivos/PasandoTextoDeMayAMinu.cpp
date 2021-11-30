#include<iostream>
#include<fstream>
#include<string> //Para el uso de la funcion getline.
#include<cassert>
using namespace std; 


int main() {

	ifstream Archivo;   //Leemos el texto ya creado
	Archivo.open("Prueba.txt");  //Tmb puede ser Archivo.open("Prueba.txt",ios::in);

	string texto;
	string linea;
	assert(Archivo.is_open());

	while (!Archivo.eof()) {
		getline(Archivo, texto);//Copiamos el contenido de Archivo en la variable texto.
		linea = linea + texto;  //Guardamos el texto de la variable texto en la variable linea.
	}
	Archivo.close();
	cout << linea << endl;

	ofstream Archivo1;  //Como el texto ya existe la funcion ofstream elimina el texto escrito.
	Archivo1.open("Prueba.txt");  //Tmb puede ser Archivo.open("Prueba.txt",ios::out);

    	assert(Archivo1.is_open());
    

	for (int i = 0; i <linea.length(); i++) {
		linea[i] = tolower(linea[i]);   //tolower-->Funcion que pasa contenido de mayuscula a minuscula. 
		Archivo1 << linea[i];           //topupper-->Funcion que pasa contenido de minisculas a mayusculas.
	}
   Archivo1.close();
   	return 0;
}
