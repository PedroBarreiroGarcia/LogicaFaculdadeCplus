#include <iostream>
using namespace std;
//3)Solicitar dois valores inteiros, e mostrá-los na ordem crescente e decrescente.

//Autor: Lucas Kendy

int main(int argc, char** argv) {
	int a=0,b=0;
	cout<<"Ordenador de numeros\n\n";
	cout<<"Insira o valor de A: \n";
	cin>>a;
	cout<<"Insira o valor de B: \n";
	cin>>b;
	if (a>b){
		cout<<"ordem crescente: "<< b <<" e "<< a <<"\n";
		cout<<"ordem decrescente: "<< a <<" e "<< b <<"\n";
	}
	else{
		cout<<"ordem crescente: "<< a <<" e "<< b <<"\n";
		cout<<"ordem decrescente: "<< b <<" e "<< a <<"\n";
	}
	return 0;
}
