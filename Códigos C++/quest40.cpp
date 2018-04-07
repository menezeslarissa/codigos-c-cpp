#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[8][8], i, j, maior, diagSec = 0;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n";
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
			if( i + j == i + 1) diagSec = diagSec + A[i][j];
		}	
	}
	system("pause");
	system("cls");
	
	maior = A[0][0];
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if( i == j ){
				if(A[i][j] > maior)  maior = A[i][j];
			}		
		}
	}
	cout<<"\n\t\t\t***SAÍDA DE DADOS***"<<endl;
	cout<<"\nMATRIZ A"<<endl;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	cout<<"Soma dos elementos da diagonal secundária: "<<diagSec<<endl;
	cout<<"Maior número da diagonal principal: "<<maior<<endl<<endl;
	system("pause");
	return 0;
}
