#include<iostream>
using namespace std;

int main()
{
	int X,A;
	cout<<"Digite un valor para X:"<< endl;
	cin>>X;
	
	if(X>0||X==0){
		cout<<"El valor absoluto de X es:"<< endl;
		cout<<"X="<<X<< endl;
	}
	else if(X<0){
		A=X*(-1);
		cout<<"El valor absoluto de X es:"<< endl;
		cout<<"X="<<A<< endl;
	}

	return 0;
}
