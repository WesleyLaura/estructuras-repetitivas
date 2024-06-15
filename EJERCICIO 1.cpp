/*Diseñar un algoritmo que imprima en la pantalla los primeros “n” múltiplos de 7 (positivos
mayores que cero*/
#include <iostream>
using namespace std;

int main(){
	int num,multiplos;
	cout<<"ingrese el numero: "; cin>>num;
	for (int i=1;i<=num;i++){
		multiplos=i*7;
		cout<<multiplos<<endl;
	}
	
	return 0;
}