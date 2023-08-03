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


	while (addition(&nbr, add) != 42)
		printf("%d", nbr);
	printf("\n");
}

/*
	Nous allons appeller la fonction `addition` dans la boucle `while`.
	Cette fonction prend en premier parametre l'adresse de la variable `nbr`, ce qui va
	lui permettre de modifier la valeur directement via son pointeur `*nbr`.
	La fonction `addition` ne fait qu'additionner le deuxieme nombre au premier.
*/