#include<iostream>
#include<time.h>
using namespace std;

typedef struct {

	int Re;
	int Im;

}Complejo;

void complejo(Complejo* pt, int N);

int main() {
	srand(time(NULL));

	int n = 0;
	cout << "Digite el numero de complejos:"; cin >> n;
	Complejo* c = nullptr;
	c = new Complejo[n];

	complejo(c, n);

	delete[] c;
	c = nullptr;


	return 0;
}
void complejo(Complejo* pt, int N) {
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < N; i++) {
		pt[i].Re = 1 + rand() % 9;
		pt[i].Im = 1 + rand() % 9;
		sum1 = sum1 + pt[i].Re;
		sum2 = sum2 + pt[i].Im;
		cout << "C" << i + 1 << ": " << pt[i].Re << " + " << pt[i].Im << "i" << endl;;
	}
	cout << endl;
	cout << "Suma de los "<<N<<" complejos: " << sum1 << " + " << sum2 << "i";

}
