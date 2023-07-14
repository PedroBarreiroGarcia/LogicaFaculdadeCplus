#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	// Exercício 4: Faça um programa que peça ao usuário para digitar 10 valores e some-os.\\
	
	int  cont=1;
	float n=0, soma=0;
	cout<<"\n soma de 10 numeros \n";
	while(cont<=10)
	{
		cout<<"\n digite um numero:";
		cin>>n;
		soma=soma+n;
		cont=cont+1;
	}
	cout<<"\n a soma dos 10 numeros eh: "<< soma<< "\n";
	system("PAUSE");
	return 0;
}  
