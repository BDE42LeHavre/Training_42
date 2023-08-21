/*
    Completez l'appel de la fonction `journey(char *passenger)` dans la fonction `main(void)` afin de passer 
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