#include <cstdlib>
#include <iostream>

/*5- Solicitar um valor inteiro positivo ( consistir utilizando fun��o)
Calcular a somat�ria dos n�meros at� o valor informado
Mostrar a somat�ria*/

using namespace std;

int cons(int n);
int somatoria(int n);
int main(int argc, char *argv[])
{
    int num=0;
    cout<<"\n somatoria \n";
    num=cons(num);
    num=somatoria(num);
    cout<<"\n o somatorio dos numeros eh: "<< num<<"\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}

int cons(int n){
	do{
    cout<<"\n digite um numero:";
    cin>>n;
 }while(n<=0);
 return(n);     
}

int somatoria(int n){
    int soma=0;
    while(n>0){
    	soma=soma+n;
    	cout<<" "<<n;
    	n--;
	}		              
    return(soma);
}
