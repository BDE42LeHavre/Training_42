/*
    Assignez une valeur a la variable `int *tab` dans la fonction `main`
    sans modifier quoi que ce soit d'autre.
    Voyez cet exercice comme une enigme.
    Le terminal devra afficher :
        terraforming...
*/

#include <stdio.h>

void    terraformer(int *i)
{
    static int terraformer = 0;

    while (*i != 42)
    {
        terraformer += *i;
        printf("%c", terraformer);
        i++;
    }
}

int main(void)
{
    int *tab;

    terraformer(tab);
}
