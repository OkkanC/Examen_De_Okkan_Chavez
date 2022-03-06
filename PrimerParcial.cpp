#include <iostream>
#include <locale.h> 

using namespace std;


void facto(float a);
void tabla(float a);
void inciso_tres();
void diasem();
void datos1();
void datos2();

float num1, num2;
int ola;

int main(){

setlocale(LC_ALL, "spanish");

cout<<"Soy un Programa avanzado"<<endl;
cout<<"1. Factorial de un N�mero"<<endl;
cout<<"2. Tablas de Multiplicar"<<endl;
cout<<"3. Contador de N�meros"<<endl;
cout<<"4. D�as Laborales"<<endl;	
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
	
	case 3:
	system("cls");
	cout<<"Contador de N�meros"<<endl;	
	inciso_tres();
	break;
	
	case 4:
	system("cls");
	cout<<"\t\tD�as Laborales"<<endl;	
	diasem();
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

void inciso_tres(){
	int y, i;
	int sumi =0;
	int sump =0;
	int par =0;
	int impar =0;
	
	for(i=1;i<=10;i++){
		cout<<"("<<i<<"). Ingresa Cualquier N�mero: ";cin>>y;
		
		if(y%2==0){
			sump=sump+y;
			par=par+1;
		}else{
			sumi=sumi+y;
			impar=impar+1;
		}
	}
	
	cout<<"\nLa Suma de los N�meros Pares es: "<<sump<<endl<<"Total de N�meros Pares: "<<par<<endl<<"El Promedio de N�meros Impares es de: "<<(sumi/impar);
	
}

void diasem(){
	
	int opn;
cout<<"Bienvenido, te dir� si Alguno de Estos D�as es Laboral"<<endl;
cout<<"1. Lunes"<<endl;
cout<<"2. Martes"<<endl;
cout<<"3. Mi�rcoles"<<endl;
cout<<"4. Jueves"<<endl;
cout<<"5. Viernes"<<endl;
cout<<"6. S�bado"<<endl;
cout<<"7. Domingo"<<endl;
cout<<endl<<"Ingresa el N�mero del d�a: ";cin>>opn;cout;

switch(opn){
	
	case 1:
		cout<<"Lunes, s� es laboral";
	break;
	
	case 2:
		cout<<"Martes, s� es laboral";
	break;
	
	case 3:
		cout<<"Mi�rcoles, s� es laboral";
	break;
	
	case 4:
		cout<<"Jueves, s� es laboral";
	break;
	
	case 5:
		cout<<"Viernes, s� es laboral";
	break;
	
	case 6:
		cout<<"S�bado, no es laboral";
	break;
	
	case 7:
		cout<<"Domingo, no es laboral";
	break;
	
	default:
	cout<<"\nNo ingresaste un n�mero v�lido";
	break;		
			
}
	
}







