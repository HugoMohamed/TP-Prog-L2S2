#ifndef ARBRE_C
#define ARBRE_C

#include "arbre.h"
#include <stdlib.h>
#include <stdio.h>

arbre creer_arbre_vide()
{
    return NULL;
}

int est_vide(arbre a)
{
    return a == NULL;
}

arbre creer_noeud(char c)
{
    arbre a = (arbre)malloc(sizeof(struct_noeud));
    a->objet = c;
    a->gauche = NULL;
    a->droit = NULL;

    return a;
}

arbre creer_arbre(char c,arbre filsgauche,arbre filsdroit)
{
    arbre a = creer_arbre_vide();
    a = creer_noeud(c);
    a->gauche = filsgauche;
    a->droit = filsdroit;

    return a;
}

arbre inserer_fils_gauche(arbre a,arbre filsgauche)
{
    a->gauche = filsgauche;
    return a;
}

arbre inserer_fils_droit(arbre a,arbre filsdroit)
{
    a->droit = filsdroit;
    return a;
}

void affiche_arbre(arbre a)
{
	fprintf(stdout,"%c\n",a->objet);

	if(!est_vide(a->gauche))
		affiche_arbre(a->gauche);
    if(!est_vide(a->droit))
		affiche_arbre(a->droit);
}

int est_op(char c)
{
    switch(c)
    {
    	case '+' : return 1;
    	case '-' : return 1;
    	case '/' : return 1;
    	case '*' : return 1;
    	default : return 0;
    }

}

arbre creer_arbre_expression(char * expression, int * position)
{
    arbre a = creer_arbre_vide();
    char c = expression[*position];

	*position += 1;
	if(est_op(c))
    {
		a = creer_arbre(c,creer_arbre_expression(expression,position),creer_arbre_expression(expression,position));
    }
    else
    {
		a = creer_noeud(c);
    }
    return a;
}

int eval(arbre a)
{
	if(a->objet >= '0' && a->objet <= '9')
		return a->objet - '0';
	else if(a->objet == '+')
	{
		return eval(a->gauche) + eval(a->droit);
	}
	else if(a->objet == '-')
	{
		return eval(a->gauche) - eval(a->droit);
	}
	else if(a->objet == '*')
	{
		return eval(a->gauche) * eval(a->droit);
	}
	else if(a->objet == '/')
	{
		return eval(a->gauche) / eval(a->droit);
	}
	else
	{
		fprintf(stderr,"Expression invalide\n");
		exit(EXIT_FAILURE);
	}
}

#endif
