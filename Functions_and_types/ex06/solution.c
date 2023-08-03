#include <stdio.h>
#define do_it just_do_it

void	addition(char *c)
{
	*c += 1;
}

void	just_do_it(char *c)
{
	static int	nbr_calls;

	nbr_calls++;
	addition(c);
	if (*c != '*')
		just_do_it(c);
	else
		printf("%d\n", nbr_calls);
}

int	main(void)
{
	char	c = 0;

	do_it(&c);
}

/*
	
*/