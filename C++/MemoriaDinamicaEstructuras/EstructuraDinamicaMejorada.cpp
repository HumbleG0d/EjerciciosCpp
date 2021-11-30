#include<iostream>
#include<limits>
#include<iomanip>

using namespace std;


const int CAPACIDAD = 20;

typedef struct {

	char nombre[CAPACIDAD];
	int precio;

}Producto;

void ingresar(Producto* p, int n);

int main() {

	int Tamanio = 0;
	Producto* ptr = nullptr;
	cout << "Digite el numero de prodcutos:"; cin >> Tamanio; cin.get();

	ptr = new Producto[Tamanio];

	ingresar(ptr, Tamanio);

	delete[] ptr;
	ptr = nullptr;

	return 0;
}
void ingresar(Producto* p, int n) {

	for (int i = 0; i < n; i++) {
		cout << "Nombre del producto:"; cin.getline(p[i].nombre, CAPACIDAD, '\n');
		cout << "Precio de producto:"; cin >> (p + i)->precio;
		cin.ignore(numeric_limits<int>::max(), '\n'); //Limpia el buffer.
	}

}
