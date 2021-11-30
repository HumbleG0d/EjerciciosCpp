#include <iostream>
 #include <iomanip>
 using namespace std;

 const int CAPACIDAD = 10;
 typedef int Arreglo[CAPACIDAD];
 void ordenamiento_por_seleccion(Arreglo arreglo, int indice_inicial);
 int indice_del_minimo(Arreglo arreglo, int indice_inicial);
 void mostrar(Arreglo arreglo);

 int main() {
	 Arreglo notas = { 8,9,20,19,10,12,15,11,17,16 };
	 ordenamiento_por_seleccion(notas, 0);
	 mostrar(notas);
	
}

 void ordenamiento_por_seleccion(Arreglo arreglo, int indice_inicial) {
	 if (indice_inicial == CAPACIDAD - 1) return;
	 else {
		 int indice = indice_del_minimo(arreglo, indice_inicial);
		 int min = arreglo[indice];
		 arreglo[indice] = arreglo[indice_inicial];
		 arreglo[indice_inicial] = min;
		 ordenamiento_por_seleccion(arreglo, indice_inicial + 1);
		
	}
	
}

 int indice_del_minimo(Arreglo arreglo, int indice_inicial) {
	 int indice = indice_inicial;
	 for (int j = indice_inicial + 1; j < CAPACIDAD; ++j) {
		 if (arreglo[j] < arreglo[indice]) {                   //Ordena de menor a mayor , si desea
			 indice = j;                                       //ordenar de mayor a menor cambiar 
		 }                                                     // arreglo[j]<arreglo[indice] por arreglo[j]>arregl[indice]
		
	}
	 return indice;
	
}

 void mostrar(Arreglo arreglo) {
	 cout << "Notas ordenadas segun el metodo de ordenamiento por seleccion:" << endl;
	 for (int j = 0; j < CAPACIDAD; ++j) {
		 cout << setw(4) << arreglo[j];
		
	}
	 cout << endl;
	
}





