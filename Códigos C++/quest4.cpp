#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[20], i;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DA DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<20;i++){
		cout<<"\nInsira um número: ";
		cin>>A[i];
	}
	system("pause");
	system("cls");
	
	cout<<"\nPosições dos números lidos maiores que 10: \n";
	for(i=0;i<20;i++){
		if(A[i]>10){
			cout<<"\nO número "<<A[i]<<" está na posição "<<i;
		}
	}
	cout<<"\n";
	system("pause");
	return 0;
}
