#include <cstdlib>
#include <iostream>
# include<conio.h>

using namespace std;
/* 8-	Solicitar dois valores inteiros, e mostrá-los na ordem crescente e decrescente.( prever para quando os valores forem iguais. */

int num (int);
int ordem(int,int);
int main(int argc, char** argv) {
	int n1=0,n2=0;
	cout<<"\n ordenacao \n";
	n1=num(n1);
	n2=num(n2);
	ordem(n1,n2);
	cout<<"\n";
	system("PAUSE");
	return 0;
}

int num(int n){
	cout<<"\n digite um numero: ";
	cin>>n;
    return(n);
}

int ordem( int n1, int n2){
	if(n1==n2){
		cout<< "\n a ordem nao altera pois sao iguais, sendo assim: "<<n1<<" "<<n2;
	}
	else{
		if(n1>n2){
			cout<<"\n ordem crescente: "<< n2<< " "<< n1;
			cout<<"\n ordem decrescente: "<< n1<< " "<< n2;
		}
		else{
			cout<<"\n ordem crescente: "<< n1<< " "<< n2;
			cout<<"\n ordem decrescente: "<< n2<< " "<< n1;
		}
	}
}
