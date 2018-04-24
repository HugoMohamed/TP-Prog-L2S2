#include <stdio.h>
#include <stdlib.h>
#include "email.h"

int main()
{
    mail m1 = {"Hugo","test","13 mars 2018","ceci est un test"};
	mail m2 = {"Bobby","bonjour","6 juin 2006","slt cava ?"};
	mail m3 = {"Jean Claude Van Damme","JCVD","4 juin 2008","un film plutot sympa"};
	mail m4 = {"Sierra","Alpha","1 janvier 1999","Charlie Delta"};

    filem f = file_videm(f);

    f = ajouter_mail(f,m1);
	f = ajouter_mail(f,m2);
	f = ajouter_mail(f,m3);
	f = ajouter_mail(f,m4);

	afficher_mail(f);
	printf("\nAprès tri des mails :\n");
	tri_mail(f);
	//afficher_mail_expediteur(f);

    exit(0);
}
