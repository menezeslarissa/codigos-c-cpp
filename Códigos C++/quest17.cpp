#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[10], B[10], C[20], i, j, aux;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<10;i++){
		cout<<"\nInsira um número: ";
		cin>>A[i];
		C[i] = A[i]; // armazena os dez valores em outro vetor
	}
	system("pause");
	system("cls");
	
	cout<<"\nVetor B: ";
	for(i=0;i<10;i++){
		cout<<"\nInsira um número: ";
		cin>>B[i];
		C[10+i] = B[i]; // armazena os valores no vetor c a partir da décima posição
	}
	system("pause");
	system("cls");
	
	cout<<"\nOs elementos do vetores A e B foram armazenados num vetor C.\n";
	cout<<"\nVetor C: ";
	for(i=0;i<20;i++){
		cout<<C[i]<<"  "; 
	}
	cout<<"\n\nVetor C na ordem crescente: \n";
	for(i=0;i<20;i++){
		for(j=i+1;j<20;j++){ // testa o valor anterior com os outros posteriores
			if(C[i]>C[j]){ // troca as posições
				aux = C[i];
				C[i]=C[j];
				C[j]=aux;
			}
		}
	}
	
	for(i=0;i<20;i++){
		cout<<C[i]<<"  ";
	}
	cout<<"\n";
	system("pause");
	return 0;
}	
	
	
	
