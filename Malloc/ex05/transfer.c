/*
	Completez la fonction `main(void)` afin de ne plus avoir d'erreur lors de l'execution du programme.
	Ne faites pas de `free(str)`, trouvez une autre solution !
	Le terminal devra afficher :
		Coucou
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*str;
	void	*str2;

	str = strdup("Coucou");
	printf("%s\n", str);
	free();
}

/*
	`free()` prend en parametre une adresse. Cette adresse est associee a une information
	importante lors du `malloc()`, la taille.
*/