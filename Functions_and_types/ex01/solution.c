#include <stdio.h>

char type(void)
{
    return (printf("C'est de moi qu'tu parles ?!\n"));
}

int main(void)
{
    printf("Mais qui est ce type ??\n");
    return (type());
}

/*
    La fonction `printf` est de type `int`, vous pouvez donc ecrire :
        return (printf("C'est de moi qu'tu parles ?!\n"));
    et ce, meme si la fonction `char type(void);` est de type `char`.
    En c, certaines conversions de types se font automatiquement.
*/