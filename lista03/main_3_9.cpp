#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	int num, temp=0;
	cout<<�\n digite qualquer numero para verificar o primeiro:\n�;
	scanf (�% d�, & num);
	int i=2;
	while (i <=num/2)
	{
	if (num% i==0)
	{
	temp ++;
	quebrar;
	}
	i ++;
	}
	if (temp==0 && num!=1)
	{
	printf (�% d � um n�mero primo�, num);
	}
	else
	{
	printf (�% d n�o � um n�mero primo�, num);
	}
	return 0;
}
