#include <stdio.h>

int main(void)
{
    int tab[3] = {1, 2, 3};
    int i = 0;
    int current_number;

    while (i < 3)
    {
        current_number = tab[i++];
        printf("%d\n", current_number);
    }
}

/*
    Nous pouvons voir que le tableau a une taille pouvant contenir 3 elements.
    Or, il n'y en a que deux de determines.
    Nous pouvons simplement mettre le troisieme element lors de la declaration
    de la variable ou bien nous pouvons ajouter une ligne :
        tab[2] = 3;
*/
