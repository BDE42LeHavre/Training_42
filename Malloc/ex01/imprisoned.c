/*
	Corrigez la fonction `main(void)` afin de ne plus avoir d'erreur lors de l'execution du programme.
	Le terminal devra afficher :
		Hey psst !
*/

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*string_copy(char *str2)
{
	char	*str;
	int		i = 0;

	str = (char *)malloc(sizeof(char) * ft_strlen(str2) + 1);
	while (str2[i])
	{
		str[i] = str2[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

int	main(void)
{
	char	*str;
	int		i = 0;

	str = string_copy("Hey psst !");
	while (i < 12)
		write(1, &str[i++], 1);
	return (0);
	free(str);
}

/*
	Tout `malloc` doit avoir son `free`.
	Faites attention aux conditions de sortie qui peuvent demander de faire un `free` autre part.
*/