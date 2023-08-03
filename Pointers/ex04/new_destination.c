/*
    Completez la fonction `main` afin que le programme se lance sans erreur.
    Le terminal devra afficher :
        You've reached your destination.
        Welcome to your new home!
*/

#include <stdio.h>

void    arrival(char **str1, char **str2)
{
    printf("%s%s", *str1, *str2);
}

int main(void)
{
    char    *str1 = "You've reached your destination.\n";
    char    str2[] = "Welcome to your new home!";

    arrival(&str1, &str3);
}

/*
        char    *str1 = "You've reached your destination.\n";
    pourrait aussi s'ecrire :
        char    *str1 = (char [])
            {'Y', 'o', 'u', '\'', 'v', 'e', ' ',
            'r', 'e', 'a', 'c', 'h', 'e', 'd', ' ',
            'y', 'o', 'u', 'r', ' ',
            'd', 'e', 's', 't', 'i', 'n', 'a', 't', 'i', 'o', 'n', '.', '\n', '\0'};
    A la fin de la chaine, on ajoute `\0` afin d'indiquer qu'elle se termine.
*/