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

		structure = (struct s_truct *)malloc(sizeof(struct s_truct));
		return (structure);
}

int	main(void)
{
		struct s_truct *structure;

		structure = malloc_structure();
		structure->c = 42;
		structure->nbr = 42;
		printf("%c\n", structure->c);
		free(structure);
}

/*
	Tout comme un `int`, `struct s_truct` est un type de variable.
	Il est donc logique de devoir indiquer ce type lors de l'allocation memoire.
	Il faut aussi deplacer le `free(structure);` apres le `printf("%c\n", structure->c);`
	afin de ne pas avoir de segfault.

	Le `sizeof` additionne directement les tailles des variables contenues dans le `struct`,
	nous n'avons pas a le faire. Mais nous pourrions ecrire `(struct s_truct *)malloc(8);` a la place.

	Pourquoi 8 au lieu de 5 (int = 4, char = 1) ?
	Parce que le compileur aligne les allocations de memoire afin que le systeme puisse y acceder
	plus rapidement.
	Il passe donc les 3 autres bytes que n'utilise pas le `char`.
	Cet article (en anglais) en parle : 
		https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/
*/