
#include <iostream>
#include <iomanip>
using namespace std;

const int FILAS = 5;
const int COLUMNAS = 6;
typedef int Arreglo[FILAS];
typedef int Matriz[FILAS][COLUMNAS];
void ordenamiento_por_columnas(Matriz matriz);
void mostrar(Matriz matriz);
void ordenamiento_rapido(Arreglo arreglo, int indice_inicial, int indice_final);
int separar(Arreglo arreglo, int indice_inicial, int indice_final);

int  main() {
    Matriz notas =
            {{3,17,7,8,10,13},
             {20,15,4,9,6,14},
             {12,18,16,19,11,5},
             {11,14,18,20,17,18},
             {10,19,12,17,20,16}};
    cout << "Matriz de notas:" << endl;
    mostrar(notas);
    ordenamiento_por_columnas(notas);
    cout << "\nMatriz de notas ordenadas por columnas:" << endl;
    mostrar(notas);
}

void ordenamiento_por_columnas(Matriz matriz) {
	int matriz_t[COLUMNAS][FILAS];
	for (int j = 0; j < COLUMNAS; ++j) 
		for (int k = 0; k < FILAS; ++k)               //Ordena las columnas de mayor a menor 
			matriz_t[j][k] = matriz[k][j];
    for (int j = 0; j < COLUMNAS; ++j)
        ordenamiento_rapido(matriz_t[j],0,FILAS-1);
    for (int j = 0; j < COLUMNAS; ++j) 
		for (int k = 0; k < FILAS; ++k) 
			matriz[k][j] = matriz_t[j][k];
}

void mostrar(Matriz matriz) {
    for (int j = 0; j < FILAS; ++j) {
        for (int k = 0; k < COLUMNAS; ++k)
            cout << setw(4) << matriz[j][k];
        cout << endl;
    }
}

void ordenamiento_rapido(Arreglo arreglo, int indice_inicial, int indice_final) {
    if (indice_inicial < indice_final) {
        int i_pivote = separar(arreglo, indice_inicial, indice_final);
        ordenamiento_rapido(arreglo, indice_inicial, i_pivote - 1);
        ordenamiento_rapido(arreglo, i_pivote + 1, indice_final);
    }
}

int separar(Arreglo arreglo, int indice_inicial, int indice_final) {
    int pivote = arreglo[indice_final];
    int i_aux = indice_inicial;
    int aux = 0; // variable auxiliar para hacer los intercambios
    for (int j = indice_inicial; j < indice_final; ++j) {
        if (arreglo[j] > pivote) {
            aux = arreglo[i_aux];                                 //Ordena columnas de mayor a menor si desea de menor a mayor 
            arreglo[i_aux] = arreglo[j];                          //cambiar arreglo[j]>pivote por arreglo[j]<pivote;
            arreglo[j] = aux;
            ++i_aux;
        }
    }
    aux = arreglo[i_aux];
    arreglo[i_aux] = arreglo[indice_final];
    arreglo[indice_final] = aux;
    return i_aux; // retornando el indice del pivote
}

