#include<iostream>
#include<math.h>
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
	float Area = 0;
	Circunferencia cir = { 2,3,4 };

	Area = 3.1416 * pow(cir.radio,2);

	cout << "El area de la circunferecia es: " << Area << "u^2";

	return 0;
}
