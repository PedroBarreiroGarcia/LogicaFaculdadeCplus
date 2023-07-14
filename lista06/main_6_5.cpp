#include <cstdlib>
#include <iostream>

using namespace std;

/*5) Criar um matriz A 2x2 do tipo inteiro

· Solicitar p/ o usuário os valores inteiro positivo (consistir) e inserir na matriz A

· Criar uma matrizB 2x2 do tipo inteiro

· Gravar na matrizB o fatorial de cada elemento da matrizA

· Mostrar as matrizes*/

int main(int argc, char *argv[])
{
    int mat_a[2][2],l=0,c=0,mat_b[2][2],fat=1,n=0;
    cout<<"\n fatorial \n";
    for(l=0;l<=1;l++){
          for(c=0;c<=1;c++){            
              do{
                cout<<"\n insira um numero:  ";
                cin>>mat_a[l][c];
              }while(mat_a[l][c]<=0);
        }
    }
    for(l=0;l<=1;l++){
        for(c=0;c<=1;c++){
            n=mat_a[l][c];           
            while(n>=1){     
                 fat=fat*n;  
                 n--;        
            }
            mat_b[l][c]=fat; 
			fat=1;      
         }             
    }
   	cout<<"\n"<<"\n matriz A:\n";
	for(l=0;l<=1;l++)
    {
    	for(c=0;c<=1;c++)
    	{
    		cout<<"  "<<mat_a[l][c]<<"  ";
      	}                   
      	cout<<"\n";
    }
    cout<<"\n"<<"\n matriz B:\n";
	for(l=0;l<=1;l++)
    {
    	for(c=0;c<=1;c++)
    	{
    		cout<<"  "<<mat_b[l][c]<<"  ";
      	}                   
      	cout<<"\n";
    }
    system("PAUSE");
    return 0;
}
