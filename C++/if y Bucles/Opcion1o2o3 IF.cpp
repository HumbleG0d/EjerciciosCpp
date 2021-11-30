#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	long B,H,Ar1,Ar2,Ar3;
	int opcion;
	cout<<"Digite el valor de la base:"<<endl;    cin>>B;
	cout<<"Digite el valor de la altura:"<<endl;  cin>>H;
	
	Ar1=B*B;
	Ar2=B*H;
	Ar3=(B*H)/2;
	
	cout<<"Eliga una opcion:"<<endl;
	cout<<"Area del cuadrado=opcion1"<<endl;
	cout<<"Area del rectangulo=opcion2"<<endl;
    cout<<"Area del triangulo=opcion3"<<endl;  
    cout<<"Opcion:";    cin>>opcion;

	
	if(opcion==1){
		cout<<"El area del cuadrado es:"<<Ar1;
	}
	else if(opcion==2){
		cout<<"El area del rectangulo es:"<<Ar2;
	}
	else if(opcion==3){
		cout<<"El area del triangulo es:"<<Ar3;
	}
	else{
		cout<<"Opcion no valida Gaaa!"<<endl;
	}
	return 0;
}
