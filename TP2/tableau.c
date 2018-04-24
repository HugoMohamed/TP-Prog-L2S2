#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int n;
    char *p = NULL;
    char *tab;
    
    if(argc < 2)
    {
	fprintf(stderr,"Usage : %s <taille>\n",argv[0]);
	exit(EXIT_FAILURE);
    }

    n = atoi(argv[1]);
    srand(time(NULL));

    tab = malloc(n * sizeof(char));
    if(tab == NULL)
    {
	fprintf(stderr,"Impossible d'allouer la mémoire %d",n);
	exit(EXIT_FAILURE);
    }
    
    p = tab;
    
    while(p != &tab[n])
    {
	*p = rand()%(123-97) + 97;
	fprintf(stdout,"%c",*p);
	p++;
    }

    fprintf(stdout,"\n");

    exit(EXIT_SUCCESS);
}
