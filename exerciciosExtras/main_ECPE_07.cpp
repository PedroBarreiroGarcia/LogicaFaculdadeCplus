#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	// Exercício 7: Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.\\
	
	int n=0, cont=0, i=-1;
	cout<<"\n mostrar numeros impares \n";
	cout<<"\n digite quantos numeros deseja ver:";
	cin>>n;
	while(cont<n)
	{
		i=i+2;
		cout<<" "<<i<<"\n";
		cont=cont+1;
	}
	system("PAUSE");
	return 0;
} 
 
