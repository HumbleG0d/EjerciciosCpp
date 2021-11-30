#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
                      //Abrimos un texto escrito en mayuscula(Leeme) y pasamos su contenido en  minusculas pero en otro archivo(NuevoArchivo).

	ifstream Archivo;
	Archivo.open("Leeme.txt");

	string texto;
	string linea;

	if (Archivo.fail()) {
		cout << "No se pudo abrir el archivo." << endl;
		exit(1);
	}

	while (!Archivo.eof()) {
		getline(Archivo, texto);
		linea = linea + texto;
	}
	Archivo.close();
	cout << linea<<endl;

	ofstream Archivo1;
	Archivo1.open("NuevoArchivo.txt");

	for (int i = 0; i < linea.length(); i++) {
		linea[i] = tolower(linea[i]);
		Archivo1 << linea[i];
	}

    Archivo1.close();


	return 0;
}
