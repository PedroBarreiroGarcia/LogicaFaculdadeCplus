#include <cstdlib>
#include <iostream>
# include<conio.h>

using namespace std;

/* 6- Solicitar dois valores inteiros positivos ( consistir utilizando fun��o)

Calcular a pot�ncia

Mostrar o resultado

Obs: o primeiro � o n�mero e o segundo � a pot�ncia*/

int cons_base(int);
int cons_expoente(int);
int potencia(int,int);
int main(int argc, char *argv[]){
	int n1=0, n2=0;
	cout<<"\n potencia \n";
	n1=cons_base(n1);
	n2=cons_expoente(n2);
	cout<<"\n o resultado eh: "<< potencia(n1,n2)<<"\n";
	system("PAUSE");
	return 0;
}

int cons_base(int num1){
	num1=0;
	do{
		cout<<"\n valor da base:";
		cin>>num1;
	}while(num1<=1);
	return(num1);
}

int cons_expoente(int num1){
	num1=0;
	do{
		cout<<"\n valor do expoente :";
		cin>>num1;
	}while(num1<0);
	return(num1);
}

int potencia(int num1, int num2){
	int resultado, n;
	resultado=1;
	for(n=1;n<=num2;n++){
		resultado=resultado*num1;
	}
	return(resultado);
}

