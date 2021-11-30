#include<iostream>
using namespace std;

void Intercambiar(int* x, int* y);


int main() {

	int a = 8;
	int b = 9;

	Intercambiar(&a, &b);

	return 0;
}
void Intercambiar(int* x, int* y) {

	int Sum;

	Sum = *x + *y;

	cout << "Ls suma de los dos numeros es:" << Sum << endl;

}
