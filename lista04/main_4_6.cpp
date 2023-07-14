#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n=0,aux=0,ant=1,atu=1,cont=3;
	cout<<"\nfibonacci\n";
	do
	{
		cout<<"\digite numero da serie de fibonacci:";
		cin>>n;
	}while(n<3);
	do
	{
		aux=ant+atu;
		ant=atu;
		atu=aux;
		cont=cont+1;
	}while(cont<=n);
	cout<<"\n o termo da serie "<<n<<" eh "<<atu<<"\n";
    system("PAUSE");
    return 0;
}
