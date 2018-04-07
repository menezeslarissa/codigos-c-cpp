#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[10], i, x=0, Pos[x];
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<10;i++){
		cout<<"\nInsira um número: ";
		cin>>A[i];
	}
	for(i=0;i<10;i++){
		if(A[i]>0){
			Pos[x]=A[i];
			x++;
		}
	}
	system("pause");
	system("cls");
	cout<<"\nVetor com valores apenas positivos: ";
	for(i=0;i<x;i++){
		cout<<Pos[i]<<"  ";
	}	
	cout<<"\n";
	system("pause");
	return 0;
}
