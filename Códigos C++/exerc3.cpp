// Fun��o do programa: 3. Fa�a um programa que, dados dois vetores reais de 10 posi��es, efetue a soma entre eles e armazene o resultado em um terceiro vetor. Ao final mostre os tr�s vetores.
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	float A[10], B[10], C[10];
	int i;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<10;i++){
		cout<<"\nInsira um n�mero: ";
		cin>>A[i];
	}	
	system("pause");
	system("cls");
	
	cout<<"\nVetor B: ";
	for(i=0;i<10;i++){
		cout<<"\nInsira um n�mero: ";
		cin>>B[i];
	}	
	system("pause");
	system("cls"); 
	
	cout<<"\n\t\t***SA�DA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<10;i++)
		cout<<A[i]<<"  ";
		
	cout<<"\n\nVetor B: ";
	for(i=0;i<10;i++){
		cout<<B[i]<<"  ";
	}
	
	cout<<"\n\nVetor C: ";
	for(i=0;i<10;i++){
		C[i] = A[i] + B[i];
		cout<<C[i]<<"  ";
	}
	cout<<"\n";
	system("pause");
	return 0;
}
