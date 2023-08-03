/*
	Ajoutez une ligne dans la condition `if (*c != '*')`, dans la fonction `just_do_it`.
	Le terminal devra afficher :
		42
*/

#include <stdio.h>
#define do_it just_do_it

void	addition(char *c)
{
	*c += 1;
}

void	just_do_it(char *c)
{
	static int	nbr_calls;

	nbr_calls++;
	addition(c);
	if (*c != '*')
	
	else
		printf("%d\n", nbr_calls);
}

int	main(void)
{
	char	c = 0;

	do_it(&c);
}

/*
	Finalement, la recursivite, c'est un peu comme une boucle `while`.

		void	just_do_it(int nbr)
		{
			nbr++;
			if (nbr != 10)
				just_do_it(nbr);
		}

	donne le meme resultat que :

		void	just_do_it(int nbr)
		{
			while (nbr != 10)
				nbr++;
		}

	Sauf qu'il peut y avoir d'autres instructions avant ou apres la recursivite,
	ce qui peut changer beaucoup de choses...
*/