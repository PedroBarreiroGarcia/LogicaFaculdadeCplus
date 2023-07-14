#include <cstdlib>
#include <iostream>

/*4)	Criar uma matriz A de 3 linhas e 3 colunas do tipo inteiro
"	Solicitar p/ o usuário os valores  para inserir na matriz A 
"	Criar um Vetor B de 3 elementos do tipo inteiro
"	Gravar no vetor b a diagonal secundaria da matriz A
"	Após a inserção do valores mostrar a matriz A e o vetor B*/
using namespace std;

int main(int argc, char** argv) {
	int a[3][3], b[3], l=0, c=0, i=0;
	cout<<"\n diagonal secundaria \n";
	for(l=0;l<=2;l++){
		for(c=0;c<=2;c++){
			cout<<"\n insira um numero: ";
			cin>>a[l][c];
		}
	}
	c=3;
	for(l=0;l<=2;l++){
		b[l]=a[l][c=c-1];
	}
/*	
	b[0]=a[0][2];
	b[1]=a[1][1];				//gambiarra de antes
	b[2]=a[2][0];
*/
	cout<<"\n valores da matriz A: \n";
	for(l=0;l<=2;l++){
		for(c=0;c<=2;c++){
			cout<<"   "<<a[l][c]<<"   ";
		}
		cout<<"\n";
	}
	cout<<"\n valores do vetor B: \n";
	for(int l=0;l<=2;l++){
			cout<<b[l]<<"\n";
	}
	
	system("pause");
	return 0;
}
