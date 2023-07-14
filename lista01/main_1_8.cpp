#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int dias_totais, anos, meses, dias = 0;
	cout<<"\n calcular calcular idade de uma pessoa baseada em dias \n";
	cout<<"\n digite quantos dias a pessoa tem:";
	cin>> dias_totais;
	
	anos= (dias_totais/365);
	
	meses= (dias_totais % 365)/12;
	
	dias= (meses %12);
	
	cout<< "\n a pessoa tem "<< anos<< " anos "<< meses << "meses e "<< dias << "dias" << "\n";
	system("PAUSE");
	return 0;
}
