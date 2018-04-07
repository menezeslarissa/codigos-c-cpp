#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main(){
	int nota[10], i, soma = 0, ns = 0, x = 1;
	float media;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n***ENTRADA DE NOTAS***\n";
	for(i=0;i<10;i++){
		cout<<"\nALUNO "<<x<<"\n";
		cout<<"\nInforme a nota: ";
		cin>>nota[i];
		soma = soma + nota[i];
		x++;
	}
	media = static_cast<float>(soma)/10;
	system("pause");
	system("cls");
	for(i=0;i<10;i++){
		if(nota[i]>media)
			ns++;
	}
	
	cout<<"\nMédia das notas: "<<media;
	cout<<"\nQuantidade de alunos com nota acima da média: "<<ns;
	system("pause");
	return 0;
	
}
