#include <cstdlib>
#include <iostream>

using namespace std;
/*6) Criar um vetor de 10 elementos e uma matriz de 10 linhas por 10 colunas

· solicitar para o usuário digitar valores no intervalo de 1 a 10 e inserir no vetor,

· após a inserção no vetor, ler o vetor e para cada elemento lido calcular a tabuada e inserir na matriz.

· Ao final mostrar o elemento do vetor e a tabuada correspondente que esta na matriz*/

int main(int argc, char *argv[])
{
    int vet[10],mat[10][10],i=0,l=0,c=0,multi=1,aux=0;
    cout<<"\n tabuada \n";
	for(i=0;i<=9;i++){
		do{
        	cout<<"\n insira numero de 1 a 10: ";
        	cin>>vet[i];                
    	}while(vet[i]<=0||vet[i]>10);
    }
    i=0;
    for(l=0;l<=9;l++){
    	aux=vet[i];
    	for(c=0;c<=9;c++){
    		mat[l][c]=aux*multi;
			multi++;
		}
		multi=1;
		i++;
	}	
	cout<<"\n vetor:";
	for(i=0;i<=9;i++){
		cout<<"\n  "<<vet[i];
	}
	cout<<"\n"<<"\n tabuada:\n";
	for(l=0;l<=9;l++)
    {
    	for(c=0;c<=9;c++)
    	{
    		cout<<"  "<<mat[l][c]<<"  ";
      	}                   
      	cout<<"\n";
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
