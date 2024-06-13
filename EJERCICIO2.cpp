/*Leer números por teclado hasta introducir uno negativo*/
#include <iostream>
using namespace std;

int main(){
	int num;
	do {
	  cout<<"ingrese el numero: "<<endl; cin>>num;
	} while (num>=0);
	
	return 0;
}

