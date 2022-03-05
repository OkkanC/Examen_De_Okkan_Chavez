#include <iostream>
#include <locale.h> 

using namespace std;

void facto(float a);
void tabla(float a);
void datos1();
void datos2();

float num1, num2;
int ola;

int main(){

setlocale(LC_ALL, "spanish");

cout<<"Soy un Programa avanzado"<<endl;
cout<<"1. Factorial de un N�mero"<<endl;
cout<<"2. Tablas de Multiplicar"<<endl;
cout<<"\nIngresa el N�mero del Inciso de la Operaci�n a Realizar: ";cin>>ola;


switch(ola){
	
	case 1:
		system("cls");
		cout<<"Factorial de un N�mero\n\n";
		datos1();
		facto(num1);
	break;
	
	case 2:
		system("cls");
		cout<<"Tablas de Multiplicaci�n"<<endl;	
		datos1();
		tabla(num1);
	break;
	
	default:
	cout<<"\nNo ingresaste una opci�n v�lida";
	break;
	
}

	return 0;
}


void datos1(){
cout<<"Ingresa un N�mero: ";
cin>>num1;	
}

void facto(float a){
	int fac=1;
	
	for(a;a>0;a--){
		fac=fac*a;
	}
	
	cout<<"El Factorial de "<<num1<<" es: "<<fac; 
}

void tabla(float a){
	
	for(int i=1;i<=10;i++){
		cout<<num1<<" x "<<i<<" = "<<num1*i<<endl;
	}
	
}










