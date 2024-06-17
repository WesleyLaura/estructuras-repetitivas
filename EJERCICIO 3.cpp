#include <iostream>
using namespace std;

int main(){
	int num,suma=0;
	cout<<"ingrese el numero: "; cin>>num;
	while (num<0){
		cout<<"INGRESASTE UN NUMERO NEGATIVO"<<endl;
		cout<<"INGRESE UN NUMERO VALIDO"<<endl;
		cin>>num;
	}
	for (int i=1; i<=num;i++){
		suma=suma+i;
	}
	system("cls");

	cout<<"\nLA SUMA FINAL ES : "<<suma;

	return 0;
}