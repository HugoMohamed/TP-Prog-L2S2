#ifndef EMAIL_C
#define EMAIL_C

#include "email.h"

filem ajouter_mail(filem f, mail m)
{
    return enfilerm(f,m);
}

filem suppr_mail(filem f)
{
    return defilerm(f);
}

void afficher_mail(filem f)
{
    while(!est_file_videm(f))
	{
		fprintf(stdout,"Expediteur : %s\nSujet : %s\nDate : %s\nContenu :\n%s\n",f->objet.expediteur,f->objet.sujet,f->objet.date,f->objet.contenu);
		fprintf(stdout,"\n");

		f = f->suivant;
	}
}

void afficher_mail_expediteur(file_mail l)
{
    file_mail p = l;
    elementm tmp;


    while(p->suivant != NULL)
    {
	if((strcmp(p->objet.expediteur,p->suivant->objet.expediteur)) > 0)
	{
	    tmp = p->suivant->objet;
	    p->suivant->objet = p->objet;
	    p->objet = tmp;
	    p = l;
	}
	else
	    p = p->suivant;
    }
    afficher_mail(l);
}

void tri_mail(file_mail f)
{
    file_mail fnew = f;
    elementm tmp;

    while(fnew->suivant != NULL)
    {
		if((strcmp(fnew->objet.date,fnew->suivant->objet.date)) > 0)
		{
			tmp = fnew->suivant->objet;
		    fnew->suivant->objet = fnew->objet;
		    fnew->objet = tmp;
		    fnew = f;
		}
		else if((strcmp(fnew->objet.date,fnew->suivant->objet.date) == 0) &&  (strcmp(fnew->objet.expediteur,fnew->suivant->objet.expediteur)) > 0)
		{
			tmp = fnew->suivant->objet;
		    fnew->suivant->objet = fnew->objet;
		    fnew->objet = tmp;
			fnew = f;
		}
		else if((strcmp(fnew->objet.expediteur,fnew->suivant->objet.expediteur)) == 0 && (strcmp(fnew->objet.sujet,fnew->suivant->objet.sujet)) > 0)
		{
		    tmp = fnew->suivant->objet;
		    fnew->suivant->objet = fnew->objet;
		    fnew->objet = tmp;
			fnew = f;
		}
		else
		    fnew = fnew->suivant;
    }

    afficher_mail(f);
}
#endif
