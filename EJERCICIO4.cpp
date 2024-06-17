/*Se necesita un programa que solicite los N gastos realizados en un viaje. El programa
consultará si desea continuar ingresando gastos, y mostrara al final la suma de los N
gastos*/
#include <iostream>

using namespace std;

int main(){
	int gast,suma=0;
	char op;

	while (op !='n'){
	cout<<"ingrese el gasto: "; cin>>gast;
	suma=suma+gast;
    cout<<"Ingrese 's' si quiere continuar, sino 'n' para terminar:\n ";cin>>op;
}
	cout<<"la suma es: "<<suma;

	return 0;
}