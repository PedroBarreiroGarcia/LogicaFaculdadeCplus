##include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int cont=10,soma=0;
    cout<<"\n impares e soma de 10 a 80\n";
    for(cont=10;cont<=80;cont=cont+1)
    {
     if(cont % 2==1)
     {
             cout<<"\n "<< cont;
             soma=soma+cont;
     }
    }
    cout<<"\n a soma eh: "<< soma;
    system("PAUSE");
	return 0;
}
