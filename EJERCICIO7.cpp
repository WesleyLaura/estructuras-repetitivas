/* Diseñar un algoritmo que permita leer “n” números por el teclado. El programa debe
calcular el promedio de los números pares y el promedio de los números impares */
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	// n:cantidad de numeros a ingresar
	SetConsoleOutputCP(CP_UTF8);
	int n, contp=0, conti=0, sumap=0, sumai=0,num,promp,promi;
	cout<<"INGRESE LA CANTIDAD DE NÚMEROS: "; cin>>n;
	while (n<0){

		cout<<"ERROR\nINGRESE UN NÚMERO POSITIVO"<<endl;
		cin>>n;
		}
		for ( int i=1;i<=n;i=i+1){
			
				cout<<"INGRESE EL NÚMERO "<<i<<":"<<endl;
		
		 cin>>num;

		while (num<0) {
			cout<<"ESCRIBA UN NÚMERO POSITIVO"<<endl;
		cin>>num;
		
		}
		if (num%2==0){
			contp++;
			sumap=sumap+num;
		}else{
			conti++;
			sumai=sumai+num;
		}
	}
	

	system("cls");
	promp=sumap/contp;
	promi=sumai/conti;
	cout<<"El promedio de números pares es: "<<promp<<endl;
	cout<<"El promedio de números impares es: "<<promi<<endl;
	return 0;
}