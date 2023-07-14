#include <cstdlib>
#include <iostream>
/*2) Criar uma matriz A 3x3 do tipo inteiro

· Solicitar p/ o usuário os valores e inserí-los na matrizA

· Criar uma matrizB 3x3 do tipo inteiro

· Gravar na matrizB a transposta da matriz A

· Após a inserção dos valores mostrar as duas matrizes*/

using namespace std;

int main(int argc, char *argv[])
{
    int ma[3][3],l=0,c=0,mb[3][3];
    cout<<"\n matriz 3x3 transporta\n";
    for(l=0;l<=2;l=l+1)
    {
    	for(c=0;c<=2;c++)
    	{
    		cout<<"\n insira um valor:";
      		cin>>ma[l][c];
      	}                   
    }
    for(l=0;l<=2;l=l+1)
    {
    	for(c=0;c<=2;c++)
    	{
    		mb[c][l]=ma[l][c];
		}
	}
    cout<<"\n"<<"\n matriz A:\n";
    for(l=0;l<=2;l=l+1)
    {
    	for(c=0;c<=2;c++)
    	{
    		cout<<"  "<<ma[l][c]<<"  ";
      	}                   
      	cout<<"\n";
    }
    cout<<"\n"<<"\n matriz B:\n";
    for(l=0;l<=2;l=l+1)
    {
    	for(c=0;c<=2;c++)
    	{
    		cout<<"  "<<mb[l][c]<<"  ";
      	}                   
      	cout<<"\n";
    }
    system("PAUSE");
    return 0;
}
