#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int M[5][5], SL[5], SC[5], i, j;
	int x, y, z, w;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t\t***ENTRADA DE DADOS***"<<endl;
	cout<<"\nMatriz M: "<<endl;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout<<"\nInsira um número: ";
			cin>>M[i][j];		
		}
	}
	y = 0; // acumulador dos elementos de cada linha
	x = 0; // indice de SL
	i = 0;
	// soma das linhas
	do{
		for(j=0;j<5;j++){
			y = y + M[i][j];
			SL[x]= y; 
		}
		
		++i;
		++x;
	}
	while(i<5);
	
	z = 0; // acumulador de elementos de cada coluna
	w = 0; // indice de SC;
	j = 0;
	// soma das colunas
	do{
		for(i=0;i<5;i++){
			z = z + M[i][j];
			SC[w]= z; 
		}
		
		++j;
		++w;
	}
	while(j<5);
	system("pause");
	system("cls");
	
	cout<<"\n\t\t\t***SAÍDA DE DADOS***"<<endl;
	cout<<"\nMATRIZ M"<<endl;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout<<M[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	
	cout<<"Soma de todos os elementos de cada coluna ";
	for(j=0;j<w;j++){
		cout<<SC[j]<<"  ";
	}
	cout<<endl;
	cout<<"Soma de todos os elementos de cada linha: ";
	for(i=0;i<x;i++){
		cout<<SL[i]<<"  ";
	}
	cout<<endl;
	system("pause");
	return 0;
}
