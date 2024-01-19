/*
    Corrigez les lignes `int p = ;` et `journey();` afin de passer `c` en argument.
    Le terminal devra afficher :
        p
*/

#include <unistd.h>

void    journey(char* passenger)
{
    int p = ;
    
    write(1, &p, 1);
    write(1, "\n", 1);
}

int main(void)
{
    char c = 112;

    journey();
}

/*
    Dans :

        void    fonction(char *str)
        {
            char c = *str;
        }

    Le `char *str` est bien un pointeur.
    Mais dans `char c = *str`, `*str` n'est pas un pointeur.
    Cela se lit : 
        La valeur de la variable `c` est egale a la premiere valeur pointee par `str`.

    Pour `char *str = "Bonjour"`, `*str` est egal a `B`, `*(str + 1)` est egal a `o`
    et `*(str + 2)` est egal a `n`.
    C'est comme ecrire `str[0]`, `str[1]` et `str[2]`.
*/