#include <unistd.h>

int	main(void)
{
	char	str[5] = "Oops";
	int		i = 0;

	while (i > -1)
	{
		if (i > 4 || str[i] == '0')
			return (0);
		write(1, &str[i++], 1);
	}
}

/*
	Changer l'ordre de la condition `if` suffit a supprimer l'erreur.
	En effet, il faut verifier que `i` ne soit pas superieur a la taille maximale du tableau AVANT
	d'essayer de lire cet emplacement.

		if (i > 4 || str[i] == '0')
	
	Dans un `if`, les conditions sont lues les unes apres les autres. Si la premiere est fausse,
	la seconde n'est pas lue.
*/
