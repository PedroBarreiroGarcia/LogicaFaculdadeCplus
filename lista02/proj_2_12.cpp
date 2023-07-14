#include <iostream>
using namespace std;
/*
12) Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente.
O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo: 
Código do produto Preço unitário 
1 		R$ 32,00 
2 		R$ 45,00 
3		R$ 37,00 
4 		R$ 33,00 
*/
int main(int argc, char** argv) {
	int codProduto=0, qntdComprada=0;
	float precoTotal=0;
	setlocale(LC_ALL,"portuguese");
	cout<<"Caixa\n\n";
	cout<<"Insira o código do produto: \n\n";
	cin>>codProduto;
	cout<<"\n";
	
	if(codProduto>=1 && codProduto<=4){
		cout<<"\nInsira a quantidade de produtos o cliente comprou: \n\n";
		cin>>qntdComprada;
		cout<<"\n\n";
		if(codProduto==1){
			precoTotal=32*qntdComprada;
		}
		if(codProduto==2){
			precoTotal=45*qntdComprada;
		}
		if(codProduto==3){
			precoTotal=37*qntdComprada;
		}
		if(codProduto==4){
			precoTotal=33*qntdComprada;
		}
		cout<<"O preço total é de: "<<precoTotal<<"R$\n";
	}
	else{
		cout<<"Produto invalido ou não inserido no sistema\n";
	}
	system("pause");
	return 0;
}
