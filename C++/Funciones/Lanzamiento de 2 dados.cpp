#include<iostream>
#include<time.h>
using namespace std;

int Lanzamiento_dados(int a, int b);
int Lanzamiento_dados2(int c, int d);
int Lanzamiento_dados3(int e, int f);

int main() {

	int lansamiento1, lansamiento2;

	srand(time(NULL));
	float cont = 0.0;
	for (int i = 1; i <= 100; i++) {

		lansamiento1 = 1 + rand() % 6;
		lansamiento2 = 1 + rand() % 6;
	
		if (Lanzamiento_dados(lansamiento1, lansamiento2) % 5 == 0) {
			cont++;
		}
    }
	float x;
	x= cont / 100;
	cout << "La division1 pedida es:" <<x<<endl;

	for (int j = 1; j <= 100; j++) {

		lansamiento1 = 1 + rand() % 6;
		lansamiento2 = 1 + rand() % 6;

		if (Lanzamiento_dados2(lansamiento1, lansamiento2) % 5 == 0) {
			cont++;
		}
	}
	float x2;
	x2 = cont / 1000;
	cout << "La division2 pedida es:" << x2<<endl;

	for (int p = 1; p <= 100; p++) {

		lansamiento1 = 1 + rand() % 6;
		lansamiento2 = 1 + rand() % 6;

		if (Lanzamiento_dados3(lansamiento1, lansamiento2) % 5 == 0) {
			cont++;
		}
	}
	float x3;
	x3 = cont / 100000;
	cout << "La division3 pedida es:" << x3<<endl;



	return 0;
}

int  Lanzamiento_dados(int a, int b) {
	
	return a + b;
}

int Lanzamiento_dados2(int c, int d) {

	return c + d;
}

int Lanzamiento_dados3(int e, int f) {

	return e + f;
}



