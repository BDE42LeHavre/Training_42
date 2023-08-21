/*
	Corrigez le script afin de ne plus avoir d'erreur lors de l'execution du programme.
	Le terminal devra afficher :
		*
*/

#include <stdlib.h>
#include <stdio.h>

struct s_truct
{
	char	c;
	int		nbr;
};

struct s_truct	*malloc_structure(void)
{
		struct s_truct *structure;

		structure = ()malloc(sizeof());
		return (structure);
}

int	main(void)
{
		struct s_truct *structure;

		structure = malloc_structure();
		structure->c = 42;
		structure->nbr = 42;
		free(structure);
		printf("%c\n", structure->c);
}