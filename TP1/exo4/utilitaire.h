/***********************************
 *  utilitaire.h                   *
 *  header de utilitaire.c         *
 *  Auteur : Hugo Mohamed          *
 *  Date de création : 03/02/2018  *
 **********************************/

#ifndef UTILITAIRE_H
#define UTILITAIRE_H

#include "fonctions_std.h"
#include "fonctions_trigo.h"

// Fonction d'usage
void ut_usage();

// Renvoie le premier opérande
double ut_op1(char *op[]);

// Renvoie le second opérande
double ut_op2(char *op[]);

// Renvoie le résultat de l'opération
double ut_codeOp(char *op[]);

// Renvoie le résultat de la fonction
double ut_fonction(char *fct[]);

// renvoie le réel correspondant au paramètre
double ut_arg(char *fct[]);

#endif
