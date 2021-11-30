#include<iostream>
#include<iomanip>

using namespace std;


void acumular(int* x, int* y);


int main() {
	int y = 10;
	int x = 20;
	
	acumular(&x, &y);
	cout << "X:" << setw(3) << x << "\t" << "Y:" << setw(3) << y << endl;
	
	acumular(&y, &x);
	cout << "X:" << setw(3) << x << "\t" << "Y:" << setw(3) << y << endl;

	return 0;
}
void acumular(int* p1, int* p2) {
	*p1 = *p2 + *p1;
}
