#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char Estudiante[] = "Sergio Gil ";
	char Resultado[] = "Aprobo";
	char CodigoCurso[] = "BMA01";
    cout<<"Longitud de la cadena Estudiante:"<<strlen(Estudiante);
	cout << "Concatenado la primera cadena con la segunda cadena:" << strcat(Estudiante, Resultado);

	return 0;
}
