#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[10], B[10];
	int C[5]; // vetor para armazenar o resultado das subtra��es
	int i; // indice
	int sub; // variavel para armazenar o resultado da subtra��o
	int  x, y; // x armazena o valor de a[i] e y o de b[i]
	int  S = 0; // acumulador das subtra��es
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<10;i++){
		cout<<"\nInsira um n�mero: ";
		cin>>A[i];
	}
	system("pause");
	system("cls");
	
	cout<<"\nVetor B: ";
	for(i=0;i<10;i++){
		cout<<"\nInsira um n�mero: ";
		cin>>B[i];
	}
	system("pause");
	system("cls");
	
	for(i=0;i<10;i++){
		x = A[i];
		y = B[10-i-1];
		sub = y-x;
		C[i] = sub;
		S = S + sub;
	}
	cout<<"\nVetor com cada resultado da subtra��o dos elementos: ";
	for(i=0;i<10;i++){
		cout<<C[i]<<"  ";
	}
	cout<<"\n\nSoma das subtra��es: "<<S<<"\n";
	system("pause");
	return 0;
}
