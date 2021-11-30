#include<iostream>
using namespace std;

int main()
{
	int Edad,Edad1,opcion;
	float Hemoglobina;
	
	cout<<"Introduzca la edad en años:"<<endl;
	cin>>Edad;
	cout<<"Introduzaca la edad en meses:"<<endl;
	cin>>Edad1;
	
	if(Edad==0&&(Edad1>0&&Edad1<=1)){
		cout<<"Digite su nivel de hemoglobina:"<<endl;
		cin>>Hemoglobina;
		if(Hemoglobina>=13&&Hemoglobina<=26){
			cout<<"No esta ANEMICO"<<endl;
		}
		else{
			cout<<"Esta ANEMICO"<<endl;
		}
	}
	else if(Edad==0&&(Edad1>1&&Edad1<=6)){
		cout<<"Digite su nivel de hemoglobina:"<<endl;
		cin>>Hemoglobina;
		if(Hemoglobina>=10&&Hemoglobina<=18){
			cout<<"No esta ANEMICO"<<endl;
		}
		else{
			cout<<"Esta ANEMICO"<<endl;
		}
	}
	else if(Edad==0&&(Edad1>6&&Edad1<=12)){
		cout<<"Digite su nivel de hemoglobina:"<<endl;
		cin>>Hemoglobina;
		if(Hemoglobina>=11&&Hemoglobina<=15){
			cout<<"No esta ANEMICO"<<endl;
		}
		else{
			cout<<"Esta ANEMICO"<<endl;
		}
	}
	else if((Edad1<12&&Edad1>0)&&(Edad>1&&Edad<=5)){
		cout<<"Digite su nivel de hemoglobina:"<<endl;
		cin>>Hemoglobina;
		if(Hemoglobina>=11.5&&Hemoglobina<=15){
			cout<<"No esta ANEMICO"<<endl;
		}
		else{
			cout<<"Esta ANEMICO"<<endl;
		}
	}
	else if((Edad1<12&&Edad1>0)&&(Edad>5&&Edad<=10)){
		cout<<"Digite su nivel de hemoglobina:"<<endl;
		cin>>Hemoglobina;
		if(Hemoglobina>=12.6&&Hemoglobina<=15.5){
			cout<<"No esta ANEMICO"<<endl;
		}
		else{
			cout<<"Esta ANEMICO"<<endl;
		}
	}
	else if((Edad1<12&&Edad1>0)&&(Edad>10&&Edad<=15)){
		cout<<"Digite su nivel de hemoglobina:"<<endl;
		cin>>Hemoglobina;
		if(Hemoglobina>=13&&Hemoglobina<=15,5){
			cout<<"No esta ANEMICO"<<endl;
		}
		else{
			cout<<"Esta ANEMICO"<<endl;
		}
	}
	
	else if((Edad1<12&&Edad1>0)&&(Edad>15)){
		cout<<"Elija su sexo"<<endl;
		cout<<"Opcion1=Hombre"<<endl;
		cout<<"Opcion2=Mujer"<<endl;
		cout<<"Opcion:";
		cin>>opcion;
		if(opcion==1){
			cout<<"Digite su nivel de hemoglobina:"<<endl;
		    cin>>Hemoglobina;
			if(Hemoglobina>=14&&Hemoglobina<=18){
			cout<<"No esta ANEMICO"<<endl;
		}
		else{
			cout<<"Esta ANEMICO"<<endl;
		}
		}
		else if(opcion==2){
			cout<<"Digite su nivel de hemoglobina:"<<endl;
		    cin>>Hemoglobina;
			if(Hemoglobina>=12&&Hemoglobina<=16){
			cout<<"No esta ANEMICO"<<endl;
		}
		else{
			cout<<"No esta ANEMICO"<<endl;
		}
		}
	}
	return 0;
}
