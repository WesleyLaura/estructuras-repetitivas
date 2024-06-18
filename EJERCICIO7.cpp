/* Diseñar un algoritmo que permita leer “n” números por el teclado. El programa debe
calcular el promedio de los números pares y el promedio de los números impares */
#include <iostream>
using namespace std;
int main(){
	// n:cantidad de numeros a ingresar
	int n, contp=0, conti=0, sumap=0, sumai=0,num,promp,promi;
	cout<<"ingrese la cantidad de numeros: "; cin>>n;
	if (n>0){
		for ( int i=1;i<=n;i=i+1){
		cout<<"ingrese el numero: "; cin>>num;
		if (num%2==0){
			contp++;
			sumap=sumap+num;
		}else{
			conti++;
			sumai=sumai+num;
		}
	}
	}else{
		cout<<"ERROR"<<endl;
		return 0;
	}
	system("cls");
	promp=sumap/contp;
	promi=sumai/conti;
	cout<<"el promedio de numeros pares es: "<<promp<<endl;
	cout<<"el promedio de numeros impares es: "<<promi<<endl;
	return 0;
}