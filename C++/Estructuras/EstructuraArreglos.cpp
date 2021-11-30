#include<iostream>
#include<cstdio>
using namespace std;

typedef struct {

	char nombre[20];
	int nota;

}Alumno;

void inicializar(Alumno* ptr);
const int CAP=3;
int main() {
	
	
	Alumno alumno[CAP];

	inicializar(alumno);

	return 0;
}
void inicializar(Alumno* ptr) {
	int n;
	for (int i = 0; i < CAP; i++) {
		fflush(stdin);
		cout << "Alumno " << i + 1 << ": "; cin.getline(ptr[i].nombre, 20);
	}

}

