#include<iostream>
using namespace std;

int main() {

	const int Numero = 5;
	int Vector1[Numero] = { 1,2,3,4,5 };
	int Vector2[5];

	for (int i = 0; i < 5; i++) {
		Vector2[i] =2*Vector1[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << Vector2[i];
		cout << " ";
	}
	
	return 0;
}