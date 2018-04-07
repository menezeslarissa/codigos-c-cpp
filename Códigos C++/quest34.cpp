#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[5][5], i, j;
	int sA = 0;// soma linha 4
	int sB = 0; // soma da coluna 2
	int sC = 0; // soma da diagonal principal
	int sT = 0; // soma dos elementos da matriz
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n";
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
			sT = sT + A[i][j];
			if( i == j) sC = sC + A[i][j];
		}	
	}
	for(j=0;j<5;j++){
		sA = sA + A[3][j];
	}
	for(i=0;i<5;i++){
		sB = sB + A[i][1];
	}
	
	system("pause");
	system("cls");
	cout<<"\n\t\t***SAÍDA DE DADOS***"<<endl;
	cout<<"\nMATRIZ A:\n\n";
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			cout<<A[i][j]<<"  ";
		}	
		cout<<"\n";
	}
	
	cout<<"\n\n\nSoma dos elementos da linha 4: "<<sA<<endl;
	cout<<"\nSoma dos elementos da coluna 2: "<<sB<<endl;
	cout<<"\nSoma dos elementos da diagonal principal: "<<sC<<endl;
	cout<<"\nSoma de todos os elementos da matriz: "<<sT<<endl;
	system("pause");
	return 0;
}
