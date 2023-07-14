#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int cont=1;
	float n1=0, n2=0, n3=0, mp=0,somamp=0, mediaturma=0;
	// mp= media ponderada//
	cout<<"\n calcular notas de uma turma \n";
	while(cont<=50)
	{
		cout<<"\n digite primeira nota: ";
		cin>>n1;
		cout<<" digite segunda  nota: ";
		cin>>n2;
		cout<<" digite terceira nota: ";
		cin>>n3;
		if (n1>=0 &  n1<=10 && n2>=0 & n2<=10 && n3>=0 & n1<=10)
		{
		mp=(n1*2+n2*4+n3*3)/10;
		cout<<" a media do aluno eh:"<<mp<<"\n";
		somamp=somamp+mp;
		if (mp>=7)
		{
			cout<<" aprovado\n";
		}
		else
		{
			cout<<" reprovado\n";
		}
		}
		else
		{
			cout<<"\n digitar notas somente de 0 a 10\n";
		}
		cont=cont+1;
	}
	cout<<"\n a media da turma eh:"<< somamp/50<<"\n";
	system("pause");
	return 0;
}
