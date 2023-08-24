#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*str;
	void	*str2;

	str = strdup("Coucou");
	str2 = str;
	printf("%s\n", str);
	free(str2);
}

/*
	Etant donne qu'il ne faut pas `free(str)` et que nous avons `void *str2`, nous pouvons
	faire pointer `str2` sur `str`.
	Le type `void` permet a la variable d'etre associee a n'importe quel autre type.
	Ensuite, nous pouvons `free(str2)`, ce qui va free la memoire associee a `str`.
*/