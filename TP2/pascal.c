/********************************************
 *                                           *
 *  pascal.c                                 *
 *  calcul et affiche le triangle de pascal  *
 *  (nb de lignes en parametre)              *
 *                                           *
 ********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,j,k,n;
    int **tab;
    if(argc < 2)
    {
	fprintf(stderr,"Usage : %s <taille> ...\n", argv[0]);
	exit(EXIT_FAILURE);
    }
      
    for(i=1;i<argc;i++)
    {
	n = atoi(argv[i]);
	tab = (int **) malloc(n*sizeof(int *));
	for(j=0;j<=n;j++)
	    tab[j] = (int *) malloc((j+1) * sizeof(int));

	if(tab == NULL)
	{
	    fprintf(stderr,"Impossible d'allouer la mémoire.\n");
	    exit(EXIT_FAILURE);
	}

	for(j=0;j<=n;j++)
	{
	    tab[j][0] = 1;
	    for(k=1;k<j;k++)
	    {
		tab[j][k] = tab[j-1][k-1] + tab[j-1][k];
	    }
	}

	for(j=0;j<=n;j++)
	{
	    for(k=0;k<j;k++)
	    {
		fprintf(stdout,"%d ", tab[j][k]);
	    }
	    fprintf(stdout,"\n");
	}
	fprintf(stdout,"\n");
    }

    exit(EXIT_SUCCESS);
}
