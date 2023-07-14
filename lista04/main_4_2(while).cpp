#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
    int cont=10,soma=0;
    cout<<"\n soma dos impares de 10 a 80\n";
    while(cont<=80)
    {
      if(cont % 2==1)
      {
      cout<<"\n "<<cont;
      soma=soma+cont;
      }
      cont=cont+1;
    }
    cout<<"\n a soma eh: "<<soma;
    system("PAUSE");
    return 0;
}

