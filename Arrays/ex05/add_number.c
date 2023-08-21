/*
    Completez la fonction `main(void)` afin que le terminal affiche :
        1
        2
        3

    Il n'y a rien a modifier, il faut seulement ajouter du code !
*/

#include <stdio.h>

int main(void)
{
    int tab[3] = {1, 2};
    int i = 0;
    int current_number;

    while (i < 3)
    {
        current_number = tab[i++];
        printf("%d\n", current_number);
    }
}
