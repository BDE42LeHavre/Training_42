/*
	Rajoutez une seule ligne afin de ne plus avoir d'erreur lors du lancement du programme.
	Le terminal devra afficher :
		0
	Ou :
		1
*/

#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	i = 0;

	tab = (int *)malloc(sizeof(int) * 5);
	if (!tab)
		return (0);
	while (i < 5)
	{
		tab[i] = i;
		i++;
	}
	tab++;
	printf("%d\n", *tab);
	free(tab);
}

/*
	Ici, 

		printf("%d\n", *tab);

	est egal a :

		printf("%d\n", tab[1]);
	
	Sur la ligne au dessus du printf, vous pouvez voir :

		tab++;
	
	Cela fait passer le pointeur (imaginez un curseur sur une case) 
	sur l'element suivant du tableau, ce qui veut dire que toute manipulation
	avec ce pointeur le fera avec le tableau incomplet.
	Il faudrait donc revenir au debut du tableau...
*/
