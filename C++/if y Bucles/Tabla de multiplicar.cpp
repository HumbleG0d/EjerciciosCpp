#include<iostream>
using namespace std;

int main()
{
	int num;
	do{
		cout<<"Digite un numero:"<< endl;
		cin>>num;	
	}
	while(num<=0);
	
	for(int I=1;I<=20;I++){
	
		cout<<num<<"X"<<I<<"="<<(num*I)<< endl;
		
	}
	
	return 0;
}
