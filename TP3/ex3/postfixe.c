#ifndef POST_C
#define POST_C

#include "postfixe.h"
#include <string.h>

void erreur_exp()
{
    fprintf(stderr,"Expression entrée incorrecte\n");
}

int calcul_postfixe(char *exp)
{
    int i = 0, op1, op2, res = 0;
    pile p = pile_vide();
    while(i < strlen(exp))
    {
		if(exp[i] >= '0' && exp[i] <= '9')
		{
		    p = empiler(p, (int)(exp[i]-'0'));
		    i++;
		}
		else
		{
		    if(exp[i] == '*')
		    {
				if(!est_pile_vide(p))
				{
				    op1 = sommet(p);
				    p = depiler(p);
				}
				else
				{
				    erreur_exp();
				    return -1;
				}
				if(!est_pile_vide(p))
				{
				    op2 = sommet(p);
				    p = depiler(p);
				}
				else
				{
				    erreur_exp();
				    return -1;
				}
				p = empiler(p, op1 * op2);
				i++;
		    }
		    else
		    {
				if(exp[i] == '+')
				{
				    if(!est_pile_vide(p))
				    {
						op1 = sommet(p);
						p = depiler(p);
				    }
				    else
				    {
						erreur_exp();
						return -1;
				    }
				    if(!est_pile_vide(p))
				    {
						op2 = sommet(p);
						p = depiler(p);
				    }
				    else
				    {
						erreur_exp();
						return -1;
				    }
				    p = empiler(p, op1 + op2);
				    i++;
				}
				else
				{
				    if(exp[i] == ' ')
						i++;
				    else
				    {
						erreur_exp();
						return -1;
				    }
				}
		    }
		}
    }
    res = sommet(p);
    p = depiler(p);
    if(res != '*' && res != '+' && est_pile_vide(p))
    {
	printf("%d\n",res);
	return res;
    }
    else
    {
	erreur_exp();
	return -1;
    }
}

#endif
