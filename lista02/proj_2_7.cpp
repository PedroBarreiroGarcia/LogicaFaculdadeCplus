#include <iostream>
using namespace std;
//7) Receber 3 valores num�ricos em 3 vari�veis, A, B e C
//e trocar os valores entre as vari�veis de forma que,
// ao final do algoritmo, a vari�vel A possua o menor valor e a vari�vel C o maior.
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
	cout<<"Organiza��o de variaveis\n\n";
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
	cout<<"O valor de A �: "<< a <<"\nO valor de B �: " << b << "\ne o valor de C �: "<< c <<"\n";
	system("pause");
	return 0;
}
