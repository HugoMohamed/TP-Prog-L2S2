/***************************************************************
*                                                              *
*  utilitaire.c                                                *
*  fonction d'usage, recuperation des paramètres du programme  *
*  Auteur : Hugo Mohamed                                       *
*  Date de création : 03/02/2018                               *
*                                                              *
***************************************************************/

#ifndef UTILITAIRE_C
#define UTILITAIRE_C

#include "utilitaire.h"

// renvoie la partie gauche de l'opération
double ut_op1(char *op[])
{
    return atof(op[1]);
}

// renvoie la partie droite de l'opération
double ut_op2(char *op[])
{
    return atof(op[3]);
}

// Effectue l'opération entrée en paramètre
double ut_codeOp(char *op[])
{
	// Addition
    if(strcmp(op[2],"+") == 0)
		return ut_op1(op) + ut_op2(op);
	// Soustraction
	else if(strcmp(op[2],"-") == 0)
		return ut_op1(op) - ut_op2(op);
	// Multiplication
    else if(strcmp(op[2],"x") == 0) // on met x plutot que * car probleme en ligne de commande sinon.
		return ut_op1(op) * ut_op2(op);
	// Division
    else if(strcmp(op[2],"/") == 0)
		return ut_op1(op) / ut_op2(op);
	// Puissance
	else if(strcmp(op[2],"^") == 0)
		return pow(ut_op1(op),ut_op2(op));
	// Modulo
	else if(strcmp(op[2],"%") == 0)
		return (int)ut_op1(op) % (int)ut_op2(op);
	// PGCD
	else if(strcmp(op[2],"pgcd") == 0)
		return pgcd((int)ut_op1(op),(int)ut_op2(op));
	// En cas d'opération inconnue :
	else
	{
		fprintf(stderr,"Erreur : opérande \"%s\" inconnue.\n", op[2]);
		exit(EXIT_FAILURE);
	}
}

// Rnevoie le résultat de la fonction entrée en paramètre
double ut_fonction(char *fct[])
{
	// exp
    if(strcmp(fct[1],"exp") == 0)
		return std_exp(ut_arg(fct));

	// ln
    else if(strcmp(fct[1],"ln") == 0)
		return std_ln(ut_arg(fct));

	// log10
	else if(strcmp(fct[1],"log") == 0)
		return std_log(ut_arg(fct));

	// sqrt
	else if(strcmp(fct[1],"sqrt") == 0)
		return std_sqrt(ut_arg(fct));

	// cos
	else if(strcmp(fct[1],"cos") == 0)
		return mon_cos(ut_arg(fct));

	// sin
	else if(strcmp(fct[1],"sin") == 0)
		return mon_sin(ut_arg(fct));

	// tan
	else if(strcmp(fct[1],"tan") == 0)
		return mon_tan(ut_arg(fct));

	// En cas de fonction inconnue :
	else
	{
		fprintf(stderr,"Erreur : fonction \"%s\" inconnue.\n",fct[1]);
		exit(EXIT_FAILURE);
	}
}

// Renvoie le paramètre de la fonction entrée en paramètre
double ut_arg(char *fct[])
{
	return atof(fct[2]);
}

#endif
