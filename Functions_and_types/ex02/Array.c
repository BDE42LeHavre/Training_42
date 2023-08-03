/*
    Modifiez le prototype de la fonction `swap_element(int  *tab);`.
    Le terminal devra afficher :
        0
*/

#include <stdio.h>

swap_element(int  *tab)
{
    int swap = tab[1];

    tab[1] = tab[0];
    tab[0] = swap;
    return (tab);
}

int main(void)
{
    int tab1[2] = {1, 0};
    int *tab2;
    
    tab2 = swap_element(tab1);

    return (printf("%d\n", tab2[0]));
}

/*
    On peut aussi forcer un type a changer en utilisant un cast, par exemple `(long)`.
        long    nbr1 = 42;
        int     nbr2 = (long)nbr1;

    A faire seulement si une conversion est possible.
    Ici, le type long contient les valeurs INT_MIN et INT_MAX. 
*/