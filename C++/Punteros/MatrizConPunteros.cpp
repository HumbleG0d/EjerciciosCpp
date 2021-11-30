#include <iostream>
 #include <iomanip>
 using namespace std;
 const int FILAS = 2;
 const int COLUMNAS = 3;
 typedef int arreglo[COLUMNAS];
 void mostrar(arreglo * p_arreglo);

 int main() {
	 arreglo notas[FILAS] = { {15,16,17},{18,19,20} };
 mostrar(notas);
	
}

 void mostrar(arreglo * p_arreglo) {
	 for (int j = 0; j < FILAS; ++j) {
		 cout << "Fila " << j << ":";
		 for (int k = 0; k < COLUMNAS; ++k) {
			 cout << setw(4) << p_arreglo[j][k];
			
		}
		 cout << endl;
		
	}

}
