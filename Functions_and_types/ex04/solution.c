#include <unistd.h>

void    o(char p)
{
    write(1, &p, 1);
}

int a(char *z)
{
	int	m;

	m = 0;
	while (z[m])
		o(z[m++]);
    return (0);
}

int main(void)
{
    int f = a("Hell");

    return (f);
}

/*
    Il y a deux erreurs dans cet exercice.
    La premiere, c'est la fonction :
        void    o(char p)
    qui retourne `NULL`. Elle ne devrait rien retourner puisque c'est une fonction `void`.
    La deuxieme est dans la fonction :
        int	a(char *z)
    qui ne retourne rien alors que c'est une fonction de type `int`.
    Il faut donc retourner un `int`.
*/