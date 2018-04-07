#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[4][5], i, j, x, L[x], s = 0, soma = 0;
	int y;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n";
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
			soma = soma + A[i][j];
		}	
	}
	system("pause");
	system("cls");
	y = 0;
	x = 0;
	do{
		for(j=0;j<5;j++){
			s = s + A[y][j];
			L[x] = s;		
		}
		y++;
		x++;	
	}
	while(y<4);
	cout<<"\n\t\t***SAÍDA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n\n";
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			cout<<A[i][j]<<"  ";
		}	
		cout<<"\n";
	}
	cout<<"\n\nSoma dos elementos: "<<soma;
	cout<<"\n\nSoma dos elementos de cada linha: ";
	for(i=0;i<x;i++){
		cout<<L[i]<<"  ";
	}
	cout<<endl;
	system("pause");
	return 0;
}
