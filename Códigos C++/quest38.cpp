#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[4][5], i, j, somaT = 0, somal[4];
	int x, y;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t\t***ENTRADA DE DADOS***"<<endl;
	cout<<"\nMatriz A: "<<endl;
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
			somaT = somaT + A[i][j];		
		}
	}
	y = 0;
	x = 0;
	i = 0;
	do{
		for(j=0;j<5;j++){
			y = y + A[i][j];
			somal[x]= y; 
		}
		++i;
		++x;
	}
	while(i<4);
	system("pause");
	system("cls");
	
	cout<<"\n\t\t\t***SAÍDA DE DADOS***"<<endl;
	cout<<"\nMATRIZ A"<<endl;
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	
	cout<<"Soma de todos os elementos: "<<somaT<<endl;
	cout<<"Soma de todos os elementos de cada linha: ";
	for(i=0;i<x;i++){
		cout<<somal[i]<<"  ";
	}
	system("pause");
	return 0;	
}	
