/*
    Completez le prototype de la fonction `journey()` ainsi que l'appel de celle-ci
    dans la fonction `main(void)`.
    Le terminal devra afficher :
        There are 42 passengers named "v" for this trip.
*/

#include <stdio.h>

void    journey()
{
    printf("There are %i passengers named \"%c\" for this trip.", *amount, *passenger);
}

int main(void)
{
    int nbr = 42;
    char c = 'v';

    journey();
}

/*
    Rien a voir avec les pointeurs, mais on peut metter un backslash `\`
    pour forcer l'affichage de certains caracteres, comme les guillemets `"`.
*/