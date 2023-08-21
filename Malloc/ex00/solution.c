#include <unistd.h>
#include <stdlib.h>

void	string_copy(char *str1, char *str2)
{
	int		i = 0;

	while (str2[i])
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = 0;
}

int	main(void)
{
	char	*str;
	int		i = 0;

	str = (char *)malloc(sizeof(char) * 10);
	string_copy(str, "Bonjour !");
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
	free(str);
}

/*
	Il faut modifier le `sizeof(char) * 9` en `sizeof(char) * 10` lors de l'allocation memoire. 
	En effet, pour une chaine de caracteres comme pour d'autres variables,
	il faut allouer la memoire pour la valeur `\0` ou NULL.
	Ici, la chaine de caracteres se termine par `\0`.
*/