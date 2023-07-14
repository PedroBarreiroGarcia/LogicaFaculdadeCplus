#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	// Exercício 6: Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.\\
	
	int n=0, cont=0, maior=0, menor=0;
	cout<<"\n mostrar maior e menor numero s\n";
	while(cont<10)
	{
		cout<<"\n digite um numero:";
		cin>>n;
		if(n>maior)
		{
			maior=n;
		}
		if(n<menor)
		{
			menor=n;
		}
		cont=cont+1;
	}
	cout<<"\n o menor numero eh:"<<menor<<" e o maior eh:"<< maior<<"\n";
	system("PAUSE");
	return 0;
} 
 
