/*
	Completez la ligne `while ( != 42)` dans la fonction `main(void)`.
	Le terminal devra afficher :
		714212835
*/

#include <stdio.h>

int	addition(int *nbr, int to_add)
{
	*nbr += to_add;

	return (*nbr);
}

int	main(void)
{
	int	nbr = 0;
	int	add = 7;


	while ( != 42)
		printf("%d", nbr);
	printf("\n");
}

/*
	Pour modifier la valeur d'une variable dans une autre fonction,
	on peut passer son adresse (`&nbr`) lors de l'appel de celle-ci.
*/