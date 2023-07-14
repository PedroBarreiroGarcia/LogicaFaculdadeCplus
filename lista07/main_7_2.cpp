#include <cstdlib>
#include <iostream>
/*Solicitar dois valores inteiros positivos ( consistir utilizando função )

Calcular a soma

Mostrar a soma*/
using namespace std;

int cons(int n)
{
 do{
    cout<<"\n digite um numero:";
    cin>>n;
 }while(n<0);
 return(n);     
}

int soma(int n1 , int n2 ){
	int soma;
	soma=n1+n2;
	return(soma);
}

int main(int argc, char *argv[])
{
    int n1=0,n2=0;
    cout<<"\n soma \n";    
    n1=cons(n1);
    n2=cons(n2);
    cout<<"\n a soma eh: "<< soma(n1,n2); 
    cout<<"\n";
	system("PAUSE");
    return EXIT_SUCCESS;
}
