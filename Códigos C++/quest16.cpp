#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int A[10], cont = 100, i, x = 0, a , b;
	setlocale(LC_ALL, "Portuguese");
	while(x<10){
		a=cont % 1;
		b=cont%cont;
		if(a == 0 && b == 0){
			A[x] = cont;
			x++;	
		}
		cont++;		
	}
	cout<<"\n\nVetor com números primos maiores que 100: ";
	for(i=0;i<x;i++){
		cout<<A[i]<<"  ";
	}
	cout<<"\n";
	system("pause");
	return 0;
}
