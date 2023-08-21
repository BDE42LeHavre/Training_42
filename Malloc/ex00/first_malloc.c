/*
	Modifiez la ligne `str = (char *)malloc(sizeof(char) * 9);`
	dans la fonction `main(void)` afin de ne plus avoir d'erreur lors de l'execution du programme.
	Vous n'avez pas besoin de rajouter de ligne.
	Le terminal devra afficher :
		Bonjour !
*/

#include <unistd.h>
#include <stdlib.h>

void	string_copy(char *str1, char *str2)
{
	int		i = 0;

	while (str2[i])
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = 0;
}

int	main(void)
{
	char	*str;
	int		i = 0;

	str = (char *)malloc(sizeof(char) * 9);
	string_copy(str, "Bonjour !");
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
	free(str);
}

/*
	La fonction `malloc()` permet d'allouer dynamiquement de la memoire pour nos variables.
	Allouer trop de memoire peut, a force, resulter en un manque de memoire et faire planter l'ordinateur.
	La memoire allouee le reste juqu'a ce qu'elle soit liberee avec `free()`.
	Ne pas allouer assez de memoire, en revanche, resulte automatiquement en un `segfault`
	quand nous essayons d'acceder a ces blocs non alloues.
*/