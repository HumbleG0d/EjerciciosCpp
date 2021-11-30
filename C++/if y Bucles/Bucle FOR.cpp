#include<iostream>
using namespace std;

int main()
{
	float num,sum=0;
	float prom,X;
	cout<<"Introduzca su  numero de notas"<<endl;
	cin>>X;
     for(int I=1;I<=X;I++){
     	cout<<"Introduzca su nota :"<<endl;
     	cin>>num;
     	sum=sum+num;
	 }
	 cout<<"Suma de notas:"<<sum<< endl;
	 prom=sum/X;
	 cout<<"El promedio de sus notas es:"<<prom<< endl;
	
	return 0;
}
