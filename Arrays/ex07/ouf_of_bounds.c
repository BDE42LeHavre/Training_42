/*
	Corrigez la fonction `main(void)` afin de ne plus avoir d'erreur lors de l'execution
	du programme.
	Vous devrez compiler le programme avec `gcc -Wall -Wextra -Werror -fsanitize=address`.
	N'ajoutez ou ne supprimez aucune ligne, modifiez-en seulement !
	Le terminal devra afficher :
		Oops
*/

#include <unistd.h>

int	main(void)
{
	char	str[4] = "Oops";
	int		i = 0;

	while (1)
	{
		if (str[i] == '0' || i >= 4)
			return (0);
		write(1, &str[i++], 1);
	}
}

/*
	Tout est en ordre, chef !
		- Le soldat Kina Pakonpri.
*/