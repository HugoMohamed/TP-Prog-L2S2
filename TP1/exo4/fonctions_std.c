/***************************************
 *                                     *
 *  fonctions_std.c                    *
 *  implémente les fonctions standard  *
 *  Auteur : Hugo Mohamed              *
 *  Date de création : 03/02/2018      *
 *                                     *
 **************************************/

#ifndef FONCTIONS_STD_C
#define FONCTIONS_STD_C

#include "fonctions_std.h"

// calcul de l'exponentiel
double std_exp(double x)
{
	return exp(x);
}

// calcul du log en base e
double std_ln(double x)
{
    assert(x>0); // car ln(0) = -infini
    return log(x);
}

// calcul du log en base 10
double std_log(double x)
{
    assert(x>0); // car log(0) = -infini
    return log10(x);
}

// calcul de la racine carrée de x
double std_sqrt(double x)
{
    assert(x>=0); // pas de racine de nombre negatif
    return sqrt(x);
}

// calcul du PGCD
int pgcd(int a, int b)
{
	int r;
 	while (b != 0)
   	{
		r = a%b;
	 	a = b;
	 	b = r;
   	}
 	return a;
}

#endif
