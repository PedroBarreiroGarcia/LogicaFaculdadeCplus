#include <cstdlib>
#include <iostream>

using namespace std;
/*Criar uma matriz para o controle de faltas de uma turma, a turma tem no Maximo 30 alunos e o semestre de 5 meses.

· Solicitar as faltas de cada aluno e inserir na matriz,

· Criar um vetor de 30 elementos do tipo inteiro

· Calcular a média de faltas de cada aluno e inserir no vetor

· Ao final mostrar as faltas e a média correspondente às faltas*/


int main(int argc, char** argv) {
	int mat[30][5],l=0,c=0,aluno=1,sem=1,soma=0,i=0;
	float vet[30];
	cout<<"\n faltas de uma turma \n";
	for(l=0;l<=29;l++){
		for(c=0;c<=4;c++){
			do{cout<<"\n digite numero de faltas do aluno "<< aluno <<" pelo " << sem  <<" semestre : ";
			cin>>mat[l][c];
			}while(mat[l][c]<0);
			sem++;
		}
		sem=1;
		aluno++;
	}
	i=0;
	for(l=0;l<29;l++){
		for(c=0;c<=4;c++){
			soma=soma+mat[l][c];
		}
		vet[i]=soma/5;
		i++;
		soma=0;
	}
	cout<<"\n numero de faltas por semestre: \n";
	for(l=0;l<=29;l++)
    {
    	for(c=0;c<=4;c++)
    	{
    		cout<<"  "<<mat[l][c]<<"  ";
      	}                   
      	cout<<"\n";
    }
    cout<<"\n media de faltas por aluno: ";
    for(i=0;i<=29;i++){
    	cout<<"\n "<< vet[i]<<"\n";
	}
	system("PAUSE");
	return 0;
}
