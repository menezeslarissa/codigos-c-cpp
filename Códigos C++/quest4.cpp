#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[20], i;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DA DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<20;i++){
		cout<<"\nInsira um n�mero: ";
		cin>>A[i];
	}
	system("pause");
	system("cls");
	
	cout<<"\nPosi��es dos n�meros lidos maiores que 10: \n";
	for(i=0;i<20;i++){
		if(A[i]>10){
			cout<<"\nO n�mero "<<A[i]<<" est� na posi��o "<<i;
		}
	}
	cout<<"\n";
	system("pause");
	return 0;
}
