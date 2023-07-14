#include <cstdlib>
#include <cstdlib>
#include <iostream>

using namespace std;
/*6)	Criar um vetor A do tipo inteiro de 5 elementos
"	Solicitar os valores para o usuário e inserir no vetor A
"	Criar um vetor B do tipo inteiro de 
"	Ler o vetor A e para cada elemento lido calcular o fatorial e gravar no B
"	Após de todos os elementos do vetor A, mostrar os dois vetores*/

int main(int argc, char *argv[])
{
    int vet_a[5],i=0,vet_b[5],vet_c[5],fat=1;    
    cout<<"\n fatorial \n";
    for(i=0;i<=4;i=i+1)
    {
    	cout<<"\n inserir valores:";
    	cin>>vet_a[i];
    }
    for(i=0;i<=4;i=i+1)
    {
    	vet_c[i]=vet_a[i];
    	while(vet_a[i]>=1)
    	{
    		fat=fat*vet_a[i];
    		vet_a[i]=vet_a[i]-1;
		}
		vet_b[i]=fat;
		fat=1;
	}
	cout<<"\n";
	cout<<"\ vetor a: ";
	for(i=0;i<=4;i=i+1)
    {
		cout<<"\n "<<vet_c[i];
	}
	cout<<"\n vetor b:";
	for(i=0;i<=4;i=i+1)
    {
		cout<<"\n "<<vet_b[i];
	}
	cout<<"\n";
    system("PAUSE");
    return 0;
}

