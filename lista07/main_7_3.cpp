#include <cstdlib>
#include <iostream>
# include<conio.h>

/*
3- Solicitar um valor inteiro positivo ( consistir utilizando função )
Calcular a divisão por 2 (dois)
Mostrar o resultado
*/
using namespace std;

int cons(int);
int div(int);
int main(int argc, char *argv[])
{
    int num=0;
    cout<<"\n divisao por dois \n";
    num=cons(num);
    cout<<"\n o resultado eh:"<< div(num) <<"\n"; 
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

int div (int n){
	int div;
	div=n/2;
	return(div);
}
