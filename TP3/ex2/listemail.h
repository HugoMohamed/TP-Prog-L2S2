#ifndef LISTEMAIL_H
#define LISTEMAIL_H

#include "allocation.h"

typedef struct
{
    char* expediteur;
	char* sujet;
	char* date;
	char* contenu;
}mail;

typedef mail elementm;

typedef struct cellulem
{
    elementm objet;
    struct cellulem * suivant;
}struct_cellulem;

typedef struct_cellulem * listem;

/* renvoie la liste vide */
listem liste_videm();

/* teste si une liste est vide */
int est_liste_videm(listem l);

/*ajoute un element elem a la liste l */
listem inserer_element_listem(listem l, elementm elem);

/* renvoie le premier element de la liste l */
elementm renvoie_premier_listem(listem l);

/* supprime la premiere cellule de la liste l */
listem supprimer_premier_listem(listem l);

/* Affiche les mails */
void afficher_mail(listem l);
#endif
