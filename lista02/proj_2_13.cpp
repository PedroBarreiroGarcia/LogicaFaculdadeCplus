#include <iostream>
using namespace std;
//13) Escrever um algoritmo que lê um valor em Reais (R$) 
//e calcule qual o menor número possível de notas de 100, 50, 10, 5 e 1 em que o valor lido pode ser decomposto. 
//Escrever o valor lido e a relação de notas necessárias. 
//Autor: Lucas Kendy

int main(int argc, char** argv) {
	int nota100=0, nota50=0, nota10=0, nota5=0, nota1=0, reais=0; 
	setlocale(LC_ALL,"portuguese");
	cout<<"Decomposição de notas em reais\n\n";
	cout<<"Insira a quantidade de reais\n";
	cin>>reais;
	
	nota100=reais/100;
	nota50=(reais%100)/50;
	nota10=((reais%100)%50)/10;
	nota5=(((reais%100)%50)%10)/5;
	nota1=(((reais%100)%50)%10)%5;
	
	cout<<"notas de 100= "<<nota100<<"\n";
	cout<<"notas de 50= "<<nota50<<"\n";
	cout<<"notas de 10= "<<nota10<<"\n";
	cout<<"notas de 5= "<<nota5<<"\n";
	cout<<"notas de 1= "<<nota1<<"\n";
	system ("pause");
	return 0;
}
