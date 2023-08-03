/*
    Completez la fonction swap_values.
    Le terminal devra afficher :
        0 / 1
        1 / 0
        2 / 2
        3 / 3
        4 / 4
*/

#include <stdio.h>

struct s_tab
{
    int base_value;
    int value;
};

void    swap_values(struct s_tab *tab)
{

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
    Pour info :
        tab[0]
    est different de :
        tab[0].value
*/
