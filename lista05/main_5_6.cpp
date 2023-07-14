#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int vet_a[15],i=0,n=0,bin=0;
    cout<<"\n conversor de binario\n";
    do
   	{
   		cout<<"\n insira numero decimal inteiro positivo:";
   		cin>>n;
	}while(n<0);
	for(i=0;i<=14;i=i+1)
	{
		bin=n%2;
		n=n/2;
		vet_a[i]=bin;
	}
	cout<<"\n o numero em binario eh: ";
	for(i=14;i>=0;i=i-1)
	{
		cout<<vet_a[i];
	}
    system("PAUSE");
    return 0;
}

