#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int cont=1000;
	cout<<"\n mostrar numeros que o resto da divisao por 11  igual 5 \n";
	while(cont<=1999)
	{
		if(cont % 11 ==5)
		{
			cout<<"\n "<<cont<<"\n";
		}
	cont=cont+1;
	}
	system("pause");
	return 0;
}
