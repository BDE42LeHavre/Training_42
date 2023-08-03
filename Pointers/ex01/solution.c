#include <stdio.h>

int main(void)
{
    int numbers[] = {1, 3, 5, 7, 9, 10, -1};
    int *nbr = numbers;

    nbr = &numbers[5];
    while (*nbr != -1)
    {
        printf("%i\n", *nbr);
        nbr++;
    }
}

/*
    On va mettre le pointeur `nbr` devant l'element `10` qui se trouve
    a l'adresse `&numbers[5]`.
    Nous pouvons aussi ecrire cette instruction avec :
        nbr += 5;
    Avec la boucle `while`, le `printf` n'affichera que la derniere valeur avant -1.
*/