#include<iostream>
#include<string>

using namespace std;

bool contieneCadenaInicio(string, string);

int main(){
	string cg,cp;
	bool res;
	cout << "Ingrese la cadena grande: ";
	cin >> cg;
	cout << "Ingrese la cadena pequeña: ";
	cin >> cp;
	if(cg.size() < cp.size())
		cout << "La cadena pequeña tiene mayor tama;o que la cadena larga";
	else{
		res = 	contieneCadenaInicio(cg, cp);
		if(res)
			cout << "La cadena pequeña se encuentre al inicio de la cadena larga";
		else
			cout << "La cadena pequeña no se encuentre al inicio de la cadena larga";
		
	}	
	return 0;	
}

bool contieneCadenaInicio(string cg, string cp){
	if(cp.size() == 0)
		return true;
	else if(cg.at(0) != cp.at(0))
		return false;
	else{
		cg = cg.erase(0,1);
		cp = cp.erase(0,1);
		return contieneCadenaInicio(cg, cp);
	}
		
}
