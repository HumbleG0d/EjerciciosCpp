#include<iostream>
using namespace std;

int main(){
	
	int A,B,opcion,sum,producto;
	cout<<"Digite un numero:"<< endl;   cin>>A;
	cout<<"Diigte otro numero:"<< endl;  cin>>B;
	cout<<"Eliga una opcion"<< endl;
	cout<<"Suma=opncion 1"<< endl;
	cout<<"Producto=opcion 2"<< endl; 
	cout<<"Opcion:"<< endl; cin>>opcion;
	sum=A+B;
	producto=(A*B);
	if(opcion==1){
		cout<<"Suma="<<sum;
	}
	else if(opcion==2){
		cout<<"Producto="<<producto;
	}
	else{
		cout<<"Opcion no valida"<<endl;
	}
	return 0;
}
