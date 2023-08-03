#include <stdio.h>

struct s_tab
{
    int base_value;
    int value;
};

void    swap_values(struct s_tab *tab)
{
    struct s_tab swap = tab[0];

    tab[0] = tab[1];
    tab[1] = swap;
}

int main(void)
{
    struct s_tab tab[] = {{1, 0}, {0, 1}, {2, 2}, {3, 3}, {4, 4}};
    int i = -1;

    swap_values(tab);
    while (++i < 5)
        printf("%d / %d\n", tab[i].base_value, tab[i].value);
}
/*
    Ici, nous n'avons pas un simple tableau d'`int` mais un tableau de `struct`.
    Ces `struct` sont des boites contenant diverses choses. 
    Ils peuvent contenir des `int` mais aussi d'autres struct ! (des boites dans des boites)

    Tout comme pour faire un echange de deux int, nous allons faire un echange de deux 
        struct s_tab
    Donc nous interchangeons les deux boites comme on le ferait avec de simples `int`.
*/
