#include<iostream>
#include<math.h>
using namespace std;

typedef struct {

	int re;
	int im;

}Complejo;

void sumar(Complejo* ptr1, Complejo* ptr2, Complejo* ptr_suma);
void conjugar(Complejo* ptr, Complejo* ptr_conjugado);
void multiplicar(Complejo* ptr1, Complejo* ptr2, Complejo* ptr_producto);
void modulo(Complejo* ptr);

int main() {

	Complejo Z = { 1,2 }, W = { 3,5 }, SUMA,CONJUGADA,PRODUCTO;
	
	cout << "Z = " << Z.re << " + " << Z.im << "i" << endl;
	cout << "W = " << W.re << " + " << W.im << "i" << endl;

	cout << "Z+W:"<<endl;
	sumar(&Z, &W, &SUMA);
	cout << endl;
	cout << "Conjugada de Z+W:"<<endl;
	conjugar(&SUMA, &CONJUGADA);
	cout << endl;
	cout << "Z.W:" << endl;
	multiplicar(&Z, &W, &PRODUCTO);
	cout << endl;
	cout << "|Z+W|:" << endl;
	modulo(&SUMA);
	return 0;
}

void sumar(Complejo* ptr1, Complejo* ptr2, Complejo* ptr_suma) {

	ptr_suma->re = ptr1->re + ptr2->re;
	ptr_suma->im = ptr1->im + ptr2->im;
	cout << ptr_suma->re << " + " << ptr_suma->im << "i"<<endl;
}
void conjugar(Complejo* ptr, Complejo* ptr_conjugado) {

	ptr_conjugado->re = ptr->re;
	ptr_conjugado->im = (-1) * ptr->im;
	cout << ptr_conjugado->re << " " << ptr_conjugado->im << "i" << endl;

}
void multiplicar(Complejo* ptr1, Complejo* ptr2, Complejo* ptr_producto) {

	ptr_producto->re = ptr1->re * ptr2->re + ptr1->im * ptr2->im * (-1);
	ptr_producto->im = ptr1->re * ptr2->im + ptr1->im * ptr2->re;
	cout << ptr_producto->re << " + " << ptr_producto->im << "i" << endl;
}
void modulo(Complejo* ptr) {
	float Modulo;
	Modulo= sqrt(pow(ptr->im, 2) + pow(ptr->re, 2));
	cout << Modulo;
}

