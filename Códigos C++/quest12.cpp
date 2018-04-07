#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[20], i, aux;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<20;i++){
		cout<<"\nInsira um número: ";
		cin>>A[i];
	}
	system("pause");
	system("cls");
	for(i=0;i<10;i++){
		aux = A[i];
		A[i] = A[20-i-1];
		A[20-i-1] = aux;
	}
	cout<<"\nVetor trocado: \n";
	for(i=0;i<20;i++){
		cout<<A[i]<<"  ";
	}
	cout<<"\n";
	system("pause");
	return 0;
}
