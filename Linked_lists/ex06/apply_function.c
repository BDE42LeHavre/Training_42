/*
	Corrigez le script afin de ne plus avoir d'erreur lors de l'execution du programme.
	Le terminal devra afficher :
		Bonjour, qui etes-vous ?
*/

#include <unistd.h>

typedef struct    s_list
{
    void          *data;
    struct s_list *next;
}                 t_list;

void	function_to_apply(void *data_ptr)
{
	void	*data = data_ptr;
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
	t_list	node_b = {"etes-vous", &node_c};
	t_list	node_c = {"qui", &node_b};
	t_list	node_d = {"Bonjour,", &node_c};

	list_foreach(&node_d, function_to_apply);
	write(1, "\n", 1);
}