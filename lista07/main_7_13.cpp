#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
/* 13- Credito especial em função do saldo médio.
Solicitar o saldo medio do cliente,
calcular o valor do credito em função da tabela a seguir:
			SALDO MÉDIO		% CREDITO
			0  a 200			0%
			201 a 400			20%
			401 a 600			30%
			Acima de 601		40%
	
mostrar como saída uma mensagem informando o saldo médio e o valor do crédito
 */
float insira(float);
float credito(float);
int main(int argc, char** argv) {
	float n=0;
	cout<<"\n credito especial \n";
	n=insira(n);
	credito(n);
	system("PAUSE");
	return 0;
}

float insira(float n){
	cout<<"\n insira valor do saldo: ";
	cin>>n;
	return(n);
}
float credito(float n){
	if (n>0 && n<200 || n<0){
		cout<<"\n o saldo eh de: "<< n<<" , porem nao possui credito\n";
	}
	else{
		if (n>=201 && n<=400){
			cout<<"\n o saldo eh de: "<< n<<" e o credito eh de:"<<(n*.2)<<"\n";
		}
		else{
			if (n>=401 && n<=600){
				cout<<"\n o saldo eh de: "<< n<<" e o credito eh de:"<<(n*.3)<<"\n";
			}
			else(n>=601);{
				cout<<"\n o saldo eh de: "<< n<<" e o credito eh de:"<<(n*.4)<<"\n";
			}
		}
	}
}
