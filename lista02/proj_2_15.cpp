#include <iostream>
using namespace std;
/*
15) As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem compradas pelo menos 12. 
Escreva um programa que leia o número de maçãs compradas, calcule e escreva o custo total da compra. 
*/

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int maca=0;
	float preco=0;
	cout<<"Calculadora de preço de maçãs\n\n";
	cout<<"Insira o total de maçãs: \n";
	cin>>maca;
	if(maca>=12){
		preco=maca*1;
	}
	else{
		preco=maca*1.3;	
	}
	cout<<"Preço total: "<<preco<<"R$\n";
	system("pause");
	return 0;
}
