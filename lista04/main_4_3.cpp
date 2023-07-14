#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n=0, bin;
    cout<<"\n conversor de decimal para binaio\n";
    do
    {
        cout<<"\n escreva um numero inteiro positivo: ";
        cin>>n;
    }while(n<0);
    while(1<=n)
    {
     bin=n % 2;
     cout<<bin;
     n=n/2;
    }
    system("PAUSE");
	return 0;
}

