#include <iostream>
#include <locale.h> 

using namespace std;

void facto(float a);
void datos1();
void datos2();

float num1, num2;
int ola;

int main(){

setlocale(LC_ALL, "spanish");

cout<<"Soy un Programa avanzado"<<endl;
cout<<"1. Factorial de un N�mero\n"<<endl;
cout<<"Ingresa el N�mero del Inciso de la Operaci�n a Realizar: ";cin>>ola;


switch(ola){
	
	case 1:
	system("cls");
	cout<<"Factorial de un N�mero\n\n";
	datos1();
	facto(num1);
	break;
}

	return 0;
}


void datos1(){
cout<<"Ingresa un N�mero: ";
cin>>num1;	
}

void datos2(){
cout<<"Ingresa el Primer N�mero: ";
cin>>num1;	
cout<<"Ingresa el Segundo N�mero: ";
cin>>num2;	
}

void facto(float a){
	int fac=1;
	
	for(a;a>0;a--){
		fac=fac*a;
	}
	
	cout<<"El Factorial de "<<num1<<" es: "<<fac; 
}
