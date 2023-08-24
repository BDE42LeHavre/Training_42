/*
	Corrigez la fonction `main(void)` afin de ne plus avoir d'erreur lors de l'execution
	du programme.
	N'ajoutez ou ne supprimez aucune ligne, modifiez-en seulement !
	Le terminal devra afficher :
		Tableau
		1
		 2
		  3
		   4
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		*tab;
	char	*str;

	str = (char *)malloc(sizeof(char) * 7 + 1);
	tab = (int *)malloc(sizeof(int) * 3 + 1);
	strcpy(str, "Tableau");
	for(int i = 0; i < 3; i++)
		tab[i] = i + 1;
	printf("%s\n\n\033[1A%d\n\n\033[1A %d\n\n\033[1A  %d\n\n\033[1A   %d",
		str, tab[0], tab[1], tab[2], tab[3]);
}

/*
	Rien a voir avec `malloc()` :

	Dans le shell, un code comme `\033[1A` permet au curseur d'aller sur la ligne du dessus.
		`\033` est egal a `echap` en `ascii`, 
		`[1` indique de combien de lignes on bouge le curseur, 
		`A` indique qu'on bouge en haut.
	Il est donc possible de reecrire des lignes sans avoir a en ajouter.
	Pratique, par exemple pour faire une barre de chargement dans un makefile !
	Il y a bien d'autres codes du genre a decouvrir...
*/