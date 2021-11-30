#include<iostream>
using namespace std;

void Intercambiar(int* p1, int* p2);


int main() {

	int p1 = 10;
	int p2 = 12;

	Intercambiar(&p1, &p2);

	return 0;
}

void Intercambiar(int* p1, int* p2) {

	int A;
	A = *p1;
	*p1 = *p2;
	*p2 = A;
	cout <<"p1= "<< *p1 << "---"<<"p2= "<< *p2;
}
