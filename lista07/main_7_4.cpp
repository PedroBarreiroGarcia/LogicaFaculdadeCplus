#include <cstdlib>
#include <iostream>
# include<conio.h>

/*
4- Solicitar dois valores inteiros positivos ( consistir utilizando função )
Calcular a soma
Mostrar a soma
*/
using namespace std;

int cons(int);
int soma(int, int);
int main(int argc, char *argv[])
{
    int n1=0,n2=0;
    cout<<"\n soma \n";
    n1=cons(n1);
    n2=cons(n2);
    cout<<"\n o resultado eh:"<< soma(n1,n2) <<"\n"; 
    system("PAUSE");
    return EXIT_SUCCESS;
}

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

