/*
    Completez la fonction `int change_letter(void);`.
    Vous n'avez pas besoin d'ajouter plus d'une ligne.
    Le terminal devra afficher :
        Publiez-moi !
*/

#include <stdio.h>

int change_letter(void)
{
    return (1);
}

int main(void)
{
    char    str[] = "Oubliez-moi !";
    char     nbr = change_letter();

    *str += nbr;
    printf("%s\n", str);
}

/*
    La ligne :
        *str += nbr;
    indique que la valeur pointee par `str` est incrementee de `nbr`.
    Au-dessus, on initialise `nbr` avec la fonction `change_letter` et pour passer du 
    `O` au `P`, il suffit d'ajouter 1.
    Nous ecrivons donc :
        return (1);
    pour incrementer `*str` de 1 et faire passer le `O` a `P`.
*/