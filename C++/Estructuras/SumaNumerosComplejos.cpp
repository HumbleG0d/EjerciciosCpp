#include<iostream>
using namespace std;

typedef struct{

	int re;
	int im;

}Complejo;

void sumar(Complejo* ptr1, Complejo* ptr2, Complejo* ptr_suma);

int main() {

	Complejo Z = { 1,2 }, W = { 3,5 }, suma;

	cout <<" Z= " <<Z.re<<" + "<<Z.im<<"i"<<endl;
	cout <<" W= " <<W.re <<" + "<<W.im<<"i"<< endl;
	cout << endl;
	sumar(&Z, &W, &suma);
	cout << " Z+W= " << suma.re << " + " << suma.im <<"i"<< endl;

	return 0;
}

void sumar(Complejo* ptr1, Complejo* ptr2, Complejo* ptr_suma) {

	ptr_suma->re = ptr1->re + ptr2->re;
	ptr_suma->im = ptr1->im + ptr2->im;
}
