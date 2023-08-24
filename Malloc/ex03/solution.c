#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	*tab;

	tab = (int *)malloc(sizeof(int) * 2);
	tab[0] = 4;
	tab[1] = 2;
	printf("%d%d\n", tab[0], tab[1]);
	free(tab);
}

/*
	`tab` est un tableau de type `int`.
	Il faut donc que le `malloc()` soit de ce type, car un `int` fait 4 bytes et non 1 (pour le `char`)
*/