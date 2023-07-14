#include <cstdlib>
#include <iostream>
/*3) Mostrar a soma de todos os números ímpares que são múltiplos de três e que estão entre 0 e o números digitado.*/
using namespace std;

int cons(int);
int soma(int);
int main(int argc, char** argv) {
	int n=0;
	cout<<"\n soma de impares e multiplos de 3\n";
	n=cons(n);
	cout<<"\n o resultado eh:"<<soma(n);
	system("PAUSE");
	return 0;
}

int cons(int num){
	do{
		cout<<"\n digite numero final:";
		cin>>num;
	}while(num<0);
}

int soma(int num){
	int somar=0;
	cout<< num<<"  ";
	if(num<=0){
		return(0);
	}
	else{
		if (num%2==1){
			if(num%3==0){
			return (num+soma(num-1));
			}
		}
		soma(num-1);
	}
}
