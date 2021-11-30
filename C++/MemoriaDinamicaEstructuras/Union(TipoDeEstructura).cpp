#include<iostream>

using namespace std;

typedef union {

	int entero;
	int flotante;

}U;


int main() {

	U uni;

	cout << "Enter a number:"; cin >> uni.entero;
	cout << "Enter a number:"; cin >> uni.flotante;
	cout << "The sum of the two number is:" << uni.entero + uni.flotante << endl;;

	return 0;
}
