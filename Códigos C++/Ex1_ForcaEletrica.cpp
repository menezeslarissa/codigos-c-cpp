#include <iostream>
#include <math.h>

// Calcular a força elétrica produzida por duas cargas a uma determinada distância no espaço

using namespace std;

int main()
{
	float K,Q1,Q2,d,Fel;
	cout<<("\n forca eletrica");
	cout<<("\n K:");
	cin>> (K);
	cout<<("\n Q1:");
	cin>> (Q1);
	cout<<("\n Q2:");
	cin>> (Q2);
	cout<<("\n d:");
	cin>> (d);
	
	Fel=(K*abs(Q1)*abs(Q2))/pow(d,2);
	
	cout<<"Forca eletrica:"<<Fel<<"\n";
	
	return 0;
}
