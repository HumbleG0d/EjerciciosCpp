#include<iostream>
using namespace std;

int main() {
	
	#include<iostream>
using namespace std;

void suma_vectores(int a, int b, int c,int d,int e,int f);
void resta_vectores(int a, int b, int c, int d, int e, int f);
void producto_vectores(int a, int b, int c, int d, int e, int f);

int main() {
	int V1, V2;
	int X1, X2, X3, Y1, Y2, Y3;

	cout << "Digite el vector 1 que pertenece a R3:" << endl;
	
	cout << "X1:";  cin >> X1;
	cout << "X2:";  cin >> X2;
	cout << "X3:";  cin >> X3;

	cout << "Digite el vector 2 que tambien pertenece a R3:" << endl;
	
	cout << "Y1:";  cin >> Y1;
	cout << "Y2:";  cin >> Y2;
	cout << "Y3:";  cin >> Y3;

	system("cls");

	cout << "Los vectores digitados son:" << endl;
	cout << "V1:" << "(" << X1 << "," << X2 << "," << X3 << ")" << endl;
	cout << "V2:" << "(" << Y1 << "," << Y2 << "," << Y3 << ")" << endl;

	cout << "La suma de vectores es:" << endl;
	suma_vectores(X1, X2, X3, Y1, Y2, Y3);

	cout << "La diferencia de vectores es:" << endl;
	resta_vectores(X1, X2, X3, Y1, Y2, Y3);

	cout << "El producto de interno y producto vectorial son:" << endl;
	producto_vectores(X1, X2, X3, Y1, Y2, Y3);

	return 0;
}

void suma_vectores(int a, int b, int c, int d, int e, int f) {

	cout << "(" << a + d << "," << b + e << "," << c + f << ")"<<endl;
}

void resta_vectores(int a, int b, int c, int d, int e, int f) {

	cout << "(" << a - d << "," << b - e << "," << c - f << ")" << endl;

}

void producto_vectores(int a, int b, int c, int d, int e, int f) {
	
	cout <<"Producto Interno:"<< a * d + b * e + c * f << endl;
	cout << "Producto Vectorial:" << "(" << b * f - c * e << "," << c * d - a * f << "," << a * e - b * f << ")"<<endl;

}

	return 0;
}
