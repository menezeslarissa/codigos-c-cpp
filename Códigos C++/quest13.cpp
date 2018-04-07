#include <iostream>
#include <locale.h>
using namespace std;
	
int main(){	
	int par[10], impar[10], num, i, j; // vetor par, vetor impar e numero inserido pelo usuário
	int x= 0; // indice par
	int y= 0; // indice impar
	int cont = 0;
	char op; // variavel de condição para continuar o programa
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
		do{
			cout<<"\nInsira um número: ";
			cin>>num;
			if(num % 2 == 0){
				par[x] = num;
				x++;
			}
			
			else{
				impar[y] = num;
				y++;
			}
		}
		while(x <= 10 && y <= 10);
	cout<<"\nPara ver vetores aperte qualquer tecla, para sair do programa aperte 0.";
	system("pause");
	system("cls");	
	if(op != '0'){
		cout<<"\nVetor par: ";
		for( int i=0;i<x;i++){
			cout<<par[i]<<"  ";
		}
		cout<<"\nVetor impar: ";
		for( int j=0;j<y;j++) {
			cout<<impar[j]<<"  ";
		}
	}
	system("pause");
	return 0;
}
