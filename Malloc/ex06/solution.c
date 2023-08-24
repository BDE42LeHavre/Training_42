#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		*tab;
	char	*str;

	str = (char *)malloc(sizeof(char) * 7 + 1);
	tab = (int *)malloc(sizeof(int) * (3 + 1));
	strcpy(str, "Tableau");
	for(int i = 0; i < 4; i++)
		tab[i] = i + 1;
	printf("%s\n\n\033[1A%d\n\n\033[1A %d\n\n\033[1A  %d\n\n\033[1A   %d",
		str, tab[0], tab[1], tab[2], tab[3]);
	free(tab);
	free(str);
}

/*
	La premiere erreur est lors du `malloc()` de `tab`.
	Il faut mettre `3 + 1` entre parentheses (il y a une multiplication avec une priorite)
	ou bien ecrire 4 afin que la taille allouee au tableau soit correcte.
	La deuxieme erreur est  dans la boucle `for`. La taille du tableau est de 4, il faut donc
	que la condition dans la boucle soit `i < 4` (0, 1, 2, 3).
	La troisieme et derniere erreur est le manque de `free`.
	Cela provoque des `fuites de memoire`, ce qui n'est pas bon !
*/
