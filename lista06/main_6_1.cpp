#include <cstdlib>
#include <iostream>
/*1) Criar uma matriz A de 2 linhas e 2 colunas do tipo inteiro

· Solicitar para o usuário os valores para inserir na matriz A

· Após a inserção dos valores, mostrar a matriz A*/

using namespace std;

int main(int argc, char** argv)
{
    int ma[2][2],l=0,c=0;
    cout<<"\n matriz 2x2\n";
    for(l=0;l<=1;l=l+1)
    {
     for(c=0;c<=1;c++)
     {
      cout<<"\n insira um valor:";
      cin>>ma[l][c];
      }                   
    }
    for(l=0;l<=1;l=l+1)
    {
     for(c=0;c<=1;c++)
     {
      cout<<"  "<<ma[l][c]<<"  ";
      }                   
      cout<<"\n";
    }
    system("PAUSE");
    return 0;
}
