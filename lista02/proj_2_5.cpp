#include <iostream>
using namespace std;
//5) Solicitar dois valores inteiros, e mostrá-los na ordem crescente e decrescente.( prever para quando os valores forem iguais.
//Autor: Lucas Kendy

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int n1=0,n2=0;
	cout<<"Ordenador de numeros\n\n";
	cout<<"Insira o valor de N1: \n";
	cin>>n1;
	cout<<"Insira o valor de N2: \n";
	cin>>n2;
	if(n1==n2){
		cout<<"Os dois valores são iguais!\n";
	}
	else{
	
		if (n1>n2){
			cout<<"ordem crescente: "<< n2 <<" e "<< n1 <<"\n";
			cout<<"ordem decrescente: "<< n1 <<" e "<< n2 <<"\n";
		}
		else{
			cout<<"ordem crescente: "<< n1 <<" e "<< n2 <<"\n";
			cout<<"ordem decrescente: "<< n2 <<" e "<< n1 <<"\n";
		}
	}
	system("pause");
	return 0;
}
