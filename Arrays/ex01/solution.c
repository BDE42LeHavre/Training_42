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
	tab--;
	free(tab);
}

/*
	Ici, nous avons la ligne 
		tab++;
	qui fait avancer le pointeur `tab` sur l'element suivant.
	Il faut donc retourner sur l'element precedent avec
		tab--;
	afin d'avoir a nouveau le tableau complet.
	`tab++` peut aussi s'ecrire `tab = tab + 1` ou meme `tab += 1`.
	`tab--` peut donc s'ecrire `tab = tab - 1` ou meme `tab -= 1`.
*/