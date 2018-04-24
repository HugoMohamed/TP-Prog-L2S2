#include <stdio.h>
#include <stdlib.h>
#include "postfixe.h"

int main(int argc, char *argv[])
{
  	if(argc < 2)
	{
		fprintf(stderr,"Usage : %s \"expression postfixée\"\n",argv[0]);
		exit(-1);
    }

  	calcul_postfixe(argv[1]);
  	exit(0);
}
