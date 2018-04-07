#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main(){
	float A[100], media, soma = 0;
	int i, equal = 0, ac1 = 0, ac2 = 0; // indice, acumulador de números maior que a média e igual a média 
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<100;i++){
		cout<<"\nInsira um número: ";
		cin>>A[i];
		soma = soma + A[i];
		if(A[i] == 30)  equal++;			
	}
	system("pause");
	system("cls");
	media = soma/100;
	for(i=0;i<100;i++){
		if(A[i] > media) ac1++;
		if(A[i] == media) ac2++;
	}
	
	cout<<"\n\nMédia dos números lidos: "<<media;
	cout<<"\n\nQuantidade de números lidos iguais a 30: "<<equal;
	cout<<"\n\nQuantidade de números maiores que a média: "<<ac1;
	cout<<"\n\nQuantidade de números iguais a média: "<<ac2<<"\n";
	system("pause");
	return 0;
}
