#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int cont=1;
    cout<<"\n mostrar de 1 a 50 \n";
    do
    {
      cout<<"\n "<<cont;
      cont=cont+1;
    }while(cont<=50);
    system("PAUSE");
	return 0;
}
