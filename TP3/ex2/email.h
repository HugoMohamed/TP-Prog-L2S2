#ifndef EMAIL_H
#define EMAIL_H

#include <stdio.h>
#include "filemail.h"

typedef filem file_mail;

// Ajoute un mail
file_mail ajouter_mail(file_mail f, mail m);

// Supprime un mail
file_mail suppr_mail(file_mail f);

// Affiche les mails
void afficher_mail(file_mail f);

// Tri les mails
void tri_mail(filem f);

void afficher_mail_expediteur(file_mail l);

#endif
