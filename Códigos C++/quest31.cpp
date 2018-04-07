#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[4][3], i, j, S = 0;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***"<<endl;
	cout<<"\nMATRIZ A:\n";
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
			if( i % 2 == 0){
				S = S + A[i][j];
			}
		}	
	}
	system("pause");
	system("cls");
	cout<<"\n\nSoma das linhas pares: "<<S<<endl;
	system("pause");
	return 0;
}
