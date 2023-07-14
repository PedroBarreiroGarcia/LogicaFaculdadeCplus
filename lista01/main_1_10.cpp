#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float r=0, pi=3.14159, area=0;
	cout<<"\n calcular area da circunferencia \n";
	cout<<"\n insira valor do raio: \n";
	cin>>r;
	area=(pi*(r*r));
	cout<<"\n a area eh: \n"<< area <<"\n";
	system("PAUSE");
	return 0;
}
