#include<iostream>
#include<math.h>
using namespace std;

typedef struct {

	int h;
	int k;

}Vector;

typedef struct {

	Vector punto;
	int radio;

}Circunferencia;

void verificar(Circunferencia* p_c, Vector* p_v);
void verificar2(Circunferencia* ptr1, Circunferencia* ptr2);
int main() {
     
	Circunferencia c = { 2,3,1 }, c1 = { 4,1,3 };
	Vector v = { 4,3 };
  
	cout << "La ecuacion de la circunferencia es:" << endl;
	cout <<"C:"<< "(X - " << c.punto.h << ")^2" << " + " << "(Y - " << c.punto.k << ")^2" << " = " << pow(c.radio, 2) << endl;
	cout << "C1:" << "(X - " << c1.punto.h << ")^2" << " + " << "(Y - " << c1.punto.k << ")^2" << " = " << pow(c1.radio, 2) << endl;
	cout << "Punto a verificar P(" << v.h << ";" << v.k << ")" << endl;

	verificar(&c, &v);
	cout << endl;
	verificar2(&c, &c1);
	return 0;
}
void verificar(Circunferencia* p_c, Vector* p_v) {

	if (pow(p_v->h - p_c->punto.h, 2) + pow(p_v->k - p_c->punto.k, 2) == 1) {
		cout << "El punto P pertenece a la circunferencia" << endl;
	}
	else {
		cout << "El punto  P no pertenece a la circunferencia" << endl;
	}
}
void verificar2(Circunferencia* ptr1, Circunferencia* ptr2) {
	float distancia;
	distancia = sqrt(pow(ptr1->punto.h - ptr2->punto.h, 2) + pow(ptr1->punto.k - ptr2->punto.k, 2));
	if (ptr1->radio + ptr2->radio >distancia) {
		cout << "Las circunferencias se conrtan." << endl;
	}
	else {
		cout << "Las circunferencias no se cortan." << endl;
	}
}
