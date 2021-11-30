#include<iostream>
#include<string>
#include<fstream>
#include<cassert>
using namespace std;

int main() {

	ifstream Archivo;
	Archivo.open("Leeme.txt");
	
	string texto;
	string linea;

	assert(Archivo.is_open());  //Equivlae a if(Archivo.fail());

	while (!Archivo.eof()) {
		getline(Archivo, texto);  //Copiamos el contenido de leeme.txt en texto.
		linea = linea + texto;    //Guardamos el contenido texto en linea.
	}
	Archivo.close();
	cout << linea << endl;   //leemos el texto leeme.

	ofstream Archivo1;
	Archivo1.open("NuevoArchivo.txt"); //creamos un nuevo archivo.
	string p;
	
	assert(Archivo1.is_open());   //Equivlae a if(Archivo1.fail());
	
	for (int i = 0; i < linea.length(); i++) {
		p[i]= linea[i];  //Guardamos los caracteres en p
	}
	for (int i = linea.length()-1; i >= 0; i--) {
		Archivo1 << p[i]; //Se copia el texto en forma inversa en el nuevo archivo creado.
	}

	Archivo1.close();

	return 0;
}
