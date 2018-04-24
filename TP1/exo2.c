/*************************
 * Fonction de Ackermann *
 ************************/

#include <stdio.h>
#include <stdlib.h>

int ackermann(int m, int n)
{
    if(m == 0)
    {
	return n+1;
    }
    else if(m > 0 && n == 0)
    {
	return ackermann(m-1,1);
    }
    else if(m > 0 && n > 0)
    {
	return ackermann(m-1,ackermann(m,n-1));
    }

    return 0;
}

int main(int argc,char* argv[])
{
    int m = atoi(argv[1]);
    int n = atoi(argv[2]);

    fprintf(stdout,"ackermann(%d,%d) = %d\n",m,n,ackermann(m,n));

    exit(EXIT_SUCCESS);
}
