#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;

typedef struct {

	int x;
	int y;

}Vector;
typedef struct {

	Vector v;
	int r;

}Circunferencia;

void area(Circunferencia* pt, int N);
void vector(Circunferencia* pt,Vector* pv, int N);
int main() {
	srand(time(NULL));

	int n = 0;
	cout << "Enter the number of strcutures:"; cin >> n;
	Circunferencia* c = nullptr;
	c = new Circunferencia[n];
	Vector* v = nullptr;
	v = new Vector[n];


	area(c, n);
	cout << endl;
	cout << endl;
	vector(c, v, n);
	delete[] c;
	c = nullptr;
	delete[] v;
	v = nullptr;
	return 0;
}
void area(Circunferencia* pt, int N) {
	
	float area;

	for (int i = 0; i < N; i++) {
		pt[i].v.x = 0 + rand() % 10;
		pt[i].v.y = 0 + rand() % 10;
		pt[i].r = 1 + rand() % 20;
		area = 3.1416 * pow(pt->r, 2);
		cout << "Circle number " << i + 1 << ":" << "( X - " << pt[i].v.x << " )^2 + " << "( Y - " << pt[i].v.y << " )^2 = "<<pow(pt[i].r,2) << endl;
		cout << "Circle area number " << i + 1 << ":" << area << endl;
	}

}
void vector(Circunferencia* pt, Vector* pv, int N){

	for (int j = 0; j < N; j++) {
		pv[j].x = 0 + rand() % 10;
		pv[j].y = 0 + rand() % 10;
		if (pow(pv[j].x - pt[j].v.x, 2) + pow(pv[j].y - pt[j].v.y, 2) == pt[j].r * pt[j].r) {
			cout << "el " << j + 1 << "esimo elemento del vector esta dentro del Circunferencia " << endl;
		}
		else if(pow(pv[j].x - pt[j].v.x, 2) + pow(pv[j].y - pt[j].v.y, 2) != pt[j].r * pt[j].r){
			cout << "el " << j + 1 << "esimo elemento del vector no esta dentro del Circunferencia " << endl;
		}
		
	}

}

