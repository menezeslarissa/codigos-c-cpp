// (descobrir um jeito de escrever os dias da semama)
#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main(){
	int T[7], i, soma = 0, x = 1;
	float media;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\nInforme as temperaturas de cada dia da semana:";
	for(i=0;i<7;i++){
		cout<<"\nDia "<<x<<" : ";
		cin>>T[i];
		soma = soma+T[i];
		x++;
	}
	media = static_cast<float>(soma)/7;
	system("pause");
	system("cls");
	cout<<"\n\nMédia das temperaturas: "<<media<<"\n";
	system("pause");
	return 0;
}
