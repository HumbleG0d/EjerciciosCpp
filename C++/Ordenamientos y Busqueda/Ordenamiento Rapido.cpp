#include <iostream>
 #include <iomanip>
using namespace std;

 const int CAPACIDAD = 10;
 typedef int Arreglo[CAPACIDAD];
void ordenamiento_rapido(Arreglo arreglo, int indice_inicial, int indice_final);
 int separar(Arreglo arreglo, int indice_inicial, int indice_final);
 void mostrar(Arreglo arreglo);

 int main() {
	 Arreglo notas = { 19,9,20,8,10,12,15,11,17,16 };
	 ordenamiento_rapido(notas, 0, CAPACIDAD - 1);
	 mostrar(notas);
	
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
		 if (arreglo[j] < pivote) {                                 //Ordena de menor a mayor
			 aux = arreglo[i_aux];                                  //Para ordenar de mayor a menor cambiar arreglo[j]<pivote por
			 arreglo[i_aux] = arreglo[j];                           //arreglo[j]>pivote
			 arreglo[j] = aux;
			 ++i_aux;
			
		}
		
	}
	 aux = arreglo[i_aux];
	 arreglo[i_aux] = arreglo[indice_final];
	 arreglo[indice_final] = aux;
	 return i_aux; // retornando el indice del pivote
	
}

void mostrar(Arreglo arreglo) {
	 cout << "Notas ordenadas segun el metodo de ordenamiento rapido:" << endl;
	for (int j = 0; j < CAPACIDAD; ++j)
		cout << setw(4) << arreglo[j];
	 cout << endl;
	
}
