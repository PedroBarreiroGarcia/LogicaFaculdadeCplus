#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/* 12-	Solicitar um valor inteiro positivo ( consistir utilizando  função) 
Calcular o fatorial e mostrar o fatorial*/

int cons(int);
int fat(int);
int main(int argc, char** argv) {
	int n=0;
	cout<<"\n fatorial \n";
	n=cons(n);
	fat(n);
	system("PAUSE");
	return 0;
}

int cons(int n){
	do{
		cout<<"\n insira um numero: ";
		cin>>n;
	}while(n<=0);
	return(n);
}

int fat(int n){
	int fat=1,cont=0;
	cont=n;
	while(cont>=1){
		fat=fat*cont;
		cont--;
	}
	cout<<"\n o fatorial eh: "<<fat<<"\n";
}
