#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[30], i;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DA DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<30;i++){
		cout<<"\nInsira um número: ";
		cin>>A[i];
	}
	system("pause");
	system("cls");
	cout<<"\nVetor A na ordem contrária: ";
	for(i=29;i>=0;i--){
		cout<<A[i]<<"  ";
	}
	cout<<"\n";
	system("pause");
	return 0;
}
