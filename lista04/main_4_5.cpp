#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n=0, primo=0,cont=0;
	cout<<"\n verificar se numero eh primo\n";
	do
	{
		cout<<"\n insira um numero: ";
		cin>>n;
	}while(n<=0);
	cont=n;
	do
	{
		if(n%cont==0)
		{
			primo=primo+1;
		}
		cont=cont-1;
	}while(cont>=1);
	if(primo==2)
	{
		cout<<"\n"<<n<<" eh numero primo\n";
	}
	else
	{
		cout<<"\n"<<n<<" nao eh numero primo\n";
	}
    system("PAUSE");
    return 0;
}
