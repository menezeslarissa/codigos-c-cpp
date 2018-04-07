#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	int n = 0, ano[n], filmes, y = 0, promo[y], z = 1, i;
	char op;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***LOCADORA***\n";
	do{
		cout<<"\nCliente "<<z;
		z++;
		cout<<"\nNúmero de filmes retirados no ano: ";
		cin>>ano[n];
		if(ano[n]<10){
			cout<<"\nCliente não tem direito a promoção!";
		}
		else{
			promo[y] = ano[n]/10;
			cout<<"\nO cliente tem direito a "<<promo[y]<<" locações grátis!\n";
			y++;
		}
		system("pause");
		system("cls");
		cout<<"\nPara adicionar mais um cliente aperte qualquer tecla, para sair aperte 0.";
		cin>>op;
		system("cls");	
	}
	while(op != '0');
	cout<<"\nTodas as locações grátis de todos os clientes: ";
	for(i=0;i<y;i++){
		cout<<promo[i]<<"  ";
	}	
	cout<<endl;
	system("pause");
	return 0;
}
