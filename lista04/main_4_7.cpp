#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n=0,aux=0,t1=0,t2=0,soma=0,cont=3;
	cout<<"\n ricci \n";
	cout<<"\n digie primeiro termo da serie: ";
	cin>>t1;
	cout<<"\n digie segundo termo da serie: ";
	cin>>t2;
	do
	{
		cout<<"\n digie numero de termos que deseja ver: ";
		cin>>n;
	}while(n<3);
	soma=t1+t2;
	cout<< " "<< t1;
	cout<< " "<< t2;
	while(cont<=n)
	{
		aux=t1+t2;
		t1=t2;
		t2=aux;
		cout<< " "<< aux<<" ";
		soma= soma + aux;
		cont=cont+1;
	}
	cout<<"\n a soma dos "<< n<< " termos eh: "<< soma;
    system("PAUSE");
    return 0;
}
