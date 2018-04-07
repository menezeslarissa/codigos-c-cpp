#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	char gab[20], resp[20]; 
	int i, cont = 1, x = 1, acerto = 0;
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\t\t***GABARITO***\n";
	cout<<"\nInsira as respostas (a, b, c, d ou e):";
	for(i=0;i<20;i++){
		cout<<"\nResposta da questão "<<x<<" :";
		cin>>gab[i];
		++x;
	}
	system("pause");
	system("cls");
	
	cout<<"\n\t\t***RESPOSTAS DO ALUNO***\n";
	while(cont<=50){
		int y = 1;
		cout<<"\nAluno "<<cont<<" : ";
		for(i=0;i<20;i++){
			
			cout<<"\nResposta da questão "<<y<<" : ";
			cin>>resp[i];
			if(resp[i] == gab[i]) acerto++;
			y++;
		}
		system("pause");
		system("cls");
		cout<<"\nAluno "<<cont;
		cout<<"\nNúmeros de acertos: "<<acerto;
		if(acerto>=12) cout<<"\n\nAluno aprovado!";
		else cout<<"\nAluno Reprovado!\n\n";
		system("pause");
		system("cls");
		cont++;
	}
	system("pause");
	return 0;	
}
