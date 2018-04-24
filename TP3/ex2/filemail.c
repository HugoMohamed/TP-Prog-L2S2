#ifndef FILEMAIL_C
#define FILEMAIL_C

#include "filemail.h"

filem file_videm()
{
    return liste_videm();
}

int est_file_videm(filem f)
{
    return est_liste_videm(f);
}

filem enfilerm(filem f, elementm e)
{
    listem lnew = inserer_element_listem(liste_videm(),e);
    listem lcourant = f;

    if(est_file_videm(f))
	return lnew;

    while(lcourant->suivant != liste_videm())
    {
	lcourant = lcourant->suivant;
    }

    lcourant->suivant = lnew;

    return f;
}

elementm debut_filem(filem f)
{
    return renvoie_premier_listem(f);
}

filem defilerm(filem f)
{
    return supprimer_premier_listem(f);
}

int taille_filem(filem f)
{
    int n = 0;
    listem lcourant = f;

    while(lcourant)
    {
	n++;
	lcourant = lcourant->suivant;
    }

    return n;
}

#endif
