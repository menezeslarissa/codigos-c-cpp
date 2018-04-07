#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[4][4], i, j, SL[4];
	int x, menor, linha = 0;
	int pos;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nMATRIZ A:\n";
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			cout<<"\nInsira um número: ";
			cin>>A[i][j];
		}	
	}
	system("pause");
	system("cls");
	
	i = 0;
	x = 0;
	do{
		for(j=0;j<4;j++){
			linha = linha + A[i][j];
			SL[x] = linha;
		}
		++x;
		++i;
	}
	while(i<4);
	
	menor = SL[0];
	for(i=0;i<4;i++){
		if (SL[i] < menor){
			menor = SL[i];	
		}
	}
	
	cout<<"\n\t\t***SAÍDA DE DADOS***\n";
	cout<<"\nMATRIZ A"<<endl;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	cout<<"Menor soma de elementos das linhas: "<<menor<<endl;
	/* cout<<"Posição da linha que possui a menor soma: "<<pos<<endl;
	cout<<"Linha: ";
	for(j=0;j<4;j++){
		cout<<A[pos][j]<<"  ";
	} */
	cout<<endl;
	system("pause");
	return 0;
}
