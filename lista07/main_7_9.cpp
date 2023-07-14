#include <cstdlib>
#include <iostream>
#include <math.h>
/* 9-	Receber 3 valores numéricos, X, Y e Z, e verificar se esses valores podem corresponder aos lados de um triângulo.
Em caso afirmativo, informar ao usuário se o triângulo é equilátero, isóscelos ou escaleno. */

using namespace std;

float insira(float);
float triangulo(float,float,float);
int main(int argc, char** argv) {
	float x,y,z;
	cout<<"\n triangulo \n";
	x=insira(x);
	y=insira(y);
	z=insira(z);
	triangulo(x,y,z);
	cout<<"\n";
	system("PAUSE");
	return 0;
}

float insira(float n){
	cout<<"\n digite um valor:";
	cin>>n;
	return(n);
}

float triangulo(float n1, float n2, float n3){
	cout<<" "<<n1<<" "<<n2<<" "<<n3;
	if((fabs(n2-n3)<n1 && n1<n2+n3)&&(fabs(n1-n3)<n2 && n2<n1+n3) && (fabs(n2-n1)<n3 && n3<n1+n2)){
		if (n1==n2 && n2==n3 && n3==n1){
			cout<<"\n as dimensoes foram um triangulo equilatero";
		}
		else{
			if(n1!=n2 && n2!=n3 && n1!=n3){
				cout<<"\n dimensoes foram um triangulo escaleno";
			}
			else{
				cout<<"\n dimensoes foram um triangulo isoceles";
			}
		}
	}
	else{
		cout<<"\n nao possui dimensoes validas para formar um triangulo";
	}
}


