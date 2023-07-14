#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float n1=0, n2=0;
    cout<<"Calculo de media\n\n";
    cout<<"Digite nota 1\n";
    cin>>n1;
    cout<<"Digite nota 2\n";
    cin>>n2;
    n1=(n1+n2)/2;
    cout<<"A media eh: "<<n1<<"\n";
    if (n1>=6){
       cout<<"Aprovado\n";
       }
    else{
       cout<<"Reprovado\n";
       }
    system("PAUSE");
    return EXIT_SUCCESS;
}
