/*
    Ajoutez une seule ligne dans la fonction `int type(void)`
    afin que le programme puisse se compiler.
    Le terminal devra afficher :
        Mais qui est ce type ?!
        Je ne sais pas...
*/

#include <stdio.h>

int type(void)
{
    printf("Je ne sais pas...\n");
}

int main(void)
{
    printf("Mais qui est ce type ?!\n");
    return (type());
}

/*
    Toutes les fonctions non-void ont besoin de retourner quelque chose.
    La moindre des choses est de leur faire plaisir et de leur donner ce qu'elles souhaitent.

    Ascii parait, les `char` et les `int` ont quelque chose en commun...
*/