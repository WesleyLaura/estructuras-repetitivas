/*Se necesita un programa que solicite los N gastos realizados en un viaje. El programa
consultará si desea continuar ingresando gastos, y mostrara al final la suma de los N
gastos*/
#include <iostream>

using namespace std;

int main(){
	int gast,suma=0;
	string op;

	while (op !="NO"){
	cout<<"ingrese el gasto: "; cin>>gast;
	suma=suma+gast;
    cout<<"Ingrese 'SI' si quiere continuar, sino 'NO' para terminar:\n ";cin>>op;
}
	cout<<"LA SUMA TOTAL DE LOS GASTOS REALIZADOS ES : "<<suma;

	return 0;
}