#include<iostream>
using namespace std;

int main(){
	    
    float e=1,Nfactorial=1;
          
          
      	for(int i=1;i<=100000;i++){
      		Nfactorial=Nfactorial*i;
      		e=e+(1/Nfactorial);
		  }
		cout<<"El valor de e es:"<<e<<endl;
		
	return 0;
}
