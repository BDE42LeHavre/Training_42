#include <stdio.h>

void    do_something(int *tab)
{
    int swap = tab[1];

    tab[1] = tab[0];
    tab[0] = swap;
}

int main(void)
{
    int tab[] = {0, 1, 2, 3, 4};
    int total_size = sizeof(tab) / sizeof(tab[0]);

    do_something(tab);
    for (int i = 0; i < total_size; i++)
        printf("%d\n", tab[i]);
}

/*
    Pour resoudre cet exercice, il suffit de faire un echange des deux premieres valeurs.
*/
