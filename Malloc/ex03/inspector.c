/*
	Corrigez la fonction `main(void)` afin de ne plus avoir d'erreur lors de l'execution du programme.
	Le terminal devra afficher :
		42
*/

#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	*tab;

	tab = (char *)malloc(sizeof(char) * 2);
	tab[0] = 4;
	tab[1] = 2;
	printf("%d%d\n", tab[0], tab[1]);
	free(tab);
}