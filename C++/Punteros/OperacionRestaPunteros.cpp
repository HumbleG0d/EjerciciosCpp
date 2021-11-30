#include<iostream>
using namespace std;

int const CAPACIDAD = 6;

int main() {

	int edades[CAPACIDAD] = { 15,19,20,16,18,17 };

	int* P1 = edades + 1;
	int* P2 = edades + 3;
	cout << "---->" <<edades<<"---->"<< P1 <<"----->"<<*P1<< endl;
	cout << "---->" << edades << "---->" << P2<<"---->"<<*P2 << endl;
	cout << "----->" << P2 - P1 << endl;

	return 0;
}
