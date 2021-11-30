#include<iostream>
using namespace std;

int main(){
	
	int N,Ninverso,resto;
	cout<<"Digite un numero:"<<endl;
	cin>>N;
	
	while(N>0){
		resto=N%10;
		N=N/10;
		Ninverso=Ninverso*10+resto;
	}
	cout<<"El numero inverso es:"<<Ninverso<<endl;
	
	return 0;
}
