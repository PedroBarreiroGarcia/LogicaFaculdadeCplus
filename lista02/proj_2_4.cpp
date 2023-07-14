#include <iostream>
using namespace std;
//4) Solicitar um valor inteiro positivo ( consistir ) e mostrar se esse número é par ou não par 

//Autor: Lucas Kendy

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int n1=0;
	cout<<"Insira um numero inteiro positivo\n\n";
	cin>>n1;
	n1=n1%2;
	if (n1==0){
		cout<<"O numero e par\n";
	}
	else{
		cout<<"O numero nao e par\n";
	}
	system("pause");
	return 0;
}
