// Fun��o do programa: 5.	Ler 20 elementos do vetor A. Construir um vetor B de mesmo tipo, observando a seguinte lei de forma��o: Todo elemento de B dever� ser o triplo do elemento de A correspondente. 
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[20], B[20], i;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<20;i++){
		cout<<"\nInsira um n�mero: ";
		cin>>A[i];
	}	
	system("pause");
	system("cls");
	
	cout<<"\n\t\t***SA�DA DE DADOS***\n";
	cout<<"\nVetor B: ";
	for(i=0;i<20;i++){
		B[i] = A[i] * A[i] * A[i];
		cout<<B[i]<<"  ";
	}	
	system("pause");
	return 0;
}
