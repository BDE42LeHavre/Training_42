#include <stdio.h>

void    terraform(int *i)
{
    static int terraformer = 0;

    while (*i != 42)
    {
        terraformer += *i;
        printf("%c", terraformer);
        i++;
    }
}

int main(void)
{
    int *tab = (int[]){116, -15, 13, 0, -17, 5, 9, 3, -5, -4, 5, -7, -57, 0, 0, 42};

    terraform(tab);
}

/*
    Les valeurs du tableau correspondent aux valeurs decimales des caracteres de 
    la table ascii. 
    La consigne demande  d'afficher `terraforming...`, ce qui represente 15 caracteres.
    La boucle `while` de la fonction `terraform()` nous fait avancer jusqu'a ce que
    l'on rencontre une valeur de 42, ca sera notre valeur sentinelle.
    Il faut donc rajouter 1 caractere dans le tableau `tab`, pour un total de 16 !
    Voyant que la fonction `terraformer` ajoute la valeur qui est dans chaque case
    du tableau `tab`, nous allons donc mettre des valeurs en fonction des precedentes.
    Sachant que la variable `terraformer` dans la fonction `terraform()` est
    declaree et initialisee a 0, la premiere valeur de `tab` doit etre sa valeur ascii, 
    c'est-a-dire 116, ou 't'.
    La valeur suivante sera donc 116 + (-15), ce qui donnera 101, ou 'e'.
    Il faut continuer ainsi jusqu'a ce le tableau soit rempli selon les caracteres
    qu'on veut afficher.
*/