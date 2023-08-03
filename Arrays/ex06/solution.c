#include <stdio.h>

int main(void)
{
	int *tab;

	tab = (int[]){8, 5, 12, 12, 15, -64, 23, 15, 18, 12, 4, 0};

	tab += 6;
	while (*tab != 0)
	{
		printf("%c", *tab + 96);
		tab++;
	}
}

/*
	Les valeurs du tableau indiquent des caracteres dans la table ascii.
	Le `printf` ajoute 96 a ces valeurs, ce qui indique qu'on commence par `a`.
	Les valeurs du tableau forment "hello world\0".
	Comme nous l'avons vu lors de l'exercice ex01, ecrire `tab++`
	fait avancer le curseur d'une case.
	Il suffit donc de faire suffisamment avancer le pointeur tab afin qu'il soit sur
	"world\0" et que la fonction `printf` imprime jusqu'au `\0`.
*/