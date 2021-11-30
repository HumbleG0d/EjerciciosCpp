#include<math.h>

using namespace std;

void mostrar(void* P, void* Q);


int main() {

	int P = 30, Q = 40;

	mostrar(&P, &Q);
	mostrar(&Q, &P);
	mostrar(&P, &P);
}
void mostrar(void* P, void* Q) {

	if (P > Q) {
		cout << "P es mayor que Q" << endl;
	}
	else if(P == Q) {
		cout << "P es igual a Q" << endl;
	}
	else {
		cout << "P es menor que Q" << endl;
	}


}
