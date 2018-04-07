#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[20], i, j, ac, x, y;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<20;i++){
		cout<<"\nInsira um número: ";
		cin>>A[i];
	}
	system("pause");
	system("cls");
	// teste para saber quants vezes cada valor aparece
	x = 0;
	y = x+1;
	ac = 0;
	if(A[x] == A[y]){
		ac++;
	}
			cout<<"\nO valor "<<A[i]<<" aparece "<<ac<<" vezes.";
		}
	}
	system("pause");
	return 0;
}
