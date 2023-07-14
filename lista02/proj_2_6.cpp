#include <iostream>
using namespace std;
//6) Receber 3 valores numéricos, X, Y e Z, e verificar se esses valores podem corresponder aos lados de um triângulo. 
//Em caso afirmativo, informar ao usuário se o triângulo é equilátero, isóscelos ou escaleno.
//Autor: Lucas Kendy

//info: "O triângulo é escaleno quando as medidas dos lados são todas diferentes."
//info: "O triangulo isosceles possui a base diferente dos demais lados"
//info: "O triangulo equilatero tem as tres medidas iguais"

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int x=0, y=0, z=0;
	cout<<"Verificação de triangulo\n\n";
	cout<<"Digite a medida de X\n";
	cin>>x;
	cout<<"Digite a medida de Y\n";
	cin>>y;
	cout<<"Digite a medida de Z\n";
	cin>>z;
	if (x==y && y==z){
		cout<<"Triangulo equilatero\n";
	}
	else{
		if (x==y || y==z || x==z){
			cout<<"Triangulo isosceles\n";
		}
		else{
			cout<<"Triangulo escaleno\n";
		}
	}
	system("pause");
	return 0;
}
