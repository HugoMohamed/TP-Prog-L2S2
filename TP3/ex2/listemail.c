#ifndef LISTEMAIL_C
#define LISTEMAIL_C

#include "listemail.h"

listem liste_videm()
{
    return NULL;
}

int est_liste_videm(listem l)
{
    if(l == liste_videm())
	return 1;
    return 0;
}

listem inserer_element_listem(listem l, elementm elem)
{
    listem lnew = (listem)allocation_mem(1,sizeof(struct_cellulem));
    lnew->objet = elem;
    lnew->suivant = l;
    return lnew;
}

elementm renvoie_premier_listem(listem l)
{
    if(est_liste_videm(l))
    {
	fprintf(stderr,"Erreur, liste vide\n");
	exit(EXIT_FAILURE);
    }

    return l->objet;
}

listem supprimer_premier_listem(listem l)
{
    listem lsuivant = l->suivant;
    libere_mem(&l);
    return lsuivant;
}
#endif
