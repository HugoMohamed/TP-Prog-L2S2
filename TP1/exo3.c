#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2;
    float x;
    x = 5/i;
    printf("Valeur de x: %d\n",x);

    exit(EXIT_SUCCESS);
}


/*
On obtient : Valeur de x: 2.000000

x = 5.0/i : Valeur de x: 2.500000
x = 5./i : Valeur de x: 2.500000
x = 5/(float)i : Valeur de x: 2.500000
x = (float)5./i : Valeur de x: 2.500000


warning
 */
