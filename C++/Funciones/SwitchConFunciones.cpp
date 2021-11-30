#include<iostream>
#include<cmath>
using namespace std;

const float Pi = 3.1416;
void AreaCirculo();
void AreaCuadarado();
void AreaRectangulo();
void AreaTriangulo();

int main() {

	char Opcion;
	cout << "Opcio a--->Area del Circulo" << endl;
	cout << "Opcion b--->Area del Cuadrado" << endl;
	cout << "Opcion c--->Area del Rectangulo" << endl;
	cout << "Opcion d--->Area del Triangulo" << endl;
	cout <<"Digite la opcion:"; cin>>Opcion;
	switch (Opcion) {
	case 'a':
		AreaCirculo();
		break;
	case 'b':
		AreaCuadarado();
		break;
	case 'c':
		AreaRectangulo();
		break;
	case 'd':
		AreaTriangulo();
		break;
	default:
		cout << "Opcion Incorrecta" << endl;
	}

	return 0;
}
void AreaCirculo() {
	float Area, Radio;
	do {
		cout << "Digite el Radio del circulo:"; cin >> Radio;
	} while (Radio <= 0);
	Area = Pi * pow(Radio, 2);
	cout << "El Area del circulo es:" << Area << endl;
}

void AreaCuadarado() {
	float Lado, Area;
	do {
		cout << "Digite el lado del cuadrado:"; cin >> Lado;
	} while (Lado <= 0);
	Area = pow(Lado, 2);
	cout << "El Area del cuadrado es:" << Area << endl;
}

void AreaRectangulo() {
	float Ancho, Base, Area;
	do {
		cout << "Digite el Ancho del rectangulo:"; cin >> Ancho;
		cout << "Digite la Base del rectangulo:"; cin >> Base;
	} while (Ancho <= 0 || Base <= 0);
	Area = Ancho * Base;
	cout << "El Area del rectangulo es:" << Area<<endl;
}

void AreaTriangulo() {
	float Altura, Base, Area;
	do {
		cout << "Digite la altura del triangulo:"; cin >> Altura;
		cout << "Digite la base del triangulo:"; cin >> Base;
	} while (Altura <= 0 || Base <= 0);
	Area = Altura * Base / 2;
	cout << "El Area del triangulo es:" << Area << endl;
}


