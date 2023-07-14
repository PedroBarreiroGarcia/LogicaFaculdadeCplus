#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float prestacao=0, valor=0, taxa=0,tempo=0;
	cout<<"\n calcular valor de prestacao em atraso\n";
	cout<<"\n valor da prestacao:";
	cin>>valor;
	cout<<"\n taxa de juros:";
	cin>>taxa;
	cout<<"\n tempo de atraso:";
	cin>>tempo;
	prestacao=(valor+(valor*(taxa/100)*tempo));
	cout<<"\n o valor da prestacao eh:R$"<<prestacao<<"\n";	
	system("PAUSE");
	return 0;
}
