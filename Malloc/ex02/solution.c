#include <stdlib.h>
#include <string.h>

int	search_key(char *str, int i)
{
	int	found_key = 0;

	if (str[i] == 0)
	{
		found_key = 1;
		free(str);
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
		if (search_key(key, i)) // nous sortons du programme si la condition est remplie.
			return (0);
	}
	free(key);
	return (0);
}

/*
	La boucle `while (++i < 9)` dans la fonction `main()` appelle la fonction `search_key` qui va verifier
	la valeur decimalede chaque caractere de la chaine `key`.
	Lorsque la valeur `0` (equivalente a `\0`) est rencontree, on sort du programme via `return (0)`.
	Puisque la chaine de caracteres `key` a recu de la memoire via `malloc()`, nous devons liberer
	cette memoire avant de sortir du programme.
	Il faut donc ecrire `free(str);` lorsque cette condition de sortie est rencontree.
*/