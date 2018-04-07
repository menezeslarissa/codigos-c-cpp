#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int A[8], i, ac = 0;
	setlocale(LC_ALL, "Portuguese");

	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<8;i++){
		cout<<"\nInsira um número: ";
		cin>>A[i];
		if(A[i] % 6 == 0)
			ac++;
	}
	system("pause");
	system("cls");
	
	cout<<"\n\t\t***SAÍDA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<8;i++){
		cout<<A[i]<<"  ";
	}
	cout<<"\n\nQuantidade de elementos múltiplos de 6: "<<ac<<"\n";
	system("pause");
	return 0;
}
