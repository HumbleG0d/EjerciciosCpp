#include <fstream>
#include <iostream>
#include <cassert>                      // assert()
using namespace std;

typedef struct {
    int x;
    int y;
} Vector;

int main() {
    char fileName[80] = "";

    cout << "Please enter the file name: ";
    cin >> fileName;
    ofstream fout(fileName, ios::binary);   // establish connection,
    assert(fout.is_open());               // and check for success

    Vector v = { 5,12 };
    fout.write(reinterpret_cast<char*>(&v), sizeof v); //Guardamos en disco la estrucutura V.
    fout.close();

    //Leemos el archivo.
 
    ifstream fin(fileName, ios::binary);    // establish connection,
    assert(fin.is_open());                // and check for success

    Vector v2 = { 3,4 };

    cout << "v2.x\t:\t" << v2.x << endl;
    cout << "v2.y\t:\t" << v2.y << endl;
    fin.read(reinterpret_cast<char*>(&v2), sizeof v2);  //Pasamos el contenido gurdado de v a v2.
    cout << "v2.x\t:\t" << v2.x << endl;
    cout << "v2.y\t:\t" << v2.y << endl;
    fin.close();

    return 0;
}
