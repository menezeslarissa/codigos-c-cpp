#include <iostream>
#include <locale>
using namespace std;

int main(){
	int A[12][4]; // valores de venda
	int SL[12]; // vetor que representa o total de cada linha (mês).
	int SC[4]; // total vendido em cada semana durante o ano
	int soma = 0; // total vendido no ano 
	int i, j, x, y, mes = 0, sem = 0; 
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***VENDAS***\n";
	cout<<"\nInsira o valor das vendas. ";
	for(i=0; i<12; i++){
		for(j=0; j<4; j++){
			cout<<"\nValor: ";
			cin>>A[i][j];
			soma = soma + A[i][j];
		}	
	}
	system("pause");
	system("cls");
	
	i = 0;
	x = 0;
	do{
		for(j=0;j<4;j++){
			mes = mes + A[i][j];
			SL[x] = soma;
		}
		++x;
		++i;		
	}
	while(i<12);
	
	j = 0;
	y = 0;
	do{
		for(i=0;i<12;i++){
			sem + sem + A[i][j];
			SC[y]= sem;
		}
		++j;
		++y;
	}	
	while(j<4);
	
	cout<<"\n\t\t***SAÍDA DE DADOS***\n";
	cout<<"\n***VENDAS**\n\n";
	cout<<"Linhas representam meses do ano e colunas semanas do mês"<<endl;
	for(i=0; i<12; i++){
		for(j=0; j<4; j++){
			cout<<A[i][j]<<"   ";
		}	
		cout<<endl<<endl;
	}
	cout<<endl<<endl;
	cout<<"Total vendido no ano: "<<soma<<endl<<endl;
	cout<<"Total vendido em cada mês no ano: ";
	for(i=0;i<x;i++){
		cout<<SL[i]<<"  ";
	}	
	cout<<endl<<endl;
	cout<<"Total vendido em cada semana durante o ano: ";
	for(i=0;i<y;i++){
		cout<<SC[i]<<"  ";
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
}
