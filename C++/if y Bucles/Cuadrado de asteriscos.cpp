#include<iostream>
using namespace std;

int main(){
	
int lado;
	do{
		cout << "Ingrese el lado del cuadrado (2-20)";
		cin >> lado;
	}while(lado < 2 || lado > 20);
	
	for(int f = 1; f <= lado; f++){
		for(int c = 1; c <= lado; c++)
			cout << "*";
		cout << endl;
	}
	return 0;
}

