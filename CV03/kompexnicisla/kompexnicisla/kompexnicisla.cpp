// kompexnicisla.cpp : Defines the entry point for the application.
//

#include "kompexnicisla.h"

using namespace std;

int main()
{
	double ar;
		double ai;
		double br;
		double bi;
		double souceti;
		double soucetr;

	printf("Soucet 2 komplexnich cisel\n");
	printf("Zadej realnou cast prvniho cisla\n");
			scanf("%lf", &ar);
			printf("Zadej imaginarni cast prvniho cisla\n");
			scanf("%lf", &ai);
			printf("Zadej realnou cast druheho cisla\n");
			scanf("%lf", &br);
			printf("Zadej imaginarni cast druheho cisla\n");
			scanf("%lf", &bi);
			souceti = ai + bi;
			soucetr = ar + br;
			printf("Soucet je %.2f + %.2f i", soucetr, souceti);
	
	return 0;
}
