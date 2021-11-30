#include<iostream>
using namespace std;

int main(){
	
	double pi=0,n=0;

	for(int i=1;i<=100001;i=i+2){
		if(i==1||n==4){
			pi=pi+(4/double(i));
			n=2;
		}
		else{
			pi=pi-(4/double(i));
			n=n+2;
		} 
		
	}
	cout<<"El valor de pi es:"<<pi<<endl;
	
	return 0;
}
