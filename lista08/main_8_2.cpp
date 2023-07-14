#include <cstdlib>
#include <iostream>
/*2) Mostrar a soma dos pares de 0 até o número informado*/
using namespace std;

int inserir(int);
int soma(int);
int main(int argc, char *argv[])
{
    int n=0;
    cout<<"\n soma pares \n";
    n=inserir(n);
    cout<<"\n"<<soma(n);
    system("PAUSE");
    return EXIT_SUCCESS;
}

int inserir(int num){
    cout<<"\n insira um numero: ";
    cin>>num;
    return(num);
}

int soma(int num){
    int somar=0;
	if(num<=0){      
      return(0);
  	}
	else{
		if (num%2==0){
	   		return(somar=num+soma(num-1));
	}
		else{
	   		soma(num-1);
		}
    }
}

