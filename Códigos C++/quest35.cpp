#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main(){
	int l, c, x, y;
	float A[l][c], V[x], S = 0, soma = 0, media;
	int i, j;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t\t***ENTRADA DE DADOS***"<<endl;
	cout<<"\nInsira o n�mero de linhas para a matriz: ";
	cin>>l;
	cout<<"\nInsira o n�mero de colunas para a matriz: ";
	cin>>c;
	system("pause");
	system("cls");
	cout<<"\nMatriz A: ";
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			cout<<"\nInsira um n�mero: ";
			cin>>A[i][j];
			S = S + A[i][j];
		}
	}
	y = 0;
	x = 0;
	do{
		for(i=0;i<l;i++){
			 soma = soma + A[i][y];
			 V[x] = soma;
		}
		x++;
		y++;
	}
	while(y<c);
	
	system("pause");
	system("cls");
	cout<<"\n\t\t\t***SA�DA DE DADOS***"<<endl;
	cout<<"\nMATRIZ A"<<endl;
	media = S/(static_cast<float>(l*c));
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"\n\nSoma de todos os elementos: "<<S<<endl;
	cout<<"\nM�dia: "<<media<<endl;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(A[i][j] < media){
				cout<<"\nO elemento "<<A[i][j]<<" est� abaixo da m�dia.";
			}
		}
	}
	cout<<"\nSoma dos elementos de cada coluna: ";
	for(i=0;i<x;i++){
		cout<<V[i]<<"  ";
	}
	system("pause");
	return 0;		
}
	

