#include <iostream>
using namespace std;
//9) Dado um número inteiro de segundos, mostrar a quantas horas, minutos e segundos ele corresponde.
//Autor: Lucas Kendy

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int num=0, segundos=0, minutos=0, horas=0;
	cout<<"conversor de segundos para horas, minutos e segundos\n\n";
	cout<<"Insira os segundos para serem convertidos\n";
	cin>>num;
	
	/*
	horas=num/3600;
	minutos=((num-(horas*3600))/60);
	segundos=num%60;
	*/
	
	if (num>=60){
		segundos=num%60;
		minutos=num/60;
		if (minutos>=60){
			horas=minutos/60;
			minutos=minutos%60;
		}
	}
	else{
		segundos=num;
	}
	
	cout<<"a conversão é: "<<horas<<" horas, "<<minutos<<" minutos e "<<segundos<<" segundos\n";
	system("pause");
	return 0;
}
