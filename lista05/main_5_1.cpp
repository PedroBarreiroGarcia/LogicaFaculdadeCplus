#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int idade [5], i=0;
    cout<<"\n idade \n";
    for(i=0;i<=4;i=i+1)
    {
     idade[i]=0;
    }
    for(i=0;i<=4;i=i+1)
    {
     cout<<"\n digite uma idade:";
     cin>>idade[i];
    }
    for(i=4;i>=0;i=i-1)
    {
     cout<<" "<<idade[i];
    }
    system("PAUSE");
    return 0;
}
