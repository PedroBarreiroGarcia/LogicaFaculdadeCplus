#include <iostream>
using namespace std;
/*
10) Credito especial em fun��o do saldo m�dio.
	- ler o saldo medio do cliente,
	- calcular o valor do credito em fun��o da tabela a seguir:
			SALDO M�DIO		% CREDITO
			0  a 200			0%
			201 a 400			20%
			401 a 600			30%
			Acima de 601			40%
	
	- mostrar como sa�da uma mensagem informando o saldo m�dio e o valor do cr�dito
Autor: Lucas Kendy
*/

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int saldo=0, credito=0;
	cout<<"Tabela de credito em fun��o do saldo medio\n\n";
	cout<<"Insira o saldo medio: \n";
	cin>>saldo;
	
	
	if (saldo>=0){
		if(saldo >=0 && saldo<=200){
			credito=0;
		}
		else{
			if(saldo>=201 && saldo<=400){
				credito=20;
			}
			else{
				if(saldo>=401 && saldo<=600){
					credito=30;
				}
				else{
					credito=40;
				}
			}
		}
	}
	else{
		cout<<"Saldo inv�lido\n";
	}
	
	cout<<"o saldo � de "<<saldo<< " e o seu cr�dito � de " << credito << "%\n";
	system("pause");
	return 0;
}
