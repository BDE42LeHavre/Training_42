#include <unistd.h>

void    journey(char* passenger)
{
    int p = *passenger;
    
    write(1, &p, 1);
    write(1, "\n", 1);
}

int main(void)
{
    char c = 112;

    journey(&c);
}

/*
    La fonction `journey()` prend en parametre un pointeur sur `char`. Il faut donc appeler cette
    fonction en ecrivant `journey(&c)`.
    Ensuite, pour pouvoir ecrire `p` dans le terminal, il faut que la variable `p` ait la valeur
    du `char` pointe par `passenger`.
    Il faut donc ecrire `int p = *passenger;`.
    Traduisez par :
        La valeur de `p` est egale a la valeur pointee par `passenger`.
*/