#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	int numero = 20;
	void* p_l = &numero;
	int* p_int = &numero;
	int** p_i = &p_int; /* Puntero a Puntero */
	
	cout << "---->" << numero << endl;
	cout << "----->" << &numero << endl;
	cout << "----->" << p_int << endl;
	cout << "----->" << p_l << endl;
	cout << "----->" << &p_int << endl;
	cout << "---->" << p_i << endl;

	return 0;
}
