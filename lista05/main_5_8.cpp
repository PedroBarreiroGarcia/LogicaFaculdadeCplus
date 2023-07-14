#include <cstdlib>
#include <iostream>
/*7)	Criar um vetor A de 20 elementos do tipo inteiro
"	Solicitar para o usuário um número do termo da série de fibonacci
"	Calcular a série até o termo informado e para cada termo calculado inserir no vetor A
"	Após a inserção mostrar o vetor A ( somente a serie calculada)
*/

using namespace std;

int main(int argc, char** argv) 
{
	int vet_a[5],i=0,n=0, aux=0,ant=1, atu=1; 
	cout<<"\n fibonacci\n";
	do
	{
		cout<<"\n insira termo maior que 3:";
		cin>>n;
	}while(n<3);
	for(i=3;i<=n;i=i+1)
	{
		aux=ant+atu;
		ant=atu;
		atu=aux;
		vet_a[i]=atu;
	}
	cout<<"\n os termos da serie sao: ";
	for(i=3;i<=n;i=i+1)
	{
		cout<<"\n "<< vet_a[i];
	}
	cout<<"\n";
	system("PAUSE");
    return 0;
}
