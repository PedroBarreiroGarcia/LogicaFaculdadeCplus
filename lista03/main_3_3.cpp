#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int cont=10, soma=0;
    cout<<"\n contar e somar pares de 10 a 100";
    while(cont<=100)
    {
    	cout<<"\n "<<cont;
    	soma=soma+cont;
    	cont=cont+2;
	}
	cout<<"\n a soma eh:"<< soma<< "\n";
     system("PAUSE");
    return EXIT_SUCCESS;
}
