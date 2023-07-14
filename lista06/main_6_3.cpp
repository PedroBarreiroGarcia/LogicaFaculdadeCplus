#include <cstdlib>
#include <iostream>
/*Criar uma matriz A de 3 linhas e 3 colunas do tipo inteiro

· Solicitar p/ o usuário os valores para inserir na matriz A

· Criar um Vetor B de 3 elementos do tipo inteiro

· Gravar no vetor b a diagonal principal da matriz A

· Após a inserção do valores mostrar a matriz A e o vetor B*/

using namespace std;

int main(int argc, char *argv[]) {
	
	int mata[3][3],l=0,c=0,vetb[3],i=0;
	cout<<"\n mostrar matriz A e vetor B \n";
	for(l=0;l<=2;l++)
	{
		for(c=0;c<=2;c++)
		{
			cout<<"\n insira um valor:";
			cin>>mata[l][c];
		}
	}
	for(l=0;l<=2;l++)
	{
		for(c=0;c<=2;c++)
		{
			if(c==l)
			{
				vetb[c]=mata[l][c];
			}
		}
	}
	cout<<"\n"<<"\n matriz A:\n";
	for(l=0;l<=2;l=l+1)
    {
    	for(c=0;c<=2;c++)
    	{
    		cout<<"  "<<mata[l][c]<<"  ";
      	}                   
      	cout<<"\n";
    }
    cout<<"\n"<<"\n vetor B:\n";
    for(i=0;i<=2;i++)
    {
    	cout<<"\n"<<vetb[i];
	}
	system("PAUSE");
    return 0;
}
