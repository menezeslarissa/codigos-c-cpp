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
		cout<<"\nN�mero de filmes retirados no ano: ";
		cin>>ano[n];
		if(ano[n]<10){
			cout<<"\nCliente n�o tem direito a promo��o!";
		}
		else{
			promo[y] = ano[n]/10;
			cout<<"\nO cliente tem direito a "<<promo[y]<<" loca��es gr�tis!\n";
			y++;
		}
		system("pause");
		system("cls");
		cout<<"\nPara adicionar mais um cliente aperte qualquer tecla, para sair aperte 0.";
		cin>>op;
		system("cls");	
	}
	while(op != '0');
	cout<<"\nTodas as loca��es gr�tis de todos os clientes: ";
	for(i=0;i<y;i++){
		cout<<promo[i]<<"  ";
	}	
	cout<<endl;
	system("pause");
	return 0;
}
