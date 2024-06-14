/*Leer números por teclado hasta introducir uno negativo*/
#include <iostream>
using namespace std;

int main(){
	int numero;
	string numeroString;
	do {
	  cout<<"ingrese el numero: "<<endl; cin>>numero;
	 numeroString=to_string(numero);
	  if (numeroString=="0"){
	  	cout<<"ERROR";
	return 0;
		  } }while (numero>=0);
	cout<<" INGRESASTE UN NUMERO NEGATIVO";
	return 0;
}

