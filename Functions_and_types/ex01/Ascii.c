/*
    Modifiez la ligne dans la fonction `char type(void)` sans en ajouter une seule
    afin que le programme puisse se compiler.
    Le terminal devra afficher :
        Mais qui est ce type ??
        C'est de moi qu'tu parles ?!
*/

#include <stdio.h>

char type(void)
{
    printf("C'est de moi qu'tu parles ?!\n");
}

int main(void)
{
    printf("Mais qui est ce type ??\n");
    return (type());
}

/*
    "To be or not to be..."
*/