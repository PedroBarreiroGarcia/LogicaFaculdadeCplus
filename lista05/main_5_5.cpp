#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int vet_a[5],i=0,v=0;
  	cout<<"\n mostrar e inserir 5 elementos\n";
  	for(i=0;i<=4;i=i+1)
  	{
  		cout<<"\n insira valor do elemento:";
  		cin>>v;
  		vet_a[i]=v;
	}
	for(i=0;i<=4;i=i+1)
  	{
  		cout<<" "<<vet_a[i];
    }
    cout<<'\n';
    system("PAUSE");
    return 0;
}

