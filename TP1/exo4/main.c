/**********************************
*                                 *
*  main.c                         *
*  fonction principale            *
*  Auteur : Hugo Mohamed          *
*  Date de création : 03/02/2018  *
*                                 *
**********************************/

#ifndef MAIN_C
#define MAIN_C

#include "utilitaire.h"
#include "fonctions_std.h"
#include "fonctions_trigo.h"

// fonction d'usage
void usage(char *s);

int main(int argc, char *argv[])
{
	double res;

	// Si trop/pas assez d'arguments
	if(argc < 3 || argc > 4)
	{
		usage(argv[0]);
	}

	// Avec une fonction
	if(argc == 3)
	{
		res = ut_fonction(argv);
		fprintf(stdout,"%s %s vaut %lf\n",argv[1],argv[2],res);
	}

	// Avec une opération
	if(argc == 4)
	{
		res = ut_codeOp(argv);
		fprintf(stdout,"%s %s %s = %lf\n",argv[1],argv[2],argv[3],res);
	}

	exit(EXIT_SUCCESS);
}

// Affiche l'utilisation du programme et quitte.
void usage(char *s)
{
	fprintf(stderr,"Usage : %s <nombre> <opérande> <nombre>\nOU\n%s <fonction> <nombre>\n", s,s);
	exit(EXIT_FAILURE);
}

#endif
