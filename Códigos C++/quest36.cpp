#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int l, c, i, j;
	int A[l][c], B[l][c], C[l][c];
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t\t***ENTRADA DE DADOS***"<<endl;
	cout<<"\nInsira o n�mero de linhas para as matrizes: ";
	cin>>l;
	cout<<"\nInsira o n�mero de colunas para as matrizes: ";
	cin>>c;
	system("pause");
	system("cls");
	
	cout<<"\nMatriz A: ";
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				cout<<"\nInsira um n�mero: ";
				cin>>A[i][j];
			}
		} 
	system("pause");
	system("cls");
	
	cout<<"\nMatriz B: ";
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				cout<<"\nInsira um n�mero: ";
				cin>>B[i][j];
			}
		}
	
	system("pause");
	system("cls");
	
	cout<<"\n\t\t\t***SA�DA DE DADOS***"<<endl;
	cout<<"\nMATRIZ A: ";
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				cout<<A[i][j]<<"  ";
			}
			cout<<endl;
		}
		
	cout<<"\n\nMATRIZ B: ";
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
				cout<<B[i][j]<<"  ";
			}
		cout<<endl;
	}
	
	cout<<"\n\nMatriz C resultado da soma de matriz A e B: ";
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			C[i][j] = A[i][j] + B[i][j];
			cout<<C[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	system("pause");
	system("cls");
}
