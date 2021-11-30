#include<iostream>
#include<time.h>
using namespace std;

typedef struct {

	int x;
	int y;

}Vector;

typedef struct{

	Vector paso;
	Vector direccion;

}Recta ;

void mostrar_pendiente(Recta* ptr);
void verificar(Recta* p_c, Vector* p_v);

int main() {
	srand(time(NULL));
	Recta R;
	Vector V;
	cout << "Digite las coordenadas del punto de paso:" << endl;
	cout << "x:"; cin >> R.paso.x;
	cout << "y:"; cin >> R.paso.y;
    
	cout << "Digite las coordenadas del vector direccion:" << endl;
	
	do {
		cout << "x:"; cin >> R.direccion.x;
		cout << "y:"; cin >> R.direccion.y;
	} while (R.direccion.x==0&&R.direccion.y==0);
	
	cout << "La ecuacion vectorial de la recta:" << endl;
	cout << "L:{(" << R.paso.x << ";" << R.paso.y << ") + " << "t(" << R.direccion.x << ";" << R.direccion.y << ")/t e R}" << endl;
	
	cout << "Ecuacion cartesiana de la reta es:" << endl;
	
	if (R.direccion.y < 0) {
		cout << (-1)*R.direccion.y << "X " << R.direccion.x << "Y " <<  (R.paso.x * R.direccion.y - R.paso.y * R.direccion.x)<<" = 0" << endl;
	}
	else {
		cout << (-1)*R.direccion.y << "X + " << R.direccion.x << "Y " << (R.paso.x * R.direccion.y - R.paso.y * R.direccion.x) <<" = 0"<< endl;
	}
	cout << "Puntos por donde la recta pasa:" << endl;

	int a, b;
	int cont = 0;
	for (long i = 1; i <= 10000; i++) {
		a= -20 + rand() % 41;
		b= -20 + rand() % 41;
		if (a * R.direccion.y + b * R.direccion.x + (R.paso.x * R.direccion.y - R.paso.y * R.direccion.x) == 0) {
			cout << "(" << a << ";" << b << ")" << endl;
			cont++;
		}
		if (cont == 20) {
			break;
		}
	}
	cout << endl;
	mostrar_pendiente(&R);

	cout << "Digite que punto desea verficar si pertenece a la recta" << endl;
	cout << "x`:"; cin >> V.x;
	cout << "y`:"; cin >> V.y;
	cout << endl;
	verificar(&R, &V);
	return 0;
}
void mostrar_pendiente(Recta* ptr) {
	
	if (ptr->direccion.x == 1) {
		 
		cout << "La pendiente de la reta es:" << ptr->direccion.y << endl;
	}
	else {
	
		cout << "La pendiente de la recta es:" << (-1) * (ptr->direccion.y / ptr->direccion.x) << endl;
	}
}
void verificar(Recta* p_c, Vector* p_v) {

	if (p_v->x * p_c->direccion.y + p_v->y * p_c->direccion.x + (p_c->paso.x * p_c->direccion.y - p_c->paso.y * p_c->direccion.x) == 0) {
		cout << "El punto P(" << p_v->x << ";" << p_v->y << ") " << " pertenece a la estructura recta" << endl;
	}
	else {
		cout << "El punto P(" << p_v->x << ";" << p_v->y << ") " << " no pertenece a la estructura recta" << endl;
	}
}
