#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	//Fa�a um programa que determine e mostre os cinco primeiros m�ltiplos de 3, considerando n�meros maiores que 0./
	int multi=0, cont=0;
	cout<<"\n multiplos de 3\n";
	while(cont<=4)
	{
		multi=multi+3;
		cout<<" "<< multi<<"\n";
		cont=cont+1;
	}
	system("PAUSE");
	return 0;
}
