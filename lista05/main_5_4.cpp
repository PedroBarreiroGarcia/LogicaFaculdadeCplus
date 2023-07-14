#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int vet_a[10],i=0,vet_b[10];
    cout<<"\n mostrar vetor A e vetor B \n";
    for(i=0;i<=9;i=i+1)
    {
     vet_a[i]=i+1;
    }
	for(i=0;i<=9;i=i+1)
    {
     vet_b[i]=vet_a[i]*2;
    }
    cout<<"\n"<<"\ vetor A:";
	for(i=0;i<=9;i++)
	{
		cout<<"\n "<<vet_a[i];
	}
	cout<<"\n"<<"\ vetor B:";
	for(i=0;i<=9;i=i+1)
    {
     cout<<"\n "<<vet_b[i];
    }
    cout<<"\n";
    system("PAUSE");
    return 0;
}

