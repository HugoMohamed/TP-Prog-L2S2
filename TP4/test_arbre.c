#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"

int main(int argc, char *argv[])
{
    arbre a = creer_arbre_vide();
    int position = 0;
	int *pos = &position;
    a = creer_arbre_expression(argv[1],pos);
	affiche_arbre(a);

	printf("%d\n", eval(a));

    exit(0);
}
