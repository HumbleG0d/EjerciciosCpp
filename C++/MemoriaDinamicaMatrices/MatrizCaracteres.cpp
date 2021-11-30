#include <iostream>
#include <cstring>
#include<time.h>
using namespace std;
void generar_saludo(char** p, int capacidad);

int main() {
    srand(time(NULL));
    int n = 3;

    char** arr = new char* [n];          // asignando espacio para el arreglo de direccines
    arr[0] = new char[6]{ 'p','i','c','k','a','\0' };
    arr[1] = new char[12]{ 'p','i','c','k','a',' ','p','i','c','k','a','\0' };
    arr[2] = new char[9]{ 'p','i','c','k','a','c','h','u','\0' };

    generar_saludo(arr, n);

    delete[] arr[2];         // liberando espacio asignado para cada fila
    delete[] arr[1];
    delete[] arr[0];
    delete[] arr;            // liberando espacio asignado para la matriz de direcciones
}

void generar_saludo(char** p, int n) {
    int N;
    for (int j = 0; j < n; ++j) {
        N = 0 + rand() % 3;
        cout << p[N] << endl;
    }
}
