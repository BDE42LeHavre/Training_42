/*
    Completez la fonction `main(void)`.
    Le terminal devra afficher :
        42
*/

#include <stdio.h>

typedef struct s_node t_node;

struct s_node
{
    int value;
    t_node *next;
};

int main(void)
{
    t_node  node_b = {.value = 42};
    t_node  node_a = {.value = 21, .next = &node_b};

    node_a.next = &node_b;
    printf("%d\n", node_a.next->next->next->next->next->next->next->next->next->value);
}

/*
    Si nous voulons iterer a travers une liste chainee, le dernier element devra etre `NULL`.
        while (lst->next != NULL)
        {
            lst = lst->next;
        }

    Ceci afin de faire savoir au programme qu'on sort de la boucle `while` quand il trouve `NULL`.
    C'est le meme principe que pour ft_split. 
*/