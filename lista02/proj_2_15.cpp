#include <iostream>
using namespace std;
/*
15) As ma��s custam R$ 1,30 cada se forem compradas menos de uma d�zia, e R$ 1,00 se forem compradas pelo menos 12. 
Escreva um programa que leia o n�mero de ma��s compradas, calcule e escreva o custo total da compra. 
*/

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int maca=0;
	float preco=0;
	cout<<"Calculadora de pre�o de ma��s\n\n";
	cout<<"Insira o total de ma��s: \n";
	cin>>maca;
	if(maca>=12){
		preco=maca*1;
	}
	else{
		preco=maca*1.3;	
	}
	cout<<"Pre�o total: "<<preco<<"R$\n";
	system("pause");
	return 0;
}
