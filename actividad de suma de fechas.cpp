#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<sstream>
#include<string>
using namespace std;

bool es_bisiesto(int a){
	return((a%4 == 0 and a%100 != 0 or a%400 == 0));
}
int dia_mes(int m,int a){
	
	int d;
	if(m==4||m==6||m==9||m==11){
		 d=30;
		 cout<<"\nLa fecha es valida"<<endl;	
	}else if(m==2){
		
		if(es_bisiesto(a)){
			d=29;
			cout<<"\nLa fecha es valida y es año bisiesto"<<endl;
		}else
		{
		 cout<<"\nLa fecha es valida"<<endl;
		 d=28;
	    }
	}else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
		d=31;
		cout<<"\nLa fecha es valida"<<endl;
	}else{
		cout<<"\nLa fecha es invalida o no existe"<<endl;
	}
	return d;
}
int main(){

int d,m,a,opc;
string datos,dia,mes,anio;
bool opc2=false;

  cout<<"Escribe la fecha: (dd/mm/yyyy)"<<endl;cin>>datos;
  istringstream ss(datos);
  getline(ss,dia,'/');
  istringstream (dia)>>d;
  getline(ss,mes,'/');
  istringstream (mes)>>m;
  getline(ss,anio,'/');
  istringstream(anio)>>a;
     d++; 
	if(d>dia_mes(m,a))
	{
		d=1;
		m++;
	if(m>12)
	{
		m=1;
		a++;
	}
	}

	cout<<"\n"<<d<<"/"<<m<<"/"<<a<<endl;
   
do{
  
  cout<<"\nQuieres volver a revisar otra fecha? Si=1  No=2"<<endl;cin>>opc;

  if(opc==1){
  	system("cls");
  	return main();
  }
  else if(opc==2){
  	system("cls");
  	cout<<"Hasta luego......."<<endl;
  	exit(0);
  }
  else{
  	system("cls");
  	cout<<"Esta opcion no existe,elige otro."<<endl;
    opc2=true;
  }
  } while(opc2==true);
	return 0;
}
