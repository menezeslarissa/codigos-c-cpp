#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main(){
	int A[100], maior, menor, par, i, soma = 0;
	float media, P;
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\t\t***ENTRADA DE DADOS***\n";
	cout<<"\nVetor A: ";
	for(i=0;i<100;i++){
		cout<<"\nInsira um n�mero: ";
		cin>>A[i];
		soma = soma + A[i];
		if(A[i] % 2 == 0)
			par++;
	}
	
	P = (static_cast<float>(par)*100)/100; // c�lculo porcentagem de n�meros pares 
	media = static_cast<float>(soma)/100; // c�lculo da m�dia
    maior = A[0]; 
    menor = A[0];
    // teste para maior e menor elemento
    for(i=0;i<100;i++) {
        if (A[i] > maior) maior = A[i];
        if (A[i] < menor) menor = A[i];
    }
    system("pause");
    system("cls");
    
    cout<<"\n\nMaior elemento do vetor: "<<maior;
    cout<<"\nMenor elemento do vetor: "<<menor;
    cout<<"\nPercentual de n�meros pares: "<<P;
    cout<<"\nM�dia dos valores: "<<media<<"\n\n";
    system("pause");
    return 0;
}

