#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[3][3], V[9], y, i, j, x = 0;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
		}	
	}
	system("pause");
	system("cls");
	cout<<"\nInsira um valor qualquer: "<<endl;
	cin>>y;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			V[x] = y * A[i][j];
			x++;
		}	
	}
	system("pause");
	system("cls");
	cout<<"Vetor V: ";
	for(i=0;i<x;i++){
		cout<<V[i]<<"  ";
	}
	system("pause");
	return 0;
}
