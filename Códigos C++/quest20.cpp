#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[10], B[10], i, j;
	int U[20]; // uni�o de a e b
	int D[10]; // diferen�a entre a e b
	int S[10]; // soma entre a e b
	int P[10]; // produto entre a e b
	int I[10]; // intersec��o entre a e b
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<10;i++){
		cout<<"\nInsira um n�mero: ";
		cin>>A[i];
		U[i]=A[i]; // uni�o
	}
	system("pause");
	system("cls");
	
	cout<<"\nVetor B: ";
	for(i=0;i<10;i++){
		cout<<"\nInsira um n�mero: ";
		cin>>B[i];
		U[10+i]=B[i]; // uni�o
	}
	system("pause");
	system("cls");
	
	cout<<"\n\t\t***SA�DA DE DADOS***\n";
	cout<<"\n\n***VETOR A***\n";
	for(i=0;i<10;i++){
		cout<<A[i]<<"  ";
	}
	
	cout<<"\n\n***VETOR B***\n";
	for(i=0;i<10;i++){
		cout<<B[i]<<"  ";
	}
	
	cout<<"\n\nUni�o entre vetor A e B: ";
	for(i=0;i<20;i++){
		cout<<U[i]<<"  ";
	}
	// diferen�a
	cout<<"\n\nDiferen�a entre vetor A e B: ";
	for(i=0;i<10;i++){
		D[i] = A[i] - B[i];
		cout<<D[i]<<"  ";
	}
	// soma
	cout<<"\n\nSoma entre vetor A e B: ";
	for(i=0;i<10;i++){
		S[i] = A[i] + B[i];
		cout<<S[i]<<"  ";
	}
	// produto
	cout<<"\n\nProduto entre vetor A e vetor B: ";
	for(i=0;i<10;i++){
		P[i] = A[i] * B[i];
		cout<<P[i]<<"  ";
	}
	// intersec��o
	int x = 0;
	for(i=0;i<20;i++){
		for(j=i+1;j<20;j++){
			if(U[i] == U[j]){
				I[x] = U[i];
				x++;
			}
		}
	}
	cout<<"\n\nIntersec��o entre vetor A e B: ";
	for(i=0;i<x;i++){
		cout<<I[i]<<"  ";
	}
	cout<<"\n";
	system("pause");
	return 0;
}
