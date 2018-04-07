#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[10][10], D[10], i, j, x = 0;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n";
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
			if( i == j){
				D[x] = A[i][j];
				x++;	
			}
		}	
	}
	system("pause");
	system("cls");
	
	cout<<"\n\t\t***SAÍDA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n\n";
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			cout<<A[i][j]<<"  ";
		}	
		cout<<"\n";
	}
	cout<<"\n\nElementos da diagonal principal: ";
	for(i=0;i<x;i++){
		cout<<D[i]<<"  ";
	}
	cout<<endl;
	system("pause");
	return 0;	
}
