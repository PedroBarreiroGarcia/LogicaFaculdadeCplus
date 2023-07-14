#include <cstdlib>
#include <iostream>
/*Solicitar um valor inteiro positivo ( consistir utilizando função )

Calcular a divisão por 2 (dois) com função

Mostrar o resultado */
using namespace std;

int consistir(int n)
{
 do{
    cout<<"\n digite um numero:";
    cin>>n;
 }while(n<0);
 return(n);     
}


int dividir(int n){
    n=n/2;
    return(n);   
}

int main(int argc, char *argv[])
{   
    int numero=0;
    cout<<"\n divisao por 2\n";
    numero=consistir(numero);
    cout<<"\n o resultado eh:"<<dividir(numero)<<"\n";   
    system("PAUSE");
    return 0;
}
