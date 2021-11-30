#include<iostream>
#include<time.h>
using namespace std;

int juego_craps(int a, int b);

int main() {

	srand(time(NULL));

	int Dado1, Dado2;

	Dado1 = 1 + rand() % 6;
	Dado2 = 1 + rand() % 6;

	cout << "Su puntaje es de:" <<juego_craps(Dado1, Dado2) << endl;

	if (juego_craps(Dado1, Dado2) == 7 || juego_craps(Dado1, Dado2) == 11) {
		cout << "Usted gano su apuesta" << endl;
	}
	else if ((juego_craps(Dado1, Dado2) == 2 || juego_craps(Dado1, Dado2) == 3) || juego_craps(Dado1, Dado2) == 12) {
		cout << "Usted perdio su apuesta(hizo Craps)" << endl;
	}
	else {
		cout << "Usted establecio un punto,VUELVA A LANZAR LOS DADOS HASTA CONSEGUIRT OTRO PUNETO O UN PUNTAJE DE 7" << endl;
		Dado1 = 1 + rand() % 6;
		Dado2 = 1 + rand() % 6;
		if (juego_craps(Dado1, Dado2) == 7) {
			cout << "Su nuevo puntaje es de:" << juego_craps(Dado1, Dado2)<<endl;
			cout << "Usted gano su apuesta" << endl;
		}
		else if (juego_craps(Dado1, Dado2) == 4 || juego_craps(Dado1, Dado2) == 5 || juego_craps(Dado1, Dado2) == 6 || juego_craps(Dado1, Dado2) == 8 || juego_craps(Dado1, Dado2) == 9 || juego_craps(Dado1, Dado2) == 10) {
			cout << "Su nuevo puntaje es de:" << juego_craps(Dado1, Dado2) << endl;
			cout << "Usted Gano su apuesta,FELICITACIONES" << endl;
		}
		else {
			cout << "Su puntaje es de:" << juego_craps(Dado1, Dado2) << endl;
		}
	}
	
	return 0;
}

int juego_craps(int a, int b) {
	
	return a + b;
}
