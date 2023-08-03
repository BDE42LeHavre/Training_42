/*
    Completez la fonction `main` en ajoutant une seule ligne.
    Le terminal devra afficher :
        10
*/

#include <stdio.h>

int main(void)
{
    int numbers[] = {1, 3, 5, 7, 9, 10, -1};
    int *nbr = numbers;

    while (*nbr != -1)
    {
        printf("%i\n", *nbr);
        nbr++;
    }
}

/*
    Pour utiliser un pointeur dans une autre fonction, nous ecrivons en prototype :
        void    fonction(int *nbr);
    et l'argument lors de l'appel de la fonction s'ecrit :
        fonction(&nbr);
*/