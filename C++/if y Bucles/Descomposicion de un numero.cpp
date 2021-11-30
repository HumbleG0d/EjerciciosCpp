#include<iostream>
using namespace std;

int main(){
	
	int N;
	cout<<"Digite un numero:";
	cin>>N;
	for(int i=2;N>2;i++){
		while(N%i==0){
			N=N/i;
		if(N==1){
				cout<<i;
			}
			else{
				cout<<i<<"*";
			}
		}
	}
    
	
	return 0;
}
