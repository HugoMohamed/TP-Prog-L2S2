#ifndef DICO_C
#define DICO_C

#include "dico.h"

int existe(dictionnaire d, char * mot)
{
	int i = 0;
	dictionnaire p = d;

	while(i < strlen(mot))
	{
		if(mot[i] != p->objet)
		{
			if(mot[i] == p->droit->objet)
			{
				p = p->droit;
			}
			else
				return 0;
		}
		else
			p = p->gauche;
	}

	return 1;
}

void affiche_dico(dictionnaire d)
{

}

#endif
