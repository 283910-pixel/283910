// Bourka.cpp : Defines the entry point for the application.
//

#include "Bourka.h"

using namespace std;

int main()
{
	double cas;
	double rychlostzvuku = 340;
	double vzdalenost;

	printf("Zadejte cas v sekundach:");
	scanf("%lf", &cas);
	vzdalenost = rychlostzvuku * cas;
	printf("Vzdalenost hromu je %.2f metru.", vzdalenost);


	return 0;
}
