#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
const int CAPACIDAD = 20;

typedef struct {
    char nombre[CAPACIDAD];
    int precio;
} Producto;

int main() {
    Producto* ptr = new Producto;
    ptr[0].precio = 3; // tb se puede usar ptr->precio = 3;
    cout << "nombre del producto\t:\t";
    cin.getline(ptr[0].nombre, CAPACIDAD, '\n');
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\t\t\t" << setw(CAPACIDAD) << "Nombre" << "\tPrecio\n";
    cout << "Item\t:\t" << setw(CAPACIDAD) << ptr[0].nombre << "\t\t" << ptr[0].precio << endl;
    delete ptr; ptr = nullptr;
}
