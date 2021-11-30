#include<iostream>
using namespace std;

typedef struct {

	int x;
	int y;

}Vector;

typedef struct {

	Vector centro;

	int radio;

}Circunferencia;

int main() {

	Circunferencia cir = { 2,3,4 };

	cout << "El radio de la circunferencia es:" << cir.radio << endl;
	cout << "La coordenada x es:" << cir.centro.x << endl;
	cout << "La coordenada y es:" << cir.centro.y << endl;

	return 0;
}
