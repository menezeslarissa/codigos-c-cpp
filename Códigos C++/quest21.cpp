#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[10], y, B[y], i, num;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<10;i++){
		cout<<"\nInsira um número: ";
		cin>>A[i];
	}
	system("pause");
	system("cls");
	y = 0;
	for (i=0;i<10;i++){
		num = A[i];
		if(num > 0 && num != 0){
			B[y] = num;
			++y;
		}
	}
	cout<<"\nVetor após compactação: ";
	for(i=0;i<y;i++){
		cout<<B[i]<<"  ";
	}
	cout<<"\n";
	system("pause");
	return 0;	
}
