#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	// Exercício 5: Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média\\
	
	int n=0, cont=0, soma=0;
	cout<<"\n calcular media de 10 numeros\n";
	while(cont<10)
	{
		cout<<"\n insira um numero:";
		cin>>n;
		if(n<0)
		{
			while(n<0)
			{
			cout<<"\n digite um numero inteiro positivo:";
			cin>>n;
			}
		}
		soma=soma+n;
		cont=cont+1;		
	}
	cout<<"\n a media dos numeros positivos  eh: "<< soma/10<< "\n";
	system("PAUSE");
	return 0;
}  

