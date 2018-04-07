#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[5][3], i, j, S = 0;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n";
	for(i=0; i<5; i++){
		for(j=0; j<3; j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
		}	
	}
	// soma dos elementos
	for(j=0;j<3;j++){
		S = S + A[0][j];
	}
	system("pause");
	system("cls");
	
	cout<<"\n\t\t***SAÍDA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n\n";
	for(i=0; i<5; i++){
		for(j=0; j<3; j++){
			cout<<A[i][j]<<"  ";
		}	
		cout<<"\n";
	}
	cout<<"\nSoma dos elementos da primeira linha: "<<S<<endl<<endl;
	system("pause");
	return 0;
	
}
