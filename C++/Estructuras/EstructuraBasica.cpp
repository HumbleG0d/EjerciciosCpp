#include<iostream>
using namespace std;

typedef struct {

	int x;
	int y;

}Vector;

int main() {

	Vector v = { 2,3 };

	cout <<"La coordenada x es:" << v.x<<endl;
	cout << "La cordenada y es :" << v.y<<endl;


	return 0;
}
