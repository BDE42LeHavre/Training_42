#include <stdio.h>

void    journey(char *passenger, int *amount)
{
    printf("There are %i passengers named \"%c\" for this trip.", *amount, *passenger);
}

int main(void)
{
    int nbr = 42;
    char c = 'v';

    journey(&c, &nbr);
}

/*
    Il nous faudra passer les adresses des variables `c` et `nbr` en arguments
    de la fonction `journey` et indiquer les pointeurs en parametres dans le meme ordre.
*/