#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[3][3], i, j, S = 0;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
		}	
	}
	// soma dos elementos da primeira coluna
	for(i=0;i<3;i++)
		S = S + A[i][0];
	
	system("pause");
	system("cls");
	
	cout<<"\n\t\t***SAÍDA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<A[i][j]<<"  ";
		}	
		cout<<"\n";
	}
	cout<<"\nSoma dos elementos da primeira coluna: "<<S<<endl;
	system("pause");
	return 0;
}
