/*
	Completez la fonction `int	search_key(char *str, int i)` afin de ne plus avoir d'erreur lors de l'execution du programme.
	Le programme ne devra rien afficher.
*/

#include <stdlib.h>
#include <string.h>

int	search_key(char *str, int i)
{
	int	found_key = 0;

	if (str[i] == 0)
	{
		found_key = 1;
	}
	return (found_key);
}

int	main(void)
{
	char	*key;
	int		i = -1;

	key = (char *)malloc(sizeof(char) * 9);
	strcpy(key, "DEADBEEF");
	while (++i < 9)
	{
		if (search_key(key, i))
			return (0);
	}
	free(key);
	return (0);
}

/*
	Un `char` fait 1 bit, un `int` en fait 4. 
	Chaque type a sa taille.
*/