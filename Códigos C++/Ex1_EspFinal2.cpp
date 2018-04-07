#include <iostream>
#include <math.h>
// O espaço final de um determinado ponto material, onde S=So+Vo*t+1/2*a*t^2
using namespace std;

int main()
{
	float S,So,Vo,t,a;
	cout<<("\n Calcular espaco final");
	cout<<("\n So:");
	cin>> (So);
	cout<<("\n Vo:");
	cin>> (Vo);
	cout<<("\n t:");
	cin>> (t);
	cout<<("\n a:");
	cin>> (a);
	cout<<("\n t:");
	cin>> (t);
	
	S=So+Vo*t+(0.5)*a*pow(t,2);
	
	cout<<"\n Espaco Final:"<<S<<"\n";
	
	return 0;
}
