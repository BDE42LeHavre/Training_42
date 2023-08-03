/*
    Modifiez ce fichier afin qu'il compile.
    Ne supprimez rien, rajoutez seulement du code.
    Voyez cet exercice comme une enigme.
    Le terminal devra afficher un prenom.
*/
#include "unlock.h"

void crack_address(int *code_to_crack, unsigned char *byte_ptr)
{
    code    omg;

    for (int i = sizeof(code_to_crack) - 3; i >= 0; i--) {
        omg = (char)byte_ptr[i] == ;
        printf("%c", omg);
    }
    printf("\n");
}

int main(void)
{
    vault        tool[] = 
    {
        61, 
        6D, 
        65, 
        (int)strtol("6C", NULL, 16), 
        69, 
        65
    };
    code            *code_to_crack = 0x010d050c0905;
    unsigned char   *byte_ptr = (unsigned char *)&code_to_crack;

    crack_address(code_to_crack, byte_ptr);
}

/*
    Le saviez-vous ?
    Il est possible d'attribuer une adresse memoire precise a une variable,
    meme si cela n'est pas recommande a moins de savoir exactement ce que vous faites.

    Ici, `sizeof(code_to_crack)` est egal a `sizeof(int *)`. On donne la taille
    du pointeur et non du contenu de la variable.

    `omg = (char)byte_ptr[i] == 1 ? -32 : (char)byte_ptr[i];` <- ce n'est pas une erreur.

    est une operation ternaire. On peut la lire de la facon suivante :

        omg = // variable a laquelle on va attribuer le resultat.
        (char)byte_ptr[i] == 1 ? // on pose une question
        -32 : (char)byte_ptr[i]; // la reponse est en deux parties.
        // si la reponse a cette question est oui, on retourne `-32`. 
        // sinon, on retourne `(char)byte_ptr[i]`

    Une operation ternaire est comme un `if else`, sauf que ca prend moins de place.

    Quelques citations de personnes prises au hasard :

    "Mon `esprit` est hante par ce `depot au fond de mon fut`."
        - Quelqu'un deux mysterieux.

    "Je suis quelqu'un avec une certaine adresse."
        - Une personne qui doit etre tres agile.

    "Prenez vos cahiers et ecrivez '6x2' !"
        - Surement un prof de maths.

    "J'y comprends rien, c'est pas facile..."
        - Vous.
*/