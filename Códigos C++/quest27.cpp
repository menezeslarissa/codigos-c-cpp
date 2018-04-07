#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[3][2], i, j, P = 1;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n";
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
			P = P * A[i][j];
		}	
	}
	system("pause");
	system("cls");
	cout<<"\n\t\t***SAÍDA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n\n";
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			cout<<A[i][j]<<"  ";
		}	
		cout<<"\n";
	}
	cout<<"\n\nProduto de todos os elementos: "<<P<<endl;
	system("pause");
	return 0;
}
