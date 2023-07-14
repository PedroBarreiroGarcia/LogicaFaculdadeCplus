#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a=0, b=0, troca=0;
	cout<<"\n trocar valor de variaveis \n";
	cout<<"\n digite valor da primeira variavel:",
	cin>> a;
	cout<<"\n digite valor da segunda variavel:";
	cin>> b;
	troca = a ;
	a=b;
	b=troca;
	cout<<"\n o valor da primeira variavel passou para:"<< a <<"\n o valor da segunda variavel passou para:"<< b << "\n";
	system("PAUSE");
	return 0;
}
