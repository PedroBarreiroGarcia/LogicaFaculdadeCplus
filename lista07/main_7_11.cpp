#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/* 11-	Receber valores de base e altura de um triângulo e verificar se são valores válidos (positivos maiores que zero).
   Em caso afirmativo, calcular a área do triângulo. */

float inserir (float);
float area(float,float);
int main(int argc, char** argv) {
	float base=0,h=0;
	cout<<"\n area triangulo \n";
	base=inserir(base);
	h=inserir(h);
	area(base,h);
	system("PAUSE");
	return 0;
}

float inserir(float n){
	cout<<"\n digite um numero:";
	cin>>n;
	return(n);
}
float area(float n, float n1){
	if(n>0 && n1>0){
		cout<<"\n a area do triangulo eh: "<< (n*n1)/2<<"\n"; 
	}
	else{
		cout<<"\n valores invalidos\n";
	}
}
