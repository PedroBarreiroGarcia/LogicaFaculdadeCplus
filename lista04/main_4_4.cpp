#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
    int n=0,fat=1;
    cout<<"\nfatorial de um numero\n";
    do
    {
    	cout<<"\ndigite um numero maior que 0 e menor que 14: ";
    	cin>>n;
	} while(n<=0 || n>=14);
	while(n>=1)
    {
    		fat=fat*n;
    		n=n-1;
	}
	cout<<"\no fatorial do numero eh: "<<fat<<"\n";
    system("PAUSE");
    return 0;
}



