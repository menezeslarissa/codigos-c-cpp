// Trabalho final de ATP/2017.1. Prof(a) Márcia Pimenta.
//Alunas: Larissa Menezes e Andrezza Lopes

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <conio.c>
#include <iomanip>
#include <windows.h>
#include<stdio.h>
#include<stdlib.h>
//#include <locale.h>
using namespace std;
 // variaveis globais
char tabela[12]; // vetor para a tabela modelo
char tc; // variavel para armazenar os caracteres da tabela ascii
char jogo[9]; // para o jogo da velha
int turno = 1; // variavel para alternar a vez dos jogadores
char p1 = 'X', p2 = 'O';
int i, j, z, a, y;
int pos; // posição no campo que o jogador vai escolher
int jogadas; // controle das jogadas por jogo
int vencedor = 0;  // variavel para determinar o vencedor
string jogador1, jogador2;
char titulo[6], t;
int ganhou = false;
int fim = false;
char op;

void Titulo(){	// escreve "jogo da velha"
	textcolor(14);
	t = 205; // horizontal
	titulo[0] = t;
	
	t = 186; // vertical
	titulo[1] = t;
	
	t = 201; // borda superior esquerda
	titulo[2] = t;
	
	t = 200; // borda inferior esquerda
	titulo[3] = t;
	
	t = 187; // borda superior direito
	titulo[4] = t;
	
	t = 188; // borda inferior direita
	titulo[5] = t;
	
	cout<<setw(47)<<titulo[2]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[4]<<endl;
	cout<<setw(47)<<titulo[1]<<" JOGO DA VELHA "<<titulo[1]<<endl;
	cout<<setw(47)<<titulo[3]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[0]<<titulo[5];
}

void MostrarTabela(){ // escreve a tabela modelo
	tc = 196; // traço horizontal
	tabela[0] = tc;
	
	tc = 124; // traço vertical médio
	tabela[1] = tc;
	
	tc = 191; // dobra da tabela
	tabela[2] = tc;
	
	tc = 179; // traço vertical grande
	tabela[3] = tc;
	 
	tc = 194; // caracter T para a parte superior 
	tabela[4] = tc;
	
	tc = 218; // caracter canto superior
	tabela[5] = tc;
	
	tc = 192;
	tabela[6] = tc; // caracter canto inferior esquerdo
	
	tc = 197;
	tabela[7] = tc; // caracter  "+", fica entre os números
	
	tc = 193;
	tabela[8] = tc; // caracter para a parte inferior, "t de cabeça pra baixo"
	
	tc = 217;
	tabela[9] = tc; // caracter canto inferior direito
	
	tc = 180;
	tabela[10] = tc; // caracter para fechar as bordas do lado direito
	
	tc = 195;
	tabela[11] = tc; // caracter para fechar as bordas da tabela do lado esquerdo, " T de lado(??)"
	// setw serve pra determinar a posição na tela
    cout<<setw(y)<<tabela[5]<<tabela[0]<<tabela[0]<<tabela[0]<<tabela[4]<<tabela[0]<<tabela[0]<<tabela[0]<<tabela[4]<<tabela[0]<<tabela[0]<<tabela[0]<<tabela[2]<<endl;
    cout<<setw(y)<<tabela[3]<<" 7 "<<tabela[3]<<" 8 "<<tabela[3]<<" 9 "<<tabela[3]<<endl;
    cout<<setw(y)<<tabela[11]<<tabela[0]<<tabela[0]<<tabela[0]<<tabela[7]<<tabela[0]<<tabela[0]<<tabela[0]<<tabela[7]<<tabela[0]<<tabela[0]<<tabela[0]<<tabela[10]<<endl;
    cout<<setw(y)<<tabela[3]<<" 4 "<<tabela[3]<<" 5 "<<tabela[3]<<" 6 "<<tabela[3]<<endl;
    cout<<setw(y)<<tabela[11]<<tabela[0]<<tabela[0]<<tabela[0]<<tabela[7]<<tabela[0]<<tabela[0]<<tabela[0]<<tabela[7]<<tabela[0]<<tabela[0]<<tabela[0]<<tabela[10]<<endl;
    cout<<setw(y)<<tabela[3]<<" 1 "<<tabela[3]<<" 2 "<<tabela[3]<<" 3 "<<tabela[3]<<endl;
    cout<<setw(y)<<tabela[6]<<tabela[0]<<tabela[0]<<tabela[0]<<tabela[8]<<tabela[0]<<tabela[0]<<tabela[0]<<tabela[8]<<tabela[0]<<tabela[0]<<tabela[0]<<tabela[9]<<endl;
}

void vetor(){  // vetor jogo
	for (i=0; i<9; i++)
		jogo[9] = ' '; // preenche os campoa com vazio		
}

void posicao1(){  // para x
	if(jogo[pos-1] == 'X'|| jogo[pos-1] =='O'){ // verifica se o campo está ocupado ou não
		textcolor(12);
		cout<<"CAMPO OCUPADO!"<<endl;
		system("pause");
		system("cls");
	}
	else jogo[pos-1] = 'X'; 
}

void posicao2(){ // para o
	if(jogo[pos-1] == 'X'|| jogo[pos-1] == 'O'){
		textcolor(12);
		cout<<"CAMPO OCUPADO!"<<endl;
		system("pause");
		system("cls");
	}
	else jogo[pos-1] = 'O';
}

void escrever_vetor(){  // escreve vetor vazio
	vetor();
	char tb[3], j;
	
	j = 196; // traço horizontal
	tb[0] = j;
	
	j = 124; // traço vertical médio
	tb[1] = j;
	
	j = 191; // dobra da tb
	tb[2] = j;
	
	j = 179; // traço vertical grande
	tb[3] = j;
	 
	j = 194; // caracter T para a parte superior 
	tb[4] = j;
	
	j = 218; // caracter canto superior
	tb[5] = j;
	
	j = 192;
	tb[6] = j; // caracter canto inferior esquerdo
	
	j = 197;
	tb[7] = j; // caracter  "+", fica entre os números
	
	j = 193;
	tb[8] = j; // caracter para a parte inferior, "t de cabeça pra baixo"
	
	j = 217;
	tb[9] = j; // caracter canto inferior direito
	
	j = 180;
	tb[10] = j; // caracter para fechar as bordas do lado direito
	
	j = 195;
	tb[11] = j; // caracter para fechar as bordas da tb do lado esquerdo, " T de lado(??)"
	// setw serve pra determinar a posição na tela
	cout<<endl<<endl;   
    cout<<setw(25)<<jogo[6]<<"   "<<tb[3]<<jogo[7]<<"  "<<tb[3]<<jogo[8]<<endl;
    cout<<setw(25)<<" "<<tb[0]<<tb[0]<<tb[0]<<tb[7]<<tb[0]<<tb[0]<<tb[0]<<tb[7]<<tb[0]<<tb[0]<<tb[0]<<endl;
    cout<<setw(25)<<jogo[3]<<"   "<<tb[3]<<jogo[4]<<"  "<<tb[3]<<jogo[5]<<endl;
    cout<<setw(25)<<" "<<tb[0]<<tb[0]<<tb[0]<<tb[7]<<tb[0]<<tb[0]<<tb[0]<<tb[7]<<tb[0]<<tb[0]<<tb[0]<<endl;
    cout<<setw(25)<<jogo[0]<<"   "<<tb[3]<<jogo[1]<<"  "<<tb[3]<<jogo[2]<<endl;
	
}

void escreverjogadas(){ // escreve as jogadas
	char tb[3], j;
	
	j = 196; // traço horizontal
	tb[0] = j;
	
	j = 124; // traço vertical médio
	tb[1] = j;
	
	j = 191; // dobra da tb
	tb[2] = j;
	
	j = 179; // traço vertical grande
	tb[3] = j;
	 
	j = 194; // caracter T para a parte superior 
	tb[4] = j;
	
	j = 218; // caracter canto superior
	tb[5] = j;
	
	j = 192;
	tb[6] = j; // caracter canto inferior esquerdo
	
	j = 197;
	tb[7] = j; // caracter  "+", fica entre os números
	
	j = 193;
	tb[8] = j; // caracter para a parte inferior, "t de cabeça pra baixo"
	
	j = 217;
	tb[9] = j; // caracter canto inferior direito
	
	j = 180;
	tb[10] = j; // caracter para fechar as bordas do lado direito
	
	j = 195;
	tb[11] = j; // caracter para fechar as bordas da tb do lado esquerdo, " T de lado(??)"
	// setw serve pra determinar a posição na tela
	cout<<endl<<endl;   
    cout<<setw(a)<<jogo[6]<<"   "<<tb[3]<<jogo[7]<<"  "<<tb[3]<<jogo[8]<<endl;
    cout<<setw(a)<<" "<<tb[0]<<tb[0]<<tb[0]<<tb[7]<<tb[0]<<tb[0]<<tb[0]<<tb[7]<<tb[0]<<tb[0]<<tb[0]<<endl;
    cout<<setw(a)<<jogo[3]<<"   "<<tb[3]<<jogo[4]<<"  "<<tb[3]<<jogo[5]<<endl;
    cout<<setw(a)<<" "<<tb[0]<<tb[0]<<tb[0]<<tb[7]<<tb[0]<<tb[0]<<tb[0]<<tb[7]<<tb[0]<<tb[0]<<tb[0]<<endl;
    cout<<setw(a)<<jogo[0]<<"   "<<tb[3]<<jogo[1]<<"  "<<tb[3]<<jogo[2]<<endl;
	
}

void ganhador(){ // verifica ganhador 
	for(int i=0;i<9;i++){
		jogo[i];
	}
	// teste horizontal
	if(jogo[0]==p1 &&jogo[1]==p1 &&jogo[2]==p1){
		vencedor=1;
		ganhou = true;	
	}
    if(jogo[6]=='X'&&jogo[7]=='X'&&jogo[8]=='X'){
    	vencedor=1;
    	ganhou == true;
	} 
    if(jogo[3]=='X'&&jogo[4]=='X'&&jogo[5]=='X'){
    	vencedor=1;
    	ganhou = true;
	}
    if(jogo[0]=='O'&&jogo[1]=='O'&&jogo[2]=='O'){
   	 	vencedor=2;	
   	 	ganhou = true;
	} 
    if(jogo[6]=='O'&&jogo[7]=='O'&&jogo[8]=='O'){
    	vencedor=2;
    	ganhou = true;
	} 
    
    if(jogo[3]=='O'&&jogo[4]=='O'&&jogo[5]=='O'){
		vencedor=2;
		ganhou = true;
	}
    // teste vertical
    if(jogo[7]=='X'&&jogo[4]=='X'&&jogo[1]=='X'){
    	vencedor=1;
    	ganhou = true;
	} 
    if(jogo[6]=='X'&&jogo[3]=='X'&&jogo[0]=='X'){
    	vencedor=1;
    	ganhou = true;
	} 
    if(jogo[8]=='X'&&jogo[5]=='X'&&jogo[2]=='X'){
    	vencedor=1;
    	ganhou = true;
	} 
    if(jogo[7]=='O'&&jogo[4]=='O'&&jogo[1]=='O'){
    	vencedor=2;
    	ganhou = true;
	}
    if(jogo[6]=='O'&&jogo[3]=='O'&&jogo[0]=='O'){
    	vencedor=2;
    	ganhou = true;
	} 
    if(jogo[8]=='O'&&jogo[5]=='O'&&jogo[2]=='O'){
    	vencedor=2;
    	ganhou = true;
	} 

    // teste diagonal
    if(jogo[6]=='X'&&jogo[4]=='X'&&jogo[2]=='X'){
    	vencedor=1;
    	ganhou = true;
	} 
    if(jogo[8]=='X'&&jogo[4]=='X'&&jogo[0]=='X'){
    	vencedor=1;
		ganhou = true;
	} 
    if(jogo[6]=='O'&&jogo[4]=='O'&&jogo[2]=='O'){
    	vencedor=2;
    	ganhou = true;
	} 
    if(jogo[8]=='O'&&jogo[4]=='O'&&jogo[2]=='O'){
    	vencedor=2;	
    	ganhou = true;
	} 

}

void escolha(){
	if (turno==1 && ganhou == false){
		escreverjogadas();
		textcolor(15);
		cout<<endl<<endl<<setw(35)<<">>VEZ DO JOGADOR 1: "<<jogador1;
		cout<<endl<<setw(35)<<"Escolha uma posicao: ";
		cin>>pos;
		posicao1();
		textcolor(15);
		turno=2;
		escreverjogadas();
		ganhador();
		system("pause");
		system("cls");
		}
	if (turno==2 && ganhou == false){
		escreverjogadas();
		textcolor(15);
		cout<<endl<<endl<<setw(35)<<">>VEZ DO JOGADOR 2: "<<jogador2;
		cout<<endl<<setw(35)<<"Escolha uma posicao: ";
		cin>>pos;
		posicao2();
		textcolor(15);
		turno=1;
		escreverjogadas();
		ganhador();
		system("pause");
		system("cls");
	}	
}

int main(){
	Titulo();
	do{
		textcolor(15);
		cout<<endl<<endl;
		cout<<"Digite o nome do jogador 1: ";
		cin>>jogador1;
    	cout<<endl<<"Digite o nome do jogador 2: ";
    	cin>>jogador2;
        system("cls");																						
        Titulo();
        cout<<endl<<endl;
    	cout<<setw(5)<<">>>"<<jogador1<<" JOGA COM X"<<endl<<endl;
        cout<<setw(5)<<">>>"<<jogador2<<" JOGA COM O"<<endl<<endl<<endl;       
		textcolor(15);
        cout<<endl<<endl;
        cout<<setw(30);
		cout<<">>ATENCAO!!! PREENCHER OS CAMPOS DE ACORDO COM O MODELO ABAIXO!!"<<endl<<endl;
        y = 20;
        cout<<endl;
        MostrarTabela();
        textcolor(15);
        cout<<endl<<"-------------------------------------------------------------------------------------------";
        cout<<endl<<endl;
		system("pause");
		system("cls");
		textcolor(4);
		Titulo();
		cout<<endl<<endl<<endl<<setw(60)<<"INICIAR JOGO";
		sleep(1);
		cout<<endl<<endl<<endl;
		jogadas = 0;
		textcolor(15);
		vetor();
		while((jogadas<=9)&& (ganhou == false)){
			system("cls");
			Titulo();
			textcolor(15);
			cout<<endl<<endl;
			textcolor(14);
			cout<<"\tMODELO: "<<endl<<endl;
			textcolor(15);
			y = 25;
			MostrarTabela();
			cout<<endl;
			cout<<"-----------------------------------------------------------------------------------------------------------";
			a = 45;
			cout<<endl<<endl;
			escolha();
			cout<<endl;		
			textcolor(9);
			if(ganhou==true){
				textcolor(11);
				if(vencedor == 1){
					cout<<jogador1<<" ganhou!!";
					break;
				}
				if(vencedor == 2){
					cout<<jogador2<<" ganhou!!";
					break;
				} 
				textcolor(12);
				if(jogadas == 9 && vencedor == 0 ){
					cout<<endl<<"Deu velha!!!";
					break;
				} 
		jogadas++;			
		}
	}
		textcolor(15);
		cout<<endl<<endl<<"Novo jogo? [S] Sim [N] Nao ";
		cin>>op;
		if(op == 'S' || 's') fim = false;
		if(op == 'N' || 'n') fim = true;
	}while(fim == false);
	cout<<endl;	
	system("pause");
	return 0;				
}
