#include<iostream>
using namespace std;

int main() {

	char H[] = { 'q','u','e' };
    char O[] = { 'r', 'i', 'c', 'a' };
	char L[] = { 'v','e','n','e','c','a' };
	char A[13];

	for (int i = 0; i < 3; i++) {
		A[i] = H[i];
	}

	for (int i = 3; i < 7; i++) {
		A[i] = O[i-3];
	}

	for (int i = 7; i < 13; i++) {
		A[i] = L[i-7];
	}

	for (int i = 0; i < 13; i++) {
		cout << A[i];
		cout << " ";
	}
	
	return 0;
}