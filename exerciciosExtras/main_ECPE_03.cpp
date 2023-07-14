#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	// Exercício 3: Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).\\
	
	int n=-1000, cont=0;
	cout<<"\n contagem de 0 a 100.000\n";
	while(cont<=100000)
	{
		n=n+1000;
		cout<<" "<< n<<"\n";
		cont=cont+1000;
	}
	system("PAUSE");
	return 0;
}  
