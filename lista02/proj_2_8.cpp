#include <iostream>
using namespace std;
//8) Receber valores de base e altura de um triângulo e verificar se são valores válidos (positivos maiores que zero).
//Em caso afirmativo, calcular a área do triângulo.
//Autor: Lucas Kendy

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int base, altura;
	cout<<"Calculo de area de triangulo\n\n";
	cout<<"Insira a medida da base\n";
	cin>>base;
	cout<<"Insira a medida da altura\n";
	cin>>altura;
	if (base>0 && altura>0){
		cout<<"A area do triangulo é: "<<(base*altura)/2<<"\n\n";
	}
	else{
		cout<<"Alguma das medidas são invalidas!\n\n";
	}
	system("pause");
	return 0;
}
