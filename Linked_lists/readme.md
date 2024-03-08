<h2>Petites explications sur les listes chainees. </h2>

Une linked list est une liste composee d'elements attaches entre eux par un pointeur, le plus souvent represente par `t_lst	*next;`.

Ainsi, si nous ecrivons :

```C
	typedef struct	s_contact
	{
		int					data;
		struct s_contact	*next;
	}				t_contact;

	int	main(void)
	{
		t_contact	contact1;
		t_contact	contact2;
		t_contact	contact3;

		contact1.data = 1;
		contact2.data = 2;
		contact3.data = 3;
	}
```

Ca ne suffit pas, il n'y a aucun element attache.

Il faut donc attacher les elements ensemble avec la variable `struct s_contact	*next;`.

```C
	#include <stdlib.h>
	#include <stdio.h>

	typedef struct	s_contact
	{
		int					data;
		struct s_contact	*next;
	}				t_contact;

	int	main(void)
	{
		t_contact	contact1;
		t_contact	contact2;
		t_contact	contact3;

		contact1.data = 1;
		contact2.data = 2;
		contact3.data = 3;

		contact1.next = &contact2;
		contact2.next = &contact3;
		contact3.next = NULL;

		printf("%d\n", contact1.next->data);
	}
```

Le `contact2` est bien attache a `contact1.next` et `contact3` est attache a `contact2.next`. 

`&contact2` veut dire "L'adresse de `contact2`". C'est une adresse en hexadecimal et c'est donc assignable a un pointeur.

De plus, nous avons mis le `.next` du dernier element de la liste a `NULL`, ce qui nous permettra d'iterer a travers la chaine jusqu'a trouver `NULL`, comme avec `char *str`.

Lors de l'execution du programme, le terminal affichera :

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/output_linked_list.png>

Visuellement, la liste chainee donne quelque chose du genre :

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/linked_list.jpg width=512>

<h2>Iteration :</h2>

Lorsque l'on veut iterer a travers une liste chainee, on met le pointeur de la liste sur l'element suivant, comme ceci :

```C
	t_contact	*contacts;

	contacts = contacts->next;
```

Au debut, le pointeur est place comme ceci :

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/first_linked_list.jpg width=512>

Mais une fois le pointeur place sur l'element suivant, on perd l'adresse du premier element de la liste :

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/second_linked_list.jpg width=512>

Il nous faut donc enregistrer le pointeur de ce debut de liste. Pour cela nous pouvons ecrire (nous passons `contacts` dans une autre fonction, parce qu'on ne fait pas tout dans le `main()`, hein !) :

```C
	void	function(t_contact	*contacts)
	{
		t_contact	*head;

		head = contacts;

		while (head)
		{
			// on fait ce qu'on veut
			head = head->next;
		}
	}
```

Nous pouvons a present iterer a travers la liste sans perdre le debut de celle-ci.
