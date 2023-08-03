/*
    Completez la fonction `int change_letter(void);`.
    Vous n'avez pas besoin d'ajouter plus d'une ligne.
    Le terminal devra afficher :
        Publiez-moi !
*/

#include <stdio.h>

int change_letter(void)
{

}

int main(void)
{
    char    str[] = "Oubliez-moi !";
    char     nbr = change_letter();

    *str += nbr;
    printf("%s\n", str);
}

/*
    Nous n'avons pas besoin de rajouter un `return` dans la fonction `main`,
    le compileur le fait automatiquement.

    Au fait, pourquoi `*str += nbr;` fonctionne mais pas `*str++;` ?
    Tout simplement parce que `str[]` est un array et qudvthzv svlb... *signal perdu*
*/