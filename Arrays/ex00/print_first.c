/*
	Completez la ligne `printf();` afin d'imprimer le premier element du tableau.
	Le terminal devra afficher :
		0
*/

#include <stdio.h>

int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4};

	printf();
}

/*
	Nous pourrions aussi ecrire :

		int	main(void)
		{
			int	tab[5];
			int	i = 0;

			while (i < 5)
			{
				tab[i] = i;
				i++;
			}

			//printf();
		}

	Ou bien :

		#include <stdlib.h>

		int	main(void)
		{
			int	*tab;
			int	i = -1;

			tab = (int *)malloc(sizeof(int) * 5);
			if (!tab)
				return (0);
			while (++i < 5)
				tab[i] = i;

			//printf();
			free(tab);
		}

	Mais c'est plus lisible sur une seule ligne...
*/
