#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n=0, v=0, i=0, cont=0;
    cout<<"\n ler valores e verificar se estao no intervalo entre os numeros 10 e 20\n";
    while(cont<=10)
	{
    	cout<<"\n insira valores: ";
		cin>>n;
            if(n>=10 && n<=20)
            {
             v=v+1;
            }
            else 
            {
            i=i+1;    
            }   
    cont=cont+1;       
    }
    cout<<"\n pertecem ao intervalo : "<<v<<" numeros";
    cout<<"\n nao pertecem ao intervalo: "<<i<<" numeros";
    system("PAUSE");
    return EXIT_SUCCESS;
}
