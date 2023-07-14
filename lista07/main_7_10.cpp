#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/* 10- Solicitar um valor inteiro positivo ( consistir utilizando  função) e mostrar se esse número é primo ou não */

int cons(int);
int primo(int);
int main(int argc, char** argv) {
	int n=0;
	cout<<"\n numero primo \n";
	n=cons(n);
	primo(n);
	cout<<"\n";
	system("PAUSE");
	return 0;
}

int cons(int n){
	do{
		cout<<"\n digite um numero:";
		cin>>n;
	}while(n<=0);
	return(n);
}

int primo(int n){
	int cont=0,primo=0;
	for(cont=2;cont<=n;cont++){
		if(n%cont==0){
			primo=primo+1;
		}
	}
	if(primo==1){
		cout<<"\n eh um numero primo";
	}
	else{
		cout<<"\n nao eh um numero primo";
	}
}
