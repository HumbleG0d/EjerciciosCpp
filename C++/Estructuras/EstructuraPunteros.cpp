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

	Circunferencia cir = { 2,3,4 }; //{x,y,radio}

	Circunferencia* ptr = &cir;


	cout << "Valor del primer elemento(COORDENADA x): " <<(*ptr).centro.x<<"   Otra Manera: "<<ptr->centro.x<<endl;
	cout << "Valor del segundo elemento(COORDENADA y): " << (*ptr).centro.y <<"   Otra Manera:"<<ptr->centro.y<< endl;
	cout << "Valor del tercer elemento(RADIO): " << (*ptr).radio <<"   Otra Manera: "<<ptr->radio<< endl;
	return 0;
}
