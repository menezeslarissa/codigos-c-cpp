#include <iostream>
#include <locale.h>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	string nome;
	string tipo;
	char op;
	int quant;
	int x = 0;
	float valor, vUnit;
	float saldo[x];
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t\t***LEVANTAMENTO DE ESTOQUE***"<<endl;
	do{
		cout<<"\n\nTipo do produto: ";
		cin>>tipo;
		cout<<"\nNome do produto: ";
		cin>>nome;
		cout<<"\nInforme o valor unitário: ";
		cin>>vUnit;
		cout<<"\nInforme a quantidade desse produto em estoque: ";
		cin>>quant;
		valor = vUnit * static_cast<float>(quant);
		saldo[x] = valor;
		system("pause");
		system("cls");
		cout<<"\n\t\t\t***RELATÓRIO***"<<endl;
		cout<<"\nTipo do produto: "<<tipo;
		cout<<"\nNome do produto: "<<nome;
		cout<<"\nValor unitário: "<<vUnit;
		cout<<"\nValor total do produto em estoque: "<<valor;
		cout<<"\n\n\nPara inserir outro produto aperte qualquer tecla, para sair aperte 0."<<endl;
		cin>>op;
		x++;	
	}
	while(op!= '0');
	cout<<"\nValores em estoque: ";
	for(int i=0;i<x;i++){
		cout<<saldo[i]<<"  ";
	}
	system("pause");
	return 0;
}
