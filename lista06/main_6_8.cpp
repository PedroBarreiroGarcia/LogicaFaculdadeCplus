#include <cstdlib>
#include <iostream>

using namespace std;
/* Criar uma matriz A de mesma dimensão que B ( 3 x 3) do tipo inteiro. 
Efetuar a soma matricial A + B e armazenar o resultado na matriz C.*/

int main(int argc, char** argv) {
	int mat_a[3][3], mat_b[3][3],mat_c[3][3],l=0,c=0;
	cout<<"\n soma de matrizes \n";
	for(l=0;l<=2;l++){
		for(c=0;c<=2;c++){
			cout<<"\n insira um numero na matriz A: ";
			cin>>mat_a[l][c];
		}
	}
	for(l=0;l<=2;l++){
		for(c=0;c<=2;c++){
			cout<<"\n insira um numero na matriz B: ";
			cin>>mat_b[l][c];
		}
	}
	for(l=0;l<=2;l++){
		for(c=0;c<=2;c++){
			mat_c[l][c]=mat_a[l][c]+mat_b[l][c];
		}
	}
	cout<<"\n matriz A: \n";
	for(l=0;l<=2;l++){
		for(c=0;c<=2;c++){
			cout<<"   "<< mat_a[l][c]<<"  ";
		}
		cout<<"\n";
	}
	cout<<"\n matriz B: \n";
	for(l=0;l<=2;l++){
		for(c=0;c<=2;c++){
			cout<<"   "<< mat_b[l][c]<<"  ";
		}
		cout<<"\n";
	}
	cout<<"\n soma das matrizes: \n";
	for(l=0;l<=2;l++){
		for(c=0;c<=2;c++){
			cout<<"   "<< mat_c[l][c]<<"  ";
		}
		cout<<"\n";
	}
	system("PAUSE");
	return 0;
}
