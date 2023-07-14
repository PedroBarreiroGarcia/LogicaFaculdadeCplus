#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int elementos[10], i=0;
    cout<<"\n mostrar elementos \n";
    for(i=0;i<=9;i=i+1)
    {
     elementos[i]=i+1;                   
    }
    for(i=0;i<=9;i=i+1)
    {
     cout<<" "<<elementos[i];
    }
    cout<<"\n";
    system("PAUSE");
    return 0;
}
