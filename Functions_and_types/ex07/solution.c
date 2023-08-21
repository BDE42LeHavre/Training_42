#include <unistd.h>

typedef struct    s_list
{
    void          *data;
    struct s_list *next;
}                 t_list;

void	function_to_apply(void *data)
{
	char	*str = data;
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
		(*f)(tmp_list->data);
		tmp_list = tmp_list->next;
	}
}

int	main(void)
{
	t_list	node_a = {"?", NULL};
	t_list	node_b = {"allez-vous", &node_a};
	t_list	node_c = {"comment", &node_b};
	t_list	node_d = {"Bonjour,", &node_c};

	list_foreach(&node_d, function_to_apply);
	write(1, "\n", 1);
}

/*
	Le nom de la fonction appelee nous indique quel prototype il faut chercher.
	La fonction concernee est juste au-dessus du `main`.
	Il faut maintenant regarder quels sont les parametres demandes.
	Nous avons un struct `t_list *begin_list` et une fonction `void (*f)(void *)`.

	En decomposant le dernier parametre, on trouve :
	- `void (*f)`, c'est le type de retour et le nom de la fonction. 
		(le nom qui sera utilise dans la fonction l'appelant).
		La fonction est donc de type `void`.
		Le pointeur `*f` indique seulement l'adresse de la fonction afin de la trouver puis l'executer.
	- `(void *)`, c'est le parametre de cette fonction. Un type `void *` indique que le parametre
		peut etre de n'importe quel type.
	
	La seule fonction applicable ici est `void	function_to_apply(void *data)`
*/