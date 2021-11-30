#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;

const int FILA= 5;
const int COLUMNA = 5;
typedef int Matriz[FILA][COLUMNA];


int main() {

	srand(time(NULL));

	Matriz Matriz;

	for (int i = 0; i < FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			Matriz[i][j] = 0 + rand() % 20;
			cout << setw(4) <<Matriz[i][j] << setw(4);
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i <FILA; i++) {
		for (int j = 0; j < COLUMNA; j++) {
			cout << setw(14) << Matriz + i + j <<"---->"<< *(*(Matriz + i) + j) << setw(14);
		}
		cout << endl;
	}


	
	return 0;
}
