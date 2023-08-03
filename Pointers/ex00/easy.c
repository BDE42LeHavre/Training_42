/*
    Completez la fonction `main` en ajoutant une seule ligne.
    Le terminal devra afficher :
        s
*/

#include <stdio.h>

int main(void)
{
    char    *str = "Pointers are easy";

    printf("%c\n", *str);
}

/*
         pointeur
             |
             v
    Chaine : [P][o][i][n][t][e][r][s][ ][a][r][e][ ][e][a][s][y][\0]
    Index :   0  1  2  3  4  5  6  7  8  9 10 11 12 13  14 15 16 17

    Ici, `*str` indique que le pointeur (imaginez un curseur physique sur des lettres de scrabble)
    est place sur le premier caractere de la chaine "Pointers are easy".
    
    On peut dire que :
        *str = str[0];

    Si nous voulons avancer le pointeur au caractere suivant, nous allons devoir faire :
        str += 1;

    Le caractere pointe par `*str` est a present `o`;

    Attention :
        char *str;
    et
        char str[];
    sont differents !

    C'est le meme principe pour d'autres types de variables comme `int`, `float`, `struct`, ...
    un pointeur est un curseur sur un element.
*/