#include <stdio.h>

void    journey(char *passenger)
{
    printf("%c\n", *passenger);
}

int main(void)
{
    int c = 112;

    journey((char *)&c);
}

/*
    Pour pouvoir envoyer un `int` dans une fonction qui demande un `char *` en parametre,
    il faut faire un cast, c'est-a-dire convertir le type de la variable en un autre.
    Donc nous convertissons le type de variable a passer et nous precisons que nous passons
    l'adresse de cette variable, via le `&`.
*/