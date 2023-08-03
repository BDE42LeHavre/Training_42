#include <stdio.h>

void    print_tab(int tab[])
{
    int i = 0;

    while (tab[i] != -1)
        printf("%d\n", tab[i]);
}

int main(void)
{
    int tab2[6] = {4, 5, 6, 7, 8, -1};
    int tab1[] = {1, 2, 3, -1};

    print_tab(tab1);
    print_tab(tab2);
}

/*
    En regardant les tableaux, vous pouvez voir qu'il y a deux valeurs identiques a la fin.
    Il s'agit de valeurs sentinelles, permettant a l'utilisateur de pouvoir
    iterer a travers le tableau et de s'arreter a la derniere valeur
    meme s'il est passe en parametre dans une autre fonction.
    Cela fonctionne de la meme facon que le `\0` a la fin d'une chaine de caracteres.
*/