/*
    Completez l'appel de la fonction `journey` dans la fonction `main` afin de passer 
    `c` en argument.
    Le terminal devra afficher :
        p
*/

#include <stdio.h>

void    journey(char *passenger)
{
    printf("%c\n", *passenger);
}

int main(void)
{
    char c = 'p';

    journey();
}