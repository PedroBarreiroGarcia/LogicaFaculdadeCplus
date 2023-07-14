#include <cstdlib>
#include <iostream>
/*8)	Criar um vetor A de 10 elementos do tipo inteiro
"	Solicitar os valores para o usuário e inserir no vetor A
"	Criar um vetor B  de 10 elementos do tipo inteiro
"	Ler o vetor A e para cada elemento achar se é ou não primo e gravar no vetor B, (um) P para primo e (zero) para não primo
"	Após o cálculo mostrar o valor do elemento do vetor A e o correspondente do vetor B (zero' não primo, e um' primo)
*/

using namespace std;

int main(int argc, char** argv) 
{
	int vet_a[10],i=0,vet_b[10],x=0,primo=0;
	cout<<"\n verificador de numero primo\n";
	for(i=0;i<=9;i=i+1)
	{
		cout<<"\n insira um valor: ";
		cin>>vet_a[i];
	}
	for(i=0;i<=9;i=i+1)
	{
		for(int x=2;x<=vet_a[i];x++)
		{
			if(vet_a[i] % x==0)
			{
				primo=primo+1;
			}
		}
		if(primo==1)
		{
			vet_b[i]=1;
		}
		else
		{
			vet_b[i]=0; 
		}
		primo=0;
	}
	cout<<"\n vetor a: ";
	for(i=0;i<=9;i=i+1)
	{
		cout<<"\n "<< vet_a[i];
	}
	cout<<"\n ";
	cout<<"\n vetor b: ";
	for(i=0;i<=9;i=i+1)
	{
		cout<<"\n "<< vet_b[i];
	}
	cout<<"\n";
	system("PAUSE");
	return 0;
}
