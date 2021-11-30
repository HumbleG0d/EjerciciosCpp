#include<iostream>
#include<cmath>
using namespace std;

int main()
{                         //Hlle las soluciones de la ecuacion
                           //ax^2+bx+c=0  x=(-b+o-raiz(b^2-4ac))/2a
	float A,B,C,D,E;
	float X1,X2,X;
	cout<<"Digite un valor para A:"<< endl;
	cin>>A;
	cout<<"Digite un valor para B:"<< endl;
	cin>>B;
	cout<<"Digite un valor para C:"<< endl;
	cin>>C;
	
	D= pow(B,2)-(4*A*C);
	
	if(D>0){
		E=sqrt(D);
		if(D==0){
			X=(-B)/(2*A);
			cout<<"La solucion sera:"<< endl;
			
			cout<<"X= "<<(-B)/(2*A)<< endl;
		}
		else{
			X1=(-B+E)/(2*A);
			X2=(-B-E)/(2*A);
			cout<<"La primera solucuion sera:"<< endl;
			cout<<"X= "<<X1<< endl;
			cout<<"La segunda solucuion sera:"<< endl;
			cout<<"X= "<<X2<< endl;
			
		}
	}
	else{
		cout<<"No hay solucion"<< endl;
	}
	return 0;
}
