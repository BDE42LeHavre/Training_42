/*
    Completez la fonction do_something.
    Le terminal devra afficher :
        1
        0
        2
        3
        4
*/

#include <stdio.h>

void    do_something(int *tab)
{
    
}

int main(void)
{
    int tab[] = {0, 1, 2, 3, 4};
    int total_size = sizeof(tab) / sizeof(tab[0]);

    do_something(tab);
    for (int i = 0; i < total_size; i++)
        printf("%d\n", tab[i]);
}
