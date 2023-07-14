#include <iostream>
using namespace std;
//7) Receber 3 valores numéricos em 3 variáveis, A, B e C
//e trocar os valores entre as variáveis de forma que,
// ao final do algoritmo, a variável A possua o menor valor e a variável C o maior.
//Autor: Lucas Kendy

/*		a-b-c ok
		a-c-b ok
		b-a-c ok
		b-c-a ok
		c-b-a ok
		c-a-b ok
*/
int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int a=0, b=0, c=0, d=0;
	cout<<"Organização de variaveis\n\n";
	cout<<"Insira o valor de A: \n";
	cin>>a;
	cout<<"Insira o valor de B: \n";
	cin>>b;
	cout<<"Insira o valor de C: \n";
	cin>>c;
	if (a>b && a>c){
		if(b>c){
			d=a;
			a=c;
			c=d;
		}
		else{
			d=a;
			a=b;
			b=a;
			c=d;
		}
	}
	else{
		if(b>a && b>c){
			if(a>c){
				d=c;
				c=b;
				b=a;
				a=d;
			}
			else{
				d=c;
				c=b;
				b=d;
			}
		}
		else{
			if(c>b &&c>a){
				if(b<a){
					d=a;
					a=b;
					b=d;
				}
			}
		}
	}
	cout<<"O valor de A é: "<< a <<"\nO valor de B é: " << b << "\ne o valor de C é: "<< c <<"\n";
	system("pause");
	return 0;
}
