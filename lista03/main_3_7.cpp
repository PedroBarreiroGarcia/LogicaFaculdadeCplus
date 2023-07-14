#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n=0, fat=1;
	cout<<"\n calcular fatorial\n";
	cout<<"\n insira um numero:";
	cin>>n;
	while(n<0)
	{
		cout<<"\n digite numero maior que 0";
	}
	while(n>=1)
	{
		fat=fat*n;
		n=n-1;
	}
	cout<<"\n seu fatorial eh: "<< fat<< "\n";
	system("pause");
	return 0;
}

