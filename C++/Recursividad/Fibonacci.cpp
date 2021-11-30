#include<iostream>
#include<conio.h>
using namespace std;

int fibonacci(int n);

int main(){
	int nElementos;
	
	do{
		cout<<"Digite el numero de elementos: ";
		cin>>nElementos;
	}while(nElementos <= 0);
	
	cout<<"Serie Fibonacci: ";
	for(int i=0;i<nElementos;i++){
		cout<<fibonacci(i)<<" , ";	
	}
	
	getch();
	return 0;
}

int fibonacci(int n){
	if(n<2){//Caso base
		return n;
	}
	else{//Caso general
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
