#include <unistd.h>

typedef struct    s_list
{
    void          *data;
    struct s_list *next;
}                 t_list;

void	function_to_apply(void *data_ptr)
{
	t_list	*data = data_ptr;
	char	*str = data->data;
	int	i = 0;

	while (str[i])
		write(1, &str[i++], 1);
	write(1, " ", 1);
}

void    list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*tmp_list = begin_list;
	
	while (tmp_list)
	{
		(*f)(tmp_list);
		tmp_list = tmp_list->next;
	}
}

int	main(void)
{
	t_list	node_a = {"?", NULL};
	t_list	node_b = {"etes-vous", &node_a};
	t_list	node_c = {"qui", &node_b};
	t_list	node_d = {"Bonjour,", &node_c};

	list_foreach(&node_d, function_to_apply);
	write(1, "\n", 1);
}

/*
	Il y a deux erreurs.
	La premiere est dans la fonction `main` : le pointeur `next` de `node_b` pointait vers lui-meme
	au lieu de `node_a`.
	La deuxieme est dans la fonction `void	function_to_apply(void *data_ptr)`.
	La variable `*data` doit etre de type `t_list` et non `void`. Nous devons definir precisement le type afin de
	pouvoir acceder aux variables contenues dans le `struct`.
*/