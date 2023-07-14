#include <iostream>
using namespace std;
/*14) Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo 
e a, b, c, são quaisquer valores reais e os escreva. A seguir: 
Se i=1 escrever os três valores a, b, c em ordem crescente. 
Se i=2 escrever os três valores a, b, c em ordem decrescente. 
Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois. 
*/
//Autor: Lucas Kendy

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int i=0;
	float a=0,b=0,c=0;
	cout<<"Exercicio 11\n\n";
	cout<<"ordenador crescente - digite 1\n";
	cout<<"ordenador decrescente - digite 2\n";
	cout<<"ordenador maior no meio - digite 3\n";
	cout<<"Escolha um programa: \n";
	cin>> i;
	cout<<"Digite o valor de A: \n";
	cin>>a;
	cout<<"Digite o valor de B: \n";
	cin>>b;
	cout<<"Digite o valor de C: \n";
	cin>>c;
	
	if (i==1){
		cout<<"Programa organizador crescente\n";
		if (a<b && a<c){
			if(b<c){
				cout<<a<<"-"<<b<<"-"<<c<<"\n";
			}
			else{
				cout<<a<<"-"<<c<<"-"<<b<<"\n";
			}
		}
		if (b<a && b<c){
			if(a<c){
				cout<<b<<"-"<<a<<"-"<<c<<"\n";
			}
			else{
				cout<<b<<"-"<<c<<"-"<<a<<"\n";
			}	
		}
		if(c<a && c<b){
			if(a<b){
				cout<<c<<"-"<<a<<"-"<<b<<"\n";
			}
			else{
				cout<<c<<"-"<<b<<"-"<<a<<"\n";
			}
		}
	}
	if (i==2){
		cout<<"Programa organizador decrescente\n";
		if (a>b && a>c){
			if(b>c){
				cout<<a<<"-"<<b<<"-"<<c<<"\n";
			}
			else{
				cout<<a<<"-"<<c<<"-"<<b<<"\n";
			}
		}
		if (b>a && b>c){
			if(a>c){
				cout<<b<<"-"<<a<<"-"<<c<<"\n";
			}
			else{
				cout<<b<<"-"<<c<<"-"<<a<<"\n";
			}	
		}
		if(c>a && c>b){
			if(a>b){
				cout<<c<<"-"<<a<<"-"<<b<<"\n";
			}
			else{
				cout<<c<<"-"<<b<<"-"<<a<<"\n";
			}
		}
	}
	if(i==3){
		cout<<"Programa ordenador maior no meio\n";
		if (a>b && a>c){
			cout<<b<<"-"<<a<<"-"<<c<<"\n";	
	    }
	    if (b>a && b>c){
			cout<<a<<"-"<<b<<"-"<<c<<"\n";	
	    }
		else{
			cout<<a<<"-"<<c<<"-"<<b<<"\n";
		}
	}
	system("pause");
	return 0;
}
