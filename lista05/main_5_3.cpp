#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int vet_a[20],soma=0,i=0,p=10;
    cout<<"\n mostrar e somar 20 elementos \n";    
    for(i=0;i<=19;i=i+1)
    {
     vet_a[i]=p;
     p=p+2;
    }
    for(i=0;i<=19;i=i+1)
    {
     cout<<"\n"<<vet_a[i];
     soma=soma+vet_a[i];
    }
    cout<<"\na soma eh:"<<soma<<"\n";
    system("PAUSE");
    return 0;
}	
