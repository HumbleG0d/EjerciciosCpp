 #include <iostream>
 using namespace std;
 const int CAPACIDAD = 3;

 int main() {
	 /* dos tipos de arreglos. */
	 int notas[CAPACIDAD] = { 1,2,3};
	 int* p_int = notas;
	 
	
		 cout << "\t\tnotas";
	 cout << "===========================================\n";
	 /* Imprimiendo la direccin de cada elemento de los arreglos. */
		 for (int j = 0; j < CAPACIDAD; ++j) {
		 cout << "Elemento " << j << ":\t" << notas<<"   "<<notas+j<<"    "<<*(notas+j)<<endl;
		 cout << "Elemento " << j << ":\t" << p_int << "   " << p_int + j <<"  "<<*(p_int+j)<< endl;
		     
	     }
	cout << "===========================================";
	
}
