#include <stdio.h>

int main(void)
{
    char    *str = "Pointers are easy";

    str += 7;
    printf("%c\n", *str);
}

/*
    Le pointeur etant sur le premier caractere de la chaine `str`, il faut le mettre
    devant le `s`.
    On ajoute alors :
        str += 7;
    
    Avant :
             pointeur
             |
             v
    Chaine : [P][o][i][n][t][e][r][s][ ][a][r][e][ ][e][a][s][y][\0]
    Index :   0  1  2  3  4  5  6  7  8  9 10 11 12 13  14 15 16 17

    Apres :
                                   pointeur
                                   |
                                   v
    Chaine : [P][o][i][n][t][e][r][s][ ][a][r][e][ ][e][a][s][y][\0]
    Index :   0  1  2  3  4  5  6  7  8  9 10 11 12 13  14 15 16 17
*/