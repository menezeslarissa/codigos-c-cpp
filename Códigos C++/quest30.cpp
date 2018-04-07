#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int	A[4][4], i, j, S = 0;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n";
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
			if(i == j){
				S = S + A[i][j];
			}
		}			
	}
	system("pause");
	system("cls");
	cout<<"\n\nSoma dos elementos da diagonal principal: "<<S<<endl;
	system("pause");
	return 0;
}
