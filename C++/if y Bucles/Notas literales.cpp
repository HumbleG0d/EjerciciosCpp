#include<iostream>
using namespace std;

int main()
{
	float Nota;
	
	cout<<"Digite su nota:"<<endl;  cin>>Nota;
	
	if(Nota<=100&&Nota>=90){
		cout<<"Su nota literal es:";
		cout<<"A"<<endl;
	}
	else if(Nota<90&&Nota>=70){
		cout<<"Su nota literal es:";
		cout<<"B"<<endl;
	}
	else if(Nota<70&&Nota>=60){
		cout<<"Su nota literal es:";
		cout<<"C"<<endl;
	}
	else if(Nota<60&&Nota>=50){
		cout<<"Su nota literal es:";
		cout<<"D"<<endl;
	}
	else if(Nota<50&&Nota>=0){
		cout<<"Su nota literal es:";
		cout<<"E"<<endl;
	}
	else{
		cout<<"La nota no se encuentra dentro del rango establecido"<<endl;
	}
	
	
	
	return 0;
}
