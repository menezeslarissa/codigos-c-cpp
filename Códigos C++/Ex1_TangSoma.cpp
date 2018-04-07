#include <iostream>
#include <math.h>

using namespace std;

// A tangente da soma de dois ângulos, onde Tg(a+b)=(tga+tgb)/(1-tga*tgb)

int main ()
{
	float tgab,tga,tgb;
	cout<<("\n Calcular Tangente de soma de dois angulos");
	cout<<("\n Forneca os valores");
	cout<<("\n tga:");
	cin>> (tga);
	cout<<("\n tgb:");
	cin>> (tgb);
	
	tgab=(tga+tgb)/(1-tga*tgb);
	
	cout<<"Tangente da soma:"<<tgab<<"\n";
	
	return 0;
}
