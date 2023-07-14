#include <cstdlib>
#include <iostream>
# include<conio.h>

using namespace std;

/* 7-	Solicitar um valor inteiro positivo ( consistir utilizando  função) e mostrar se esse número é par ou não par  */

int cons(int);
int par(int);
int main(int argc, char** argv) {
	int n=0;
	cout<<"\n numero par \n";
	n=cons(n);
	par(n);
	cout<<"\n";
	system("PAUSE");
	return 0;
}

int cons(int n){
	n=0;
	do{
		cout<<"\n insira um numero:";
		cin>>n;
	}while(n<=1);
	return(n);
}

int par(int n){
	if(n %2==0){
		cout<<"\n "<< n << " eh um numero par";
	}
	else{
		cout<<"\n "<< n << " nao eh um numero par";
	}
}
