#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	// Exercício 2:Faça um algoritmo utilizando o comando while que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.\\
	
	int n=11, cont=11;
	cout<<"\n contagem regressiva\n";
	while(cont>0)
	{
		n=n-1;
		cout<<" "<< n<<"\n";
		cont=cont-1;
	}
	system("PAUSE");
	return 0;
}
