#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[10] B[10], i, z;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<10;i++){
		cout<<"\nInsira um número: ";
		cin>>A[i];
	}
	system("pause");
	system("cls");
	
	cout<<"\nVetor B: ";
	for(z=0;z<10;z++){
		cout<<"\nInsira um número: ";
		cin>>B[z];
	}
	system("pause");
	system("cls");
	
	cout<<"\n\t\t***SAÍDA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<10;i++){
		cout<<A[i]<<"  ";
	}
	cout"\n\nVetor B: ";
	for(z=0;z<10;z++){
		if(z%2 == 0){
			B[z]= B[z] * 5;
			cout<<B[z]<<"  ";	
		}
		else{
			B[z]= B[z] + 5;
			cout<<B[z]<<"  ";
		}
	}
	system("pause");
	return 0;
}
