#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float volume=0, raio=0, altura=0;
	cout<<"\n calculo de volume de uma lata de oleo \n";
	cout<< "\n digite valor do raio da base:";
	cin>> raio;
	cout<<"\n digite a altura da lata:";
	cin>> altura;
	volume = (3,14159*(raio*raio)*altura);
	cout<< "\n o volume da lata eh:"<< volume;
	system("pause");
	return 0;
}

