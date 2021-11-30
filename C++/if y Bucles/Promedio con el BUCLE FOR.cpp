#include<iostream>
using namespace std;

int main()
{
	float num,sum=0;
	float prom;
     for(int I=1;I<=10;I++){
     	cout<<"Introduzca un numero:"<<endl;
     	cin>>num;
     	sum=sum+num;
	 }
	 cout<<"Suma:"<<sum<< endl;
	 prom=sum/num;
	 cout<<"El promedio es:"<<prom<< endl;
	
	return 0;
}
