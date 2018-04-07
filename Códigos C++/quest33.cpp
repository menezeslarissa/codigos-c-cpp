#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[2][2], diagP = 1, diagSec = 1, i, j;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n";
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
			if( i == j ) diagP = diagP * A[i][j];
			if( i + j == i + 1) diagSec = diagSec * A[i][j];
		}	
	}
	system("pause");
	system("cls");
	cout<<"\nDeterminante da matriz A: "<<diagP - diagSec<<endl;
	system("pause");
	return 0;
}
