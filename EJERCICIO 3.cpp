/*Realizar un algoritmo que sume los N primeros números naturales usando bucles.*/
#include <iostream>
using namespace std;
int main(){
	int num,suma=0;
	cout<<"ingrese el numero: "; cin>>num;
	for (int i=1; i<=num; i++ ){
		suma=suma+i;
	}
	cout<<"\nEl valor final es : "<<suma;
	return 0;
}