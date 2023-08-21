/*
    Completez la fonction `main(void)`.
    Le terminal devra afficher :
        world
*/

#include <stdio.h>

int main(void)
{
    int *tab;

    tab = (int[]){8, 5, 12, 12, 15, -64, 23, 15, 18, 12, 4, 0};

    while (*tab != 0)
    {
        printf("%c", *tab + 96);
        tab++;
    }
}

/*
    Ici :

        while (*tab != 0)
        {
            printf("%c", *tab + 96);
            tab++;
        }

    peut aussi s'ecrire :

        while (*tab != 0)
            printf("%c", *tab++ + 96);

    Ainsi que :

        int *tab;

        tab = (int[]){8, 5, 12, 12, 15, -64, 23, 15, 18, 12, 4, 0};

    peut aussi s'ecrire :

        int tab[] = {8, 5, 12, 12, 15, -64, 23, 15, 18, 12, 4, 0};
*/