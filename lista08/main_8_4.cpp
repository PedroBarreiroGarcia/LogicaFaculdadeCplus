#include <cstdlib>
#include <iostream>
/*4) Mostrar a soma dos números inteiros entre 0 e o número digitado*/
using namespace std;
int cons(int);
int soma(int);
int main(int argc, char** argv) {
	int num=0;
	cout<<"\n soma \n";
	num=cons(num);
	cout<<"\n a soma de todos os antecessores de "<<num<<" ate zero eh:"<<soma(num)<<"\n";
	return 0;
}

int cons(int n){
	do{
		cout<<"\n digite um numero:";
		cin>>n;
	}while(n<0);
}

int soma(int n){
	if(n<=0){
		return(0);
	}
	else{
		return(n+soma(n-1));
	}
	soma(n-1);
}
