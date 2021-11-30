#include <iostream>
 #include <iomanip>
 using namespace std;

 const int CAPACIDAD = 10;
 typedef int Arreglo[CAPACIDAD];
 void ordenamiento_burbuja(Arreglo arreglo, int indice_final);

 void mostrar(Arreglo arreglo);

 int main() {
	 Arreglo notas = { 8,9,20,19,10,12,15,11,17,16 };
	
	 ordenamiento_burbuja(notas, CAPACIDAD - 1);
	 mostrar(notas);
}

 void ordenamiento_burbuja(Arreglo arreglo, int indice_final) {
	 
	 if (indice_final == 0) {
		 return;
	 }
	 else {
		 for (int i = 0; i < indice_final; i++) {
			 if (arreglo[i] > arreglo[i + 1]) {    //Ordena de menor a mayor
				 int aux = arreglo[i];             //si desea que ordene de mayor a menor
				 arreglo[i] = arreglo[i + 1];      //cambiar arreglo[i]>arreglo[i+1] por arreglo[i]<arreglo[i+1]
				 arreglo[i + 1] = aux;
			 }
		 }
		 ordenamiento_burbuja(arreglo, indice_final - 1);
	 }

}

 void mostrar(Arreglo arreglo) {
	 
	 for (int i = 0; i < CAPACIDAD; i++) {
		 cout << setw(3) << arreglo[i] << setw(3);
	}
}
