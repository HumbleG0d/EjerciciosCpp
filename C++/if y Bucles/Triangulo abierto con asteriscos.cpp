#include<iostream>
using namespace std;
int main(){
	int side,lado, rowPosition, size;
	cout << "Enter the square side: ";
	cin >> lado;
	size = lado;
	while ( lado > 0 ) {
		rowPosition = lado;
		while ( rowPosition > 0 ) {
			if ( lado == side || side == 1 || rowPosition == 1 || rowPosition == lado )
				cout << '*';
			else
				cout << ' ';
			--rowPosition;
		}
		cout << '\n';
		--lado;
	}
	
	cout << endl;

	return 0;
}
