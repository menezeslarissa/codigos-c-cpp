// Função do programa: 2.	Faça um programa que, dados dois vetores reais de 200 posições, efetue a subtração entre eles e armazene o resultado em um terceiro vetor. Ao final mostre os três vetores.
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	float A[200], B[200], C[200];
	int i;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<200;i++){
		cout<<"\nInsira um número: ";
		cin>>A[i];
	}	
	system("pause");
	system("cls");
	
	cout<<"\nVetor B: ";
	for(i=0;i<200;i++){
		cout<<"\nInsira um número: ";
		cin>>B[i];
	}	
	system("pause");
	system("cls");
	
	for(i=0;i<200;i++){
		C[i] = A[i] - B[i];
		cout<<C[i]<<"  ";
	}
	system("pause");
	return 0;
}
