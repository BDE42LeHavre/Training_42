#include <stdio.h>

int type(void)
{
    printf("Je ne sais pas...\n");
    return (0);
}

int main(void)
{
    printf("Mais qui est ce type ?!\n");
    return (type());
}

/*
    La fonction `int type(void);` est de type `int`, elle attend donc une valeur de retour
    de type `int`.
    Il faut donc ecrire :
        return (0);
    Mais vous pouvez aussi mettre n'importe quel `int` en fonction des besoins.
*/