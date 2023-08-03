/*
    Corrigez la fonction `void    o(char p)` et completez la fonction `int	a(char *z)`
    afin de ne plus avoir d'erreur lors de la compilation.
    Le terminal devra afficher :
        Hell
*/

#include <unistd.h>

void    o(char p)
{
    write(1, &p, 1);
    return (NULL);
}

int	a(char *z)
{
	int	m;

	m = 0;
	while (z[m])
		o(z[m++]);
}

int main(void)
{
    int f = a("Hell");

    return (f);
}

/*
    Dans un soucis de clarte, il est parfois preferable de creer plusieurs fonctions
    qui ne font qu'une chose. 
    Il est aussi hautement recommande de nommer ses fonctions et variables
    de facon a comprendre leur utilisation. 
    Ici, la fonction `a` est en realite `ft_putstr` et `o` est `ft_putchar`.
    Le cerveau accede ainsi plus rapidement aux informations utiles et c'est moins fatiguant.
    Aussi, lorsque vous rencontrerez des problemes dans votre code, il sera bien plus facile
    d'en trouver la source et de limiter la casse.
*/