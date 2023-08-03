#include <stdio.h>

int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4};

	printf("%d", tab[0]);
}

/*
	tab[0] represente le premier element du tableau, a l'emplacement 0.
	Pour afficher l'element suivant, on peut ecrire tab[1].
	Attention ! Si on ecrit tab[2] alors qu'il n'y a que 2 elements dans le tableau, 
	on aura une erreur !
*/