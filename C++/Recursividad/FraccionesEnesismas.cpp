#include<iostream>
using namespace std;
float FraccionContinua(int x, int cont);
int main() {
int Numero;
int cont1 = 0.0;

     do {
          cout << "Digite el numero de elementos de la fraccion:"; cin >> Numero;
        } while (Numero <= 2);
         cout << "El resultado es:" << FraccionContinua(Numero, cont1);
                 return 0;
         }
float FraccionContinua(int x, int cont) {
int Pos = x;
int cont2 = cont;
float Res;
if (Pos == 1) {
Res = cont2+1;
}
else {
if (cont2 == 0) {
Res = 2 - (2 / FraccionContinua(x - 1, cont +1));
   }
else if (cont2 == 1) {
Res = 2 - (2 + cont2) / FraccionContinua(x -1, cont + 1);
    }
else {
Res = 1 + cont2 - (2 + cont2) /FraccionContinua(x - 1, cont + 1);
    }
   }
return Res;
}
