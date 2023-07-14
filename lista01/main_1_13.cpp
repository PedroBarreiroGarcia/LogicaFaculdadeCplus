#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float cotacao_dolar=0, quantia_de_dolar=0;
	cout<<"\n conversao de dolar para real\n";
	cout<<"\n insira cotacao atual do dolar:";
	cin>>cotacao_dolar;
	cout<<"\n insira quantia de dolar:";
	cin>>quantia_de_dolar;
	cout<<"\n o valor em real eh: R$"<<cotacao_dolar*quantia_de_dolar<<"\n";
	system("PAUSE");
	return 0;
}
