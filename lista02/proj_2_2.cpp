#include <cstdlib>
#include <iostream>
#include <math.h>
//2) Solicitar 3 valores inteiros para o cálculo da equação de segundo grau
//Autor: Lucas Kendy

using namespace std;

int main(int argc, char *argv[])
{
    float delta=0, x=0, raiz=0;
    int a=0,b=0,c=0;
    cout<<"calculo da equaçao do segundo grau\n\n";
    cout<<"escreva o valor de a\n";
    cin>>a;
    if(a==0){
    	a=1;
	}
    cout<<"escreva o valor de b\n";
    cin>>b;
    if(b==0){
    	b=1;
	}
    cout<<"escreva o valor de c\n";
    cin>>c;
    if(c==0){
    	c=1;
	}
    delta=(b*b)-4*a*c;
    cout<<"O valor de delta eh: "<<delta<<"\n\n";
    if(delta<0)
    {
     cout<<"valor invalido, a equacao nao possui raizes\n";
    }
    else
    {
        if(delta==0)
        {
                    x=-b/(2*a);
                    cout<<"x1 igual a: "<<x<<"\n\n";
        }
        else{
        	raiz=sqrt(delta);
        	x= (-b+raiz)/2*a;
        	cout<<"x1 = "<<x<<"\n";
        	x= (-b-raiz)/2*a;
        	cout<<"x2 = "<<x<<"\n";
		}
    }            
    system("PAUSE");
    return EXIT_SUCCESS;
}
