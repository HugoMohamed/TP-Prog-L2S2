#include <stdio.h>
#include <stdlib.h>

void change(int n);
void changePtr(int *n);

int main()
{
    int n = 6;
    fprintf(stdout,"Valeur avant changement : %d\n",n);
    change(n);
    fprintf(stdout,"Apres changement sans pointeur : %d\n",n);
    changePtr(&n);
    fprintf(stdout,"Apres changement avec pointeur : %d\n",n);

    exit(EXIT_SUCCESS);
}

void change(int n)
{
    n = 5;
}

void changePtr(int *n)
{
    *n = 5;
}
