// Fun��o do programa: 2.	Fa�a um programa que, dados dois vetores reais de 200 posi��es, efetue a subtra��o entre eles e armazene o resultado em um terceiro vetor. Ao final mostre os tr�s vetores.
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
		cout<<"\nInsira um n�mero: ";
		cin>>A[i];
	}	
	system("pause");
	system("cls");
	
	cout<<"\nVetor B: ";
	for(i=0;i<200;i++){
		cout<<"\nInsira um n�mero: ";
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
