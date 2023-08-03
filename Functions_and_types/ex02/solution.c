#include <stdio.h>

int *swap_element(int  *tab)
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
    Nous pouvons voir que la fonction `swap_element` retourne `tab`.
    `tab2` etant une variable de type `int *`,
    nous devons donc assigner ce type a la fonction `swap_element`.
*/