 #include <iostream>
 using namespace std;
 const int CAPACIDAD = 3;

int main() {
 /* dos tipos de arreglos. */
 int notas[CAPACIDAD];
 double promedios[CAPACIDAD];

 cout << "sizeof(int)\t\t=\t" << sizeof(int) << endl;
 cout << "sizeof(double)\t=\t" << sizeof(double) << endl;

 cout << "\t\t\t\tnotas\t\t\tpromedios\n";
 cout << "===========================================\n";
 /* Imprimiendo la direccin de cada elemento de los arreglos. */
 for (int j = 0; j < CAPACIDAD; ++j) {
 cout << "Elemento " << j << ":\t" <<notas
 cout << "\t" << promedios + j << endl;
 }
 cout << "===========================================";
 }
