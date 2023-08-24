#include <stdio.h>

void    arrival(char **str1, char **str2)
{
    printf("%s%s", *str1, *str2);
}

int main(void)
{
    char    *str1 = "You've reached your destination.\n";
    char    str2[] = "Welcome to your new home!";
    char    *str3 = str2;

    arrival(&str1, &str3);
}

/*
    Il nous faut rajouter la variable `str3` afin de pouvoir la passer en parametre lors de
    l'appel de la fonction :
        `arrival(&str1, &str3);`
    Pour que le `printf()` affiche le texte demande, nous devons initialiser la variable
    `str3` avec la valeur `str2`.
*/